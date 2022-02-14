
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_17__ {TYPE_5__* pList; TYPE_3__* pSelect; } ;
struct TYPE_18__ {scalar_t__ op2; scalar_t__ op; TYPE_6__ x; } ;
struct TYPE_16__ {TYPE_4__* a; } ;
struct TYPE_15__ {TYPE_7__* pExpr; } ;
struct TYPE_14__ {TYPE_2__* pEList; } ;
struct TYPE_13__ {TYPE_1__* a; } ;
struct TYPE_12__ {TYPE_7__* pExpr; } ;
typedef TYPE_7__ Expr ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (TYPE_7__*) ;

Expr *FUNC_3(Expr *VAR_2, int VAR_3){
  FUNC_0( VAR_3<FUNC_2(VAR_2) );
  if( FUNC_1(VAR_2) ){
    FUNC_0( VAR_2->op2==0 || VAR_2->op==VAR_0 );
    if( VAR_2->op==VAR_1 || VAR_2->op2==VAR_1 ){
      return VAR_2->x.pSelect->pEList->a[VAR_3].pExpr;
    }else{
      return VAR_2->x.pList->a[VAR_3].pExpr;
    }
  }
  return VAR_2;
}
