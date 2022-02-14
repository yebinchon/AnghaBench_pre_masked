
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_12__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


struct TYPE_28__ {TYPE_8__* pEList; } ;
struct TYPE_27__ {TYPE_7__* a; } ;
struct TYPE_26__ {TYPE_12__* pExpr; } ;
struct TYPE_25__ {scalar_t__ pTab; } ;
struct TYPE_24__ {int zToken; } ;
struct TYPE_23__ {TYPE_3__* pSelect; } ;
struct TYPE_22__ {TYPE_2__* pEList; } ;
struct TYPE_21__ {TYPE_1__* a; } ;
struct TYPE_20__ {TYPE_12__* pExpr; } ;
struct TYPE_19__ {int flags; int op; int op2; size_t iColumn; char affinity; TYPE_11__* pLeft; TYPE_6__ y; TYPE_5__ u; TYPE_4__ x; } ;
struct TYPE_17__ {TYPE_9__* pSelect; } ;
struct TYPE_18__ {int flags; TYPE_10__ x; } ;
typedef TYPE_12__ Expr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_12__*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 char FUNC_2 (int ,int ) ;
 TYPE_12__* FUNC_3 (TYPE_12__*) ;
 char FUNC_4 (scalar_t__,size_t) ;

char FUNC_5(Expr *VAR_9){
  int VAR_10;
  VAR_9 = FUNC_3(VAR_9);
  if( VAR_9->flags & VAR_0 ) return 0;
  VAR_10 = VAR_9->op;
  if( VAR_10==VAR_7 ){
    FUNC_1( VAR_9->flags&VAR_2 );
    return FUNC_5(VAR_9->x.pSelect->pEList->a[0].pExpr);
  }
  if( VAR_10==VAR_6 ) VAR_10 = VAR_9->op2;

  if( VAR_10==VAR_4 ){
    FUNC_1( !FUNC_0(VAR_9, VAR_1) );
    return FUNC_2(VAR_9->u.zToken, 0);
  }

  if( (VAR_10==VAR_3 || VAR_10==VAR_5) && VAR_9->y.pTab ){
    return FUNC_4(VAR_9->y.pTab, VAR_9->iColumn);
  }
  if( VAR_10==VAR_8 ){
    FUNC_1( VAR_9->pLeft->flags&VAR_2 );
    return FUNC_5(
        VAR_9->pLeft->x.pSelect->pEList->a[VAR_9->iColumn].pExpr
    );
  }
  return VAR_9->affinity;
}
