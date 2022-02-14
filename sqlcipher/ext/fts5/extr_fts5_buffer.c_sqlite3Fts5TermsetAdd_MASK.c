
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {TYPE_1__** apHash; } ;
struct TYPE_6__ {int iIdx; int nTerm; char* pTerm; struct TYPE_6__* pNext; } ;
typedef TYPE_1__ Fts5TermsetEntry ;
typedef TYPE_2__ Fts5Termset ;


 int FUNC_0 (TYPE_1__**) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (char*,char const*,int) ;
 TYPE_1__* FUNC_3 (int*,int) ;

int FUNC_4(
  Fts5Termset *VAR_1,
  int VAR_2,
  const char *VAR_3, int VAR_4,
  int *VAR_5
){
  int VAR_6 = VAR_0;
  *VAR_5 = 0;
  if( VAR_1 ){
    int VAR_7;
    u32 VAR_8 = 13;
    Fts5TermsetEntry *VAR_9;





    for(VAR_7=VAR_4-1; VAR_7>=0; VAR_7--){
      VAR_8 = (VAR_8 << 3) ^ VAR_8 ^ VAR_3[VAR_7];
    }
    VAR_8 = (VAR_8 << 3) ^ VAR_8 ^ VAR_2;
    VAR_8 = VAR_8 % FUNC_0(VAR_1->apHash);

    for(VAR_9=VAR_1->apHash[VAR_8]; VAR_9; VAR_9=VAR_9->pNext){
      if( VAR_9->iIdx==VAR_2
          && VAR_9->nTerm==VAR_4
          && FUNC_1(VAR_9->pTerm, VAR_3, VAR_4)==0
      ){
        *VAR_5 = 1;
        break;
      }
    }

    if( VAR_9==0 ){
      VAR_9 = FUNC_3(&VAR_6, sizeof(Fts5TermsetEntry) + VAR_4);
      if( VAR_9 ){
        VAR_9->pTerm = (char*)&VAR_9[1];
        VAR_9->nTerm = VAR_4;
        VAR_9->iIdx = VAR_2;
        FUNC_2(VAR_9->pTerm, VAR_3, VAR_4);
        VAR_9->pNext = VAR_1->apHash[VAR_8];
        VAR_1->apHash[VAR_8] = VAR_9;
      }
    }
  }

  return VAR_6;
}
