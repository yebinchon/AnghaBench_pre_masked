
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_16__ {int nFrom; scalar_t__ nTo; struct TYPE_16__* pNext; } ;
struct TYPE_15__ {int nDel; int nSubst; TYPE_4__** apSubst; TYPE_4__** apDel; int nByte; } ;
struct TYPE_14__ {int n; char* z; int isPrefix; TYPE_3__* a; } ;
struct TYPE_13__ {TYPE_4__* pCost; } ;
typedef TYPE_1__ EditDist3Lang ;
typedef TYPE_2__ EditDist3FromString ;
typedef TYPE_3__ EditDist3From ;
typedef TYPE_4__ EditDist3Cost ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_4__*,char const*,int) ;
 int FUNC_2 (char*,char const*,int) ;
 int FUNC_3 (TYPE_3__*,int ,int) ;
 TYPE_2__* FUNC_4 (int) ;
 TYPE_4__** FUNC_5 (TYPE_4__**,int) ;
 scalar_t__ FUNC_6 (char const*) ;
 int FUNC_7 (unsigned char,int) ;

__attribute__((used)) static EditDist3FromString *FUNC_8(
  const EditDist3Lang *VAR_0,
  const char *VAR_1,
  int VAR_2
){
  EditDist3FromString *VAR_3;
  EditDist3Cost *VAR_4;
  int VAR_5;

  if( VAR_1==0 ) return 0;
  if( VAR_2<0 ) VAR_2 = (int)FUNC_6(VAR_1);
  VAR_3 = FUNC_4( sizeof(*VAR_3) + sizeof(VAR_3->a[0])*VAR_2 + VAR_2 + 1 );
  if( VAR_3==0 ) return 0;
  VAR_3->a = (EditDist3From*)&VAR_3[1];
  FUNC_3(VAR_3->a, 0, sizeof(VAR_3->a[0])*VAR_2);
  VAR_3->n = VAR_2;
  VAR_3->z = (char*)&VAR_3->a[VAR_2];
  FUNC_2(VAR_3->z, VAR_1, VAR_2+1);
  if( VAR_2 && VAR_1[VAR_2-1]=='*' ){
    VAR_3->isPrefix = 1;
    VAR_2--;
    VAR_3->n--;
    VAR_3->z[VAR_2] = 0;
  }else{
    VAR_3->isPrefix = 0;
  }

  for(VAR_5=0; VAR_5<VAR_2; VAR_5++){
    EditDist3From *VAR_6 = &VAR_3->a[VAR_5];
    FUNC_3(VAR_6, 0, sizeof(*VAR_6));
    VAR_6->nByte = FUNC_7((unsigned char)VAR_1[VAR_5], VAR_2-VAR_5);
    for(VAR_4=VAR_0->pCost; VAR_4; VAR_4=VAR_4->pNext){
      EditDist3Cost **VAR_7;
      if( VAR_5+VAR_4->nFrom>VAR_2 ) continue;
      if( FUNC_1(VAR_4, VAR_1+VAR_5, VAR_2-VAR_5)==0 ) continue;
      if( VAR_4->nTo==0 ){
        VAR_7 = FUNC_5(VAR_6->apDel,
                                sizeof(*VAR_7)*(VAR_6->nDel+1));
        if( VAR_7==0 ) break;
        VAR_6->apDel = VAR_7;
        VAR_7[VAR_6->nDel++] = VAR_4;
      }else{
        VAR_7 = FUNC_5(VAR_6->apSubst,
                                sizeof(*VAR_7)*(VAR_6->nSubst+1));
        if( VAR_7==0 ) break;
        VAR_6->apSubst = VAR_7;
        VAR_7[VAR_6->nSubst++] = VAR_4;
      }
    }
    if( VAR_4 ){
      FUNC_0(VAR_3);
      VAR_3 = 0;
      break;
    }
  }
  return VAR_3;
}
