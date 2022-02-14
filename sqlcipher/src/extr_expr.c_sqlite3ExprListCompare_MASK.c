
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int nExpr; TYPE_1__* a; } ;
struct TYPE_5__ {scalar_t__ sortOrder; int * pExpr; } ;
typedef TYPE_2__ ExprList ;
typedef int Expr ;


 scalar_t__ FUNC_0 (int ,int *,int *,int) ;

int FUNC_1(ExprList *VAR_0, ExprList *VAR_1, int VAR_2){
  int VAR_3;
  if( VAR_0==0 && VAR_1==0 ) return 0;
  if( VAR_0==0 || VAR_1==0 ) return 1;
  if( VAR_0->nExpr!=VAR_1->nExpr ) return 1;
  for(VAR_3=0; VAR_3<VAR_0->nExpr; VAR_3++){
    Expr *VAR_4 = VAR_0->a[VAR_3].pExpr;
    Expr *VAR_5 = VAR_1->a[VAR_3].pExpr;
    if( VAR_0->a[VAR_3].sortOrder!=VAR_1->a[VAR_3].sortOrder ) return 1;
    if( FUNC_0(0, VAR_4, VAR_5, VAR_2) ) return 1;
  }
  return 0;
}
