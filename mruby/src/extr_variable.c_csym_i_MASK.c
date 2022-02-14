
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csym_arg {int sym; struct RClass* c; } ;
struct RClass {scalar_t__ tt; } ;
typedef int mrb_value ;
typedef int mrb_sym ;
typedef int mrb_state ;


 struct RClass* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(mrb_state *VAR_0, mrb_sym VAR_1, mrb_value VAR_2, void *VAR_3)
{
  struct csym_arg *VAR_4 = (struct csym_arg*)VAR_3;
  struct RClass *VAR_5 = VAR_4->c;

  if (FUNC_1(VAR_2) == VAR_5->tt && FUNC_0(VAR_2) == VAR_5) {
    VAR_4->sym = VAR_1;
    return 1;
  }
  return 0;
}
