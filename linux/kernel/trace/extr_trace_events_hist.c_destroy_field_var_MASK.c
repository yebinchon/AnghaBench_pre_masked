
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct field_var {int val; int var; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct field_var*) ;

__attribute__((used)) static void FUNC_2(struct field_var *VAR_0)
{
 if (!VAR_0)
  return;

 FUNC_0(VAR_0->var, 0);
 FUNC_0(VAR_0->val, 0);

 FUNC_1(VAR_0);
}
