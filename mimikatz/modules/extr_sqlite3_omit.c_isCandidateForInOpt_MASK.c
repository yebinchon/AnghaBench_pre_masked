
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ pSelect; } ;
typedef TYPE_4__ Table ;
struct TYPE_13__ {TYPE_6__* pSelect; } ;
struct TYPE_20__ {scalar_t__ op; scalar_t__ iTable; TYPE_1__ x; } ;
struct TYPE_19__ {int nExpr; TYPE_2__* a; } ;
struct TYPE_18__ {int selFlags; scalar_t__ pGroupBy; TYPE_7__* pEList; TYPE_5__* pSrc; scalar_t__ pWhere; scalar_t__ pLimit; scalar_t__ pPrior; } ;
struct TYPE_17__ {int nSrc; TYPE_3__* a; } ;
struct TYPE_15__ {scalar_t__ iCursor; TYPE_4__* pTab; scalar_t__ pSelect; } ;
struct TYPE_14__ {TYPE_8__* pExpr; } ;
typedef TYPE_5__ SrcList ;
typedef TYPE_6__ Select ;
typedef TYPE_7__ ExprList ;
typedef TYPE_8__ Expr ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_8__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static Select *FUNC_4(Expr *VAR_5){
  Select *VAR_6;
  SrcList *VAR_7;
  ExprList *VAR_8;
  Table *VAR_9;
  int VAR_10;
  if( !FUNC_0(VAR_5, VAR_1) ) return 0;
  if( FUNC_0(VAR_5, VAR_0) ) return 0;
  VAR_6 = VAR_5->x.pSelect;
  if( VAR_6->pPrior ) return 0;
  if( VAR_6->selFlags & (VAR_3|VAR_2) ){
    FUNC_3( (VAR_6->selFlags & (VAR_3|VAR_2))==VAR_3 );
    FUNC_3( (VAR_6->selFlags & (VAR_3|VAR_2))==VAR_2 );
    return 0;
  }
  FUNC_2( VAR_6->pGroupBy==0 );
  if( VAR_6->pLimit ) return 0;
  if( VAR_6->pWhere ) return 0;
  VAR_7 = VAR_6->pSrc;
  FUNC_2( VAR_7!=0 );
  if( VAR_7->nSrc!=1 ) return 0;
  if( VAR_7->a[0].pSelect ) return 0;
  VAR_9 = VAR_7->a[0].pTab;
  FUNC_2( VAR_9!=0 );
  FUNC_2( VAR_9->pSelect==0 );
  if( FUNC_1(VAR_9) ) return 0;
  VAR_8 = VAR_6->pEList;
  FUNC_2( VAR_8!=0 );

  for(VAR_10=0; VAR_10<VAR_8->nExpr; VAR_10++){
    Expr *VAR_11 = VAR_8->a[VAR_10].pExpr;
    if( VAR_11->op!=VAR_4 ) return 0;
    FUNC_2( VAR_11->iTable==VAR_7->a[0].iCursor );
  }
  return VAR_6;
}
