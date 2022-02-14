
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int xExprCallback; int * pParse; } ;
typedef TYPE_1__ Walker ;
typedef int Parse ;
typedef int Expr ;


 int FUNC_0 (TYPE_1__*,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int *) ;

void FUNC_2(Parse *VAR_1, Expr *VAR_2){
  Walker VAR_3;
  FUNC_0(&VAR_3, 0, sizeof(Walker));
  VAR_3.pParse = VAR_1;
  VAR_3.xExprCallback = VAR_0;
  FUNC_1(&VAR_3, VAR_2);
}
