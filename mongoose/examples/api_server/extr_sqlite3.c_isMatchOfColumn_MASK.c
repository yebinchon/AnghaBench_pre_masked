
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_5__* pList; } ;
struct TYPE_8__ {int zToken; } ;
struct TYPE_13__ {scalar_t__ op; TYPE_2__ x; TYPE_1__ u; } ;
struct TYPE_12__ {int nExpr; TYPE_4__* a; } ;
struct TYPE_11__ {TYPE_3__* pExpr; } ;
struct TYPE_10__ {scalar_t__ op; } ;
typedef TYPE_5__ ExprList ;
typedef TYPE_6__ Expr ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(
  Expr *VAR_2
){
  ExprList *VAR_3;

  if( VAR_2->op!=VAR_1 ){
    return 0;
  }
  if( FUNC_0(VAR_2->u.zToken,"match")!=0 ){
    return 0;
  }
  VAR_3 = VAR_2->x.pList;
  if( VAR_3->nExpr!=2 ){
    return 0;
  }
  if( VAR_3->a[1].pExpr->op != VAR_0 ){
    return 0;
  }
  return 1;
}
