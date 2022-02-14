
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int iConstExprReg; } ;
struct ExprList_item {int reusable; TYPE_1__ u; int pExpr; } ;
struct TYPE_11__ {int nExpr; struct ExprList_item* a; } ;
struct TYPE_10__ {int nMem; TYPE_3__* pConstExpr; int db; } ;
typedef TYPE_2__ Parse ;
typedef TYPE_3__ ExprList ;
typedef int Expr ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,int *,int) ;
 int * FUNC_3 (int ,int *,int ) ;
 TYPE_3__* FUNC_4 (TYPE_2__*,TYPE_3__*,int *) ;

int FUNC_5(
  Parse *VAR_0,
  Expr *VAR_1,
  int VAR_2
){
  ExprList *VAR_3;
  FUNC_1( FUNC_0(VAR_0) );
  VAR_3 = VAR_0->pConstExpr;
  if( VAR_2<0 && VAR_3 ){
    struct ExprList_item *VAR_4;
    int VAR_5;
    for(VAR_4=VAR_3->a, VAR_5=VAR_3->nExpr; VAR_5>0; VAR_4++, VAR_5--){
      if( VAR_4->reusable && FUNC_2(0,VAR_4->pExpr,VAR_1,-1)==0 ){
        return VAR_4->u.iConstExprReg;
      }
    }
  }
  VAR_1 = FUNC_3(VAR_0->db, VAR_1, 0);
  VAR_3 = FUNC_4(VAR_0, VAR_3, VAR_1);
  if( VAR_3 ){
     struct ExprList_item *VAR_6 = &VAR_3->a[VAR_3->nExpr-1];
     VAR_6->reusable = VAR_2<0;
     if( VAR_2<0 ) VAR_2 = ++VAR_0->nMem;
     VAR_6->u.iConstExprReg = VAR_2;
  }
  VAR_0->pConstExpr = VAR_3;
  return VAR_2;
}
