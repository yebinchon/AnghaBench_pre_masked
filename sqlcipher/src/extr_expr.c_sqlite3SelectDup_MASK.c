
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int sqlite3 ;
struct TYPE_6__ {int selFlags; int* addrOpenEphm; struct TYPE_6__* pPrior; int selId; scalar_t__ pWin; int pWinDefn; int pWith; int nSelectRow; scalar_t__ iOffset; scalar_t__ iLimit; void* pLimit; struct TYPE_6__* pNext; int op; void* pOrderBy; void* pHaving; void* pGroupBy; void* pWhere; int pSrc; void* pEList; } ;
typedef TYPE_1__ Select ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int *,int) ;
 void* FUNC_3 (int *,void*,int) ;
 void* FUNC_4 (int *,void*,int) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;

Select *FUNC_8(sqlite3 *VAR_1, Select *VAR_2, int VAR_3){
  Select *VAR_4 = 0;
  Select *VAR_5 = 0;
  Select **VAR_6 = &VAR_4;
  Select *VAR_7;

  FUNC_0( VAR_1!=0 );
  for(VAR_7=VAR_2; VAR_7; VAR_7=VAR_7->pPrior){
    Select *VAR_8 = FUNC_2(VAR_1, sizeof(*VAR_7) );
    if( VAR_8==0 ) break;
    VAR_8->pEList = FUNC_4(VAR_1, VAR_7->pEList, VAR_3);
    VAR_8->pSrc = FUNC_5(VAR_1, VAR_7->pSrc, VAR_3);
    VAR_8->pWhere = FUNC_3(VAR_1, VAR_7->pWhere, VAR_3);
    VAR_8->pGroupBy = FUNC_4(VAR_1, VAR_7->pGroupBy, VAR_3);
    VAR_8->pHaving = FUNC_3(VAR_1, VAR_7->pHaving, VAR_3);
    VAR_8->pOrderBy = FUNC_4(VAR_1, VAR_7->pOrderBy, VAR_3);
    VAR_8->op = VAR_7->op;
    VAR_8->pNext = VAR_5;
    VAR_8->pPrior = 0;
    VAR_8->pLimit = FUNC_3(VAR_1, VAR_7->pLimit, VAR_3);
    VAR_8->iLimit = 0;
    VAR_8->iOffset = 0;
    VAR_8->selFlags = VAR_7->selFlags & ~VAR_0;
    VAR_8->addrOpenEphm[0] = -1;
    VAR_8->addrOpenEphm[1] = -1;
    VAR_8->nSelectRow = VAR_7->nSelectRow;
    VAR_8->pWith = FUNC_7(VAR_1, VAR_7->pWith);

    VAR_8->pWin = 0;
    VAR_8->pWinDefn = FUNC_6(VAR_1, VAR_7->pWinDefn);
    if( VAR_7->pWin ) FUNC_1(VAR_8);

    VAR_8->selId = VAR_7->selId;
    *VAR_6 = VAR_8;
    VAR_6 = &VAR_8->pPrior;
    VAR_5 = VAR_8;
  }

  return VAR_4;
}
