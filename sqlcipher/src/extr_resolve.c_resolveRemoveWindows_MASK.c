
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * pSelect; } ;
struct TYPE_6__ {TYPE_1__ u; int xExprCallback; } ;
typedef TYPE_2__ Walker ;
typedef int Select ;
typedef int Expr ;


 int FUNC_0 (TYPE_2__*,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,int *) ;

__attribute__((used)) static void FUNC_2(Select *VAR_1, Expr *VAR_2){
  Walker VAR_3;
  FUNC_0(&VAR_3, 0, sizeof(Walker));
  VAR_3.xExprCallback = VAR_0;
  VAR_3.u.pSelect = VAR_1;
  FUNC_1(&VAR_3, VAR_2);
}
