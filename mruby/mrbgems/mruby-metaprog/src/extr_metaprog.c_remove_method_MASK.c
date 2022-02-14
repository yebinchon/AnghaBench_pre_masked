
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RClass {int mt; } ;
typedef int mrb_value ;
typedef int mrb_sym ;
typedef int mrb_state ;
typedef scalar_t__ khiter_t ;


 int FUNC_0 (struct RClass*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *,int,scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ,int *,int,int ) ;
 int FUNC_4 (int ) ;
 struct RClass* FUNC_5 (int ) ;
 int FUNC_6 (int *,int ,char*,int,int ) ;
 int FUNC_7 (int *,int ,char*,int ,int ) ;
 int FUNC_8 (int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_9(mrb_state *VAR_2, mrb_value VAR_3, mrb_sym VAR_4)
{
  struct RClass *VAR_5 = FUNC_5(VAR_3);
  FUNC_4(VAR_1) *VAR_0;
  khiter_t VAR_6;

  FUNC_0(VAR_5);
  VAR_0 = VAR_5->mt;

  if (VAR_0) {
    VAR_6 = FUNC_3(VAR_1, VAR_2, VAR_0, VAR_4);
    if (VAR_6 != FUNC_2(VAR_0)) {
      FUNC_1(VAR_1, VAR_2, VAR_0, VAR_6);
      FUNC_6(VAR_2, VAR_3, "method_removed", 1, FUNC_8(VAR_4));
      return;
    }
  }

  FUNC_7(VAR_2, VAR_4, "method '%n' not defined in %v", VAR_4, VAR_3);
}
