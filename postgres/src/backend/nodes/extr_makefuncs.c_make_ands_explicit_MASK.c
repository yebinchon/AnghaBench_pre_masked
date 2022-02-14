
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int List ;
typedef int Expr ;


 int * VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int,int) ;
 int * FUNC_3 (int *) ;

Expr *
FUNC_4(List *VAR_1)
{
 if (VAR_1 == VAR_0)
  return (Expr *) FUNC_2(1, 0);
 else if (FUNC_1(VAR_1) == 1)
  return (Expr *) FUNC_0(VAR_1);
 else
  return FUNC_3(VAR_1);
}
