
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_14__ {int mallocFailed; } ;
struct TYPE_13__ {scalar_t__ nErr; TYPE_6__* db; scalar_t__ nSelect; } ;
struct TYPE_12__ {int* addrOpenEphm; int * pSrc; scalar_t__ pWinDefn; scalar_t__ pWin; scalar_t__ pWith; int * pLimit; scalar_t__ pNext; scalar_t__ pPrior; int * pOrderBy; int * pHaving; int * pGroupBy; int * pWhere; scalar_t__ nSelectRow; scalar_t__ selId; scalar_t__ iOffset; scalar_t__ iLimit; int selFlags; int op; int * pEList; } ;
typedef int SrcList ;
typedef TYPE_1__ Select ;
typedef TYPE_2__ Parse ;
typedef int ExprList ;
typedef int Expr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_6__*,TYPE_1__*,int) ;
 TYPE_1__* FUNC_2 (TYPE_6__*,int) ;
 int * FUNC_3 (TYPE_6__*,int) ;
 int FUNC_4 (TYPE_6__*,int ,int ) ;
 int * FUNC_5 (TYPE_2__*,int ,int ) ;

Select *FUNC_6(
  Parse *VAR_2,
  ExprList *VAR_3,
  SrcList *VAR_4,
  Expr *VAR_5,
  ExprList *VAR_6,
  Expr *VAR_7,
  ExprList *VAR_8,
  u32 VAR_9,
  Expr *VAR_10
){
  Select *VAR_11;
  Select VAR_12;
  VAR_11 = FUNC_2(VAR_2->db, sizeof(*VAR_11) );
  if( VAR_11==0 ){
    FUNC_0( VAR_2->db->mallocFailed );
    VAR_11 = &VAR_12;
  }
  if( VAR_3==0 ){
    VAR_3 = FUNC_5(VAR_2, 0,
                                   FUNC_4(VAR_2->db,VAR_0,0));
  }
  VAR_11->pEList = VAR_3;
  VAR_11->op = VAR_1;
  VAR_11->selFlags = VAR_9;
  VAR_11->iLimit = 0;
  VAR_11->iOffset = 0;
  VAR_11->selId = ++VAR_2->nSelect;
  VAR_11->addrOpenEphm[0] = -1;
  VAR_11->addrOpenEphm[1] = -1;
  VAR_11->nSelectRow = 0;
  if( VAR_4==0 ) VAR_4 = FUNC_3(VAR_2->db, sizeof(*VAR_4));
  VAR_11->pSrc = VAR_4;
  VAR_11->pWhere = VAR_5;
  VAR_11->pGroupBy = VAR_6;
  VAR_11->pHaving = VAR_7;
  VAR_11->pOrderBy = VAR_8;
  VAR_11->pPrior = 0;
  VAR_11->pNext = 0;
  VAR_11->pLimit = VAR_10;
  VAR_11->pWith = 0;

  VAR_11->pWin = 0;
  VAR_11->pWinDefn = 0;

  if( VAR_2->db->mallocFailed ) {
    FUNC_1(VAR_2->db, VAR_11, VAR_11!=&VAR_12);
    VAR_11 = 0;
  }else{
    FUNC_0( VAR_11->pSrc!=0 || VAR_2->nErr>0 );
  }
  FUNC_0( VAR_11!=&VAR_12 );
  return VAR_11;
}
