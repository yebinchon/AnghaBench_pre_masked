
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RClass {int super; } ;
typedef int mrb_sym ;
typedef int mrb_state ;


 int VAR_0 ;
 int FUNC_0 (struct RClass*) ;
 struct RClass* FUNC_1 (int *,struct RClass*,int ) ;
 struct RClass* FUNC_2 (int *,struct RClass*) ;
 struct RClass* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (struct RClass*) ;
 int FUNC_6 (int *,int ,char*,int ,int ,struct RClass*) ;
 int FUNC_7 (int *,struct RClass*,struct RClass*,int ) ;

__attribute__((used)) static struct RClass*
FUNC_8(mrb_state *VAR_1, mrb_sym VAR_2, struct RClass *VAR_3, struct RClass *VAR_4)
{
  struct RClass * VAR_5;

  if (FUNC_4(VAR_1, FUNC_5(VAR_4), VAR_2)) {
    VAR_5 = FUNC_1(VAR_1, VAR_4, VAR_2);
    FUNC_0(VAR_5);
    if (VAR_3 && FUNC_3(VAR_5->super) != VAR_3) {
      FUNC_6(VAR_1, VAR_0, "superclass mismatch for Class %n (%C not %C)",
                 VAR_2, VAR_5->super, VAR_3);
    }
    return VAR_5;
  }

  VAR_5 = FUNC_2(VAR_1, VAR_3);
  FUNC_7(VAR_1, VAR_4, VAR_5, VAR_2);

  return VAR_5;
}
