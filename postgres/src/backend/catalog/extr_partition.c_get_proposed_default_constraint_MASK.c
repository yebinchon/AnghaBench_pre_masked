
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Node ;
typedef int List ;
typedef int Expr ;


 int VAR_0 ;
 int * FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,int ,int) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;

List *
FUNC_6(List *VAR_1)
{
 Expr *VAR_2;

 VAR_2 = FUNC_4(VAR_1);






 VAR_2 = FUNC_3(VAR_0,
          FUNC_2(VAR_2),
          -1);


 VAR_2 =
  (Expr *) FUNC_1(((void*)0),
          (Node *) VAR_2);
 VAR_2 = FUNC_0(VAR_2, 1);

 return FUNC_5(VAR_2);
}
