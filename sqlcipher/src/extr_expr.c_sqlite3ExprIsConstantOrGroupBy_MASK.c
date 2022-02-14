
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * pGroupBy; } ;
struct TYPE_5__ {int eCode; int * pParse; TYPE_1__ u; scalar_t__ xSelectCallback; int xExprCallback; } ;
typedef TYPE_2__ Walker ;
typedef int Parse ;
typedef int ExprList ;
typedef int Expr ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int *) ;

int FUNC_1(Parse *VAR_1, Expr *VAR_2, ExprList *VAR_3){
  Walker VAR_4;
  VAR_4.eCode = 1;
  VAR_4.xExprCallback = VAR_0;
  VAR_4.xSelectCallback = 0;
  VAR_4.u.pGroupBy = VAR_3;
  VAR_4.pParse = VAR_1;
  FUNC_0(&VAR_4, VAR_2);
  return VAR_4.eCode;
}
