
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RClass {int dummy; } ;
typedef int mrb_state ;


 struct RClass* FUNC_0 (int *,struct RClass*,char*) ;
 struct RClass* FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,struct RClass*,char*,char const*) ;

__attribute__((used)) static void
FUNC_3(mrb_state *VAR_0, const char *VAR_1)
{
  struct RClass *VAR_2 = FUNC_1(VAR_0, "Math");
  struct RClass *VAR_3 = FUNC_0(VAR_0, VAR_2, "DomainError");
  FUNC_2(VAR_0, VAR_3, "Numerical argument is out of domain - %s", VAR_1);
}
