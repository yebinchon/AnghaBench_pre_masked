
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u32 ;
typedef int WhereTerm ;
struct TYPE_15__ {int* aiCur; int nEquiv; int iEquiv; int* aiColumn; scalar_t__ zCollName; scalar_t__ idxaff; scalar_t__ pIdxExpr; scalar_t__ k; int opMask; int * pWC; int * pOrigWC; } ;
typedef TYPE_5__ WhereScan ;
typedef int WhereClause ;
struct TYPE_16__ {int* aiColumn; scalar_t__* azColl; TYPE_4__* pTable; TYPE_2__* aColExpr; } ;
struct TYPE_14__ {int iPKey; TYPE_3__* aCol; } ;
struct TYPE_13__ {scalar_t__ affinity; } ;
struct TYPE_12__ {TYPE_1__* a; } ;
struct TYPE_11__ {scalar_t__ pExpr; } ;
typedef TYPE_6__ Index ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (TYPE_5__*) ;
 int * FUNC_1 (TYPE_5__*) ;

__attribute__((used)) static WhereTerm *FUNC_2(
  WhereScan *VAR_2,
  WhereClause *VAR_3,
  int VAR_4,
  int VAR_5,
  u32 VAR_6,
  Index *VAR_7
){
  VAR_2->pOrigWC = VAR_3;
  VAR_2->pWC = VAR_3;
  VAR_2->pIdxExpr = 0;
  VAR_2->idxaff = 0;
  VAR_2->zCollName = 0;
  VAR_2->opMask = VAR_6;
  VAR_2->k = 0;
  VAR_2->aiCur[0] = VAR_4;
  VAR_2->nEquiv = 1;
  VAR_2->iEquiv = 1;
  if( VAR_7 ){
    int VAR_8 = VAR_5;
    VAR_5 = VAR_7->aiColumn[VAR_8];
    if( VAR_5==VAR_0 ){
      VAR_2->pIdxExpr = VAR_7->aColExpr->a[VAR_8].pExpr;
      VAR_2->zCollName = VAR_7->azColl[VAR_8];
      VAR_2->aiColumn[0] = VAR_0;
      return FUNC_0(VAR_2);
    }else if( VAR_5==VAR_7->pTable->iPKey ){
      VAR_5 = VAR_1;
    }else if( VAR_5>=0 ){
      VAR_2->idxaff = VAR_7->pTable->aCol[VAR_5].affinity;
      VAR_2->zCollName = VAR_7->azColl[VAR_8];
    }
  }else if( VAR_5==VAR_0 ){
    return 0;
  }
  VAR_2->aiColumn[0] = VAR_5;
  return FUNC_1(VAR_2);
}
