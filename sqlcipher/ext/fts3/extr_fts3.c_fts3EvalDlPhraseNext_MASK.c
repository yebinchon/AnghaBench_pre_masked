
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ sqlite3_int64 ;
struct TYPE_6__ {char* aAll; size_t nAll; char* pNextDocid; char* pList; int nList; int iDocid; } ;
struct TYPE_5__ {scalar_t__ bDescIdx; } ;
typedef TYPE_1__ Fts3Table ;
typedef TYPE_2__ Fts3Doclist ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char**) ;
 int FUNC_2 (char*,scalar_t__*) ;

__attribute__((used)) static void FUNC_3(
  Fts3Table *VAR_0,
  Fts3Doclist *VAR_1,
  u8 *VAR_2
){
  char *VAR_3;
  char *VAR_4 = &VAR_1->aAll[VAR_1->nAll];

  if( VAR_1->pNextDocid ){
    VAR_3 = VAR_1->pNextDocid;
  }else{
    VAR_3 = VAR_1->aAll;
  }

  if( VAR_3>=VAR_4 ){

    *VAR_2 = 1;
  }else{
    sqlite3_int64 VAR_5;
    VAR_3 += FUNC_2(VAR_3, &VAR_5);
    if( VAR_0->bDescIdx==0 || VAR_1->pNextDocid==0 ){
      VAR_1->iDocid += VAR_5;
    }else{
      VAR_1->iDocid -= VAR_5;
    }
    VAR_1->pList = VAR_3;
    FUNC_1(0, &VAR_3);
    VAR_1->nList = (int)(VAR_3 - VAR_1->pList);







    while( VAR_3<VAR_4 && *VAR_3==0 ) VAR_3++;

    VAR_1->pNextDocid = VAR_3;
    FUNC_0( VAR_3>=&VAR_1->aAll[VAR_1->nAll] || *VAR_3 );
    *VAR_2 = 0;
  }
}
