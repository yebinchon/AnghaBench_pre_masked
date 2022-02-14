
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RClass {int super; } ;
typedef int mrb_value ;
typedef int mrb_sym ;
typedef int mrb_state ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 struct RClass* FUNC_1 (int *,int ,struct RClass*,struct RClass*) ;
 int FUNC_2 (int *,struct RClass*,struct RClass*) ;
 int FUNC_3 (int ) ;
 struct RClass* FUNC_4 (int ) ;
 struct RClass* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,int ,char*,int ) ;

struct RClass*
FUNC_10(mrb_state *VAR_1, mrb_value VAR_2, mrb_value VAR_3, mrb_sym VAR_4)
{
  struct RClass *VAR_5;
  struct RClass *VAR_6;

  if (!FUNC_8(VAR_3)) {
    if (!FUNC_3(VAR_3)) {
      FUNC_9(VAR_1, VAR_0, "superclass must be a Class (%!v given)", VAR_3);
    }
    VAR_5 = FUNC_4(VAR_3);
  }
  else {
    VAR_5 = 0;
  }
  FUNC_0(VAR_1, VAR_2);
  if (FUNC_6(VAR_1, VAR_2, VAR_4)) {
    mrb_value VAR_7 = FUNC_7(VAR_1, VAR_2, VAR_4);

    if (!FUNC_3(VAR_7)) {
      FUNC_9(VAR_1, VAR_0, "%!v is not a class", VAR_7);
    }
    VAR_6 = FUNC_4(VAR_7);
    if (VAR_5) {

      if (FUNC_5(VAR_6->super) != VAR_5) {
        FUNC_9(VAR_1, VAR_0, "superclass mismatch for class %v", VAR_7);
      }
    }
    return VAR_6;
  }
  VAR_6 = FUNC_1(VAR_1, VAR_4, VAR_5, FUNC_4(VAR_2));
  FUNC_2(VAR_1, FUNC_5(VAR_6->super), VAR_6);

  return VAR_6;
}
