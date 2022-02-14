
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct constraint_expr {struct constraint_expr* type_names; int negset; int types; int names; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct constraint_expr*) ;

__attribute__((used)) static void FUNC_2(struct constraint_expr *VAR_0)
{
 if (VAR_0) {
  FUNC_0(&VAR_0->names);
  if (VAR_0->type_names) {
   FUNC_0(&VAR_0->type_names->types);
   FUNC_0(&VAR_0->type_names->negset);
   FUNC_1(VAR_0->type_names);
  }
  FUNC_1(VAR_0);
 }
}
