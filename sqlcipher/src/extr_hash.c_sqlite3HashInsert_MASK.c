
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int count; int htsize; int * ht; } ;
struct TYPE_11__ {char const* pKey; void* data; } ;
typedef TYPE_1__ HashElem ;
typedef TYPE_2__ Hash ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (TYPE_2__*,char const*,unsigned int*) ;
 int FUNC_2 (TYPE_2__*,int *,TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*,unsigned int) ;
 scalar_t__ FUNC_5 (int) ;
 unsigned int FUNC_6 (char const*) ;

void *FUNC_7(Hash *VAR_0, const char *VAR_1, void *VAR_2){
  unsigned int VAR_3;
  HashElem *VAR_4;
  HashElem *VAR_5;

  FUNC_0( VAR_0!=0 );
  FUNC_0( VAR_1!=0 );
  VAR_4 = FUNC_1(VAR_0,VAR_1,&VAR_3);
  if( VAR_4->data ){
    void *VAR_6 = VAR_4->data;
    if( VAR_2==0 ){
      FUNC_4(VAR_0,VAR_4,VAR_3);
    }else{
      VAR_4->data = VAR_2;
      VAR_4->pKey = VAR_1;
    }
    return VAR_6;
  }
  if( VAR_2==0 ) return 0;
  VAR_5 = (HashElem*)FUNC_5( sizeof(HashElem) );
  if( VAR_5==0 ) return VAR_2;
  VAR_5->pKey = VAR_1;
  VAR_5->data = VAR_2;
  VAR_0->count++;
  if( VAR_0->count>=10 && VAR_0->count > 2*VAR_0->htsize ){
    if( FUNC_3(VAR_0, VAR_0->count*2) ){
      FUNC_0( VAR_0->htsize>0 );
      VAR_3 = FUNC_6(VAR_1) % VAR_0->htsize;
    }
  }
  FUNC_2(VAR_0, VAR_0->ht ? &VAR_0->ht[VAR_3] : 0, VAR_5);
  return 0;
}
