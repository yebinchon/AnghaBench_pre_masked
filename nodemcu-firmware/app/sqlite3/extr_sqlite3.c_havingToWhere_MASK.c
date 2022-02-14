
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct HavingToWhereCtx {int * pGroupBy; int ** ppWhere; } ;
typedef int sWalker ;
struct TYPE_5__ {struct HavingToWhereCtx* pHavingCtx; } ;
struct TYPE_6__ {TYPE_1__ u; int xExprCallback; int * pParse; } ;
typedef TYPE_2__ Walker ;
typedef int Parse ;
typedef int ExprList ;
typedef int Expr ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 int FUNC_1 (TYPE_2__*,int *) ;

__attribute__((used)) static void FUNC_2(
  Parse *VAR_1,
  ExprList *VAR_2,
  Expr *VAR_3,
  Expr **VAR_4
){
  struct HavingToWhereCtx VAR_5;
  Walker VAR_6;

  VAR_5.ppWhere = VAR_4;
  VAR_5.pGroupBy = VAR_2;

  FUNC_0(&VAR_6, 0, sizeof(VAR_6));
  VAR_6.pParse = VAR_1;
  VAR_6.xExprCallback = VAR_0;
  VAR_6.u.pHavingCtx = &VAR_5;
  FUNC_1(&VAR_6, VAR_3);
}
