
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RClass {int dummy; } ;
typedef int mrb_value ;
typedef int mrb_sym ;
typedef int mrb_state ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 struct RClass* FUNC_1 (int *,int ,struct RClass*) ;
 struct RClass* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ,char*,int ) ;

struct RClass*
FUNC_7(mrb_state *VAR_1, mrb_value VAR_2, mrb_sym VAR_3)
{
  FUNC_0(VAR_1, VAR_2);
  if (FUNC_3(VAR_1, VAR_2, VAR_3)) {
    mrb_value VAR_4 = FUNC_4(VAR_1, VAR_2, VAR_3);

    if (!FUNC_5(VAR_4)) {
      FUNC_6(VAR_1, VAR_0, "%!v is not a module", VAR_4);
    }
    return FUNC_2(VAR_4);
  }
  return FUNC_1(VAR_1, VAR_3, FUNC_2(VAR_2));
}
