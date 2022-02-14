
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_10__ {scalar_t__ pVtab; } ;
struct TYPE_13__ {scalar_t__ ePlan; TYPE_2__* zRankArgs; TYPE_2__* zRank; TYPE_2__* apRankArg; int pRankArgStmt; TYPE_2__* pAuxdata; int pExpr; TYPE_2__* pSorter; scalar_t__ pStmt; TYPE_2__* aInst; TYPE_2__* aInstIter; TYPE_1__ base; } ;
struct TYPE_12__ {int pStorage; } ;
struct TYPE_11__ {int pPtr; int (* xDelete ) (int ) ;struct TYPE_11__* pNext; int pStmt; } ;
typedef TYPE_2__ Fts5Sorter ;
typedef TYPE_3__ Fts5FullTable ;
typedef TYPE_4__ Fts5Cursor ;
typedef TYPE_2__ Fts5Auxdata ;


 scalar_t__ FUNC_0 (TYPE_4__*,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (scalar_t__*,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int,scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(Fts5Cursor *VAR_2){
  Fts5FullTable *VAR_3 = (Fts5FullTable*)(VAR_2->base.pVtab);
  Fts5Auxdata *VAR_4;
  Fts5Auxdata *VAR_5;

  FUNC_6(VAR_2->aInstIter);
  FUNC_6(VAR_2->aInst);
  if( VAR_2->pStmt ){
    int VAR_6 = FUNC_1(VAR_2);
    FUNC_4(VAR_3->pStorage, VAR_6, VAR_2->pStmt);
  }
  if( VAR_2->pSorter ){
    Fts5Sorter *VAR_7 = VAR_2->pSorter;
    FUNC_5(VAR_7->pStmt);
    FUNC_6(VAR_7);
  }

  if( VAR_2->ePlan!=VAR_1 ){
    FUNC_3(VAR_2->pExpr);
  }

  for(VAR_4=VAR_2->pAuxdata; VAR_4; VAR_4=VAR_5){
    VAR_5 = VAR_4->pNext;
    if( VAR_4->xDelete ) VAR_4->xDelete(VAR_4->pPtr);
    FUNC_6(VAR_4);
  }

  FUNC_5(VAR_2->pRankArgStmt);
  FUNC_6(VAR_2->apRankArg);

  if( FUNC_0(VAR_2, VAR_0) ){
    FUNC_6(VAR_2->zRank);
    FUNC_6(VAR_2->zRankArgs);
  }

  FUNC_2(&VAR_2->ePlan, 0, sizeof(Fts5Cursor) - ((u8*)&VAR_2->ePlan - (u8*)VAR_2));
}
