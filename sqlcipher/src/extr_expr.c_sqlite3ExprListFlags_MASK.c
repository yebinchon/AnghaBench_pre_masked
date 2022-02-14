
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int flags; } ;
struct TYPE_6__ {int nExpr; TYPE_1__* a; } ;
struct TYPE_5__ {TYPE_3__* pExpr; } ;
typedef TYPE_2__ ExprList ;
typedef TYPE_3__ Expr ;


 int FUNC_0 (int) ;

u32 FUNC_1(const ExprList *VAR_0){
  int VAR_1;
  u32 VAR_2 = 0;
  FUNC_0( VAR_0!=0 );
  for(VAR_1=0; VAR_1<VAR_0->nExpr; VAR_1++){
     Expr *VAR_3 = VAR_0->a[VAR_1].pExpr;
     FUNC_0( VAR_3!=0 );
     VAR_2 |= VAR_3->flags;
  }
  return VAR_2;
}
