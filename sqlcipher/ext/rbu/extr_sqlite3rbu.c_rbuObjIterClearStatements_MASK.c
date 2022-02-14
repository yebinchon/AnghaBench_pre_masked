
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ nCol; scalar_t__ pTmpInsert; TYPE_1__* pRbuUpdate; scalar_t__ pDelete; scalar_t__ pInsert; scalar_t__ pSelect; } ;
struct TYPE_5__ {scalar_t__ pUpdate; struct TYPE_5__* pNext; } ;
typedef TYPE_1__ RbuUpdateStmt ;
typedef TYPE_2__ RbuObjIter ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(RbuObjIter *VAR_0){
  RbuUpdateStmt *VAR_1;

  FUNC_0(VAR_0->pSelect);
  FUNC_0(VAR_0->pInsert);
  FUNC_0(VAR_0->pDelete);
  FUNC_0(VAR_0->pTmpInsert);
  VAR_1 = VAR_0->pRbuUpdate;
  while( VAR_1 ){
    RbuUpdateStmt *VAR_2 = VAR_1->pNext;
    FUNC_0(VAR_1->pUpdate);
    FUNC_1(VAR_1);
    VAR_1 = VAR_2;
  }

  VAR_0->pSelect = 0;
  VAR_0->pInsert = 0;
  VAR_0->pDelete = 0;
  VAR_0->pRbuUpdate = 0;
  VAR_0->pTmpInsert = 0;
  VAR_0->nCol = 0;
}
