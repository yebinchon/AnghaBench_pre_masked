
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int w ;
struct TYPE_15__ {int pResultSet; int pOrderBy; int pWhere; } ;
typedef TYPE_3__ WhereInfo ;
struct TYPE_13__ {TYPE_6__* pIdxTrans; } ;
struct TYPE_16__ {TYPE_1__ u; int xExprCallback; } ;
typedef TYPE_4__ Walker ;
struct TYPE_19__ {int nExpr; TYPE_2__* a; } ;
struct TYPE_18__ {int iTabCur; int iIdxCur; int iIdxCol; scalar_t__ pIdxExpr; } ;
struct TYPE_17__ {scalar_t__* aiColumn; TYPE_7__* aColExpr; } ;
struct TYPE_14__ {scalar_t__ pExpr; } ;
typedef TYPE_5__ Index ;
typedef TYPE_6__ IdxExprTrans ;
typedef TYPE_7__ ExprList ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*,int ,int) ;
 int FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (TYPE_4__*,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(
  Index *VAR_2,
  int VAR_3,
  int VAR_4,
  WhereInfo *VAR_5
){
  int VAR_6;
  ExprList *VAR_7;
  Walker VAR_8;
  IdxExprTrans VAR_9;
  VAR_7 = VAR_2->aColExpr;
  if( VAR_7==0 ) return;
  FUNC_1(&VAR_8, 0, sizeof(VAR_8));
  VAR_8.xExprCallback = VAR_1;
  VAR_8.u.pIdxTrans = &VAR_9;
  VAR_9.iTabCur = VAR_3;
  VAR_9.iIdxCur = VAR_4;
  for(VAR_6=0; VAR_6<VAR_7->nExpr; VAR_6++){
    if( VAR_2->aiColumn[VAR_6]!=VAR_0 ) continue;
    FUNC_0( VAR_7->a[VAR_6].pExpr!=0 );
    VAR_9.iIdxCol = VAR_6;
    VAR_9.pIdxExpr = VAR_7->a[VAR_6].pExpr;
    FUNC_2(&VAR_8, VAR_5->pWhere);
    FUNC_3(&VAR_8, VAR_5->pOrderBy);
    FUNC_3(&VAR_8, VAR_5->pResultSet);
  }
}
