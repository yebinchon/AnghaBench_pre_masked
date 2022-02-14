
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RClass {int iv; } ;
struct RBasic {int dummy; } ;
typedef int mrb_value ;
typedef scalar_t__ mrb_sym ;
typedef int mrb_state ;
typedef int mrb_int ;


 char* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,struct RClass*) ;
 scalar_t__ FUNC_2 (int *,struct RClass*,struct RClass*) ;
 int FUNC_3 (int *,int ,int ,int *) ;
 int FUNC_4 (int *,int ,int ,int ) ;
 char* FUNC_5 (int *,struct RClass*) ;
 int FUNC_6 (int *,struct RBasic*,int ) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 () ;
 int FUNC_9 (int *,int ,char const*,int ) ;
 int FUNC_10 (int *,int ,char const*) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,int) ;
 char* FUNC_13 (int *,scalar_t__,int *) ;
 struct RClass* FUNC_14 (int *,struct RClass*) ;

mrb_value
FUNC_15(mrb_state *VAR_0, struct RClass *VAR_1)
{
  struct RClass *VAR_2;
  mrb_value VAR_3;
  mrb_sym VAR_4;
  const char *VAR_5;
  mrb_int VAR_6;

  if (FUNC_1(VAR_0, VAR_1)) return FUNC_8();
  VAR_2 = FUNC_14(VAR_0, VAR_1);
  if (VAR_2 == ((void*)0)) return FUNC_8();
  VAR_4 = FUNC_2(VAR_0, VAR_2, VAR_1);
  if (VAR_4 == 0) return FUNC_8();
  VAR_5 = FUNC_5(VAR_0, VAR_2);
  VAR_3 = FUNC_12(VAR_0, 40);
  FUNC_10(VAR_0, VAR_3, VAR_5);
  FUNC_10(VAR_0, VAR_3, "::");

  VAR_5 = FUNC_13(VAR_0, VAR_4, &VAR_6);
  FUNC_9(VAR_0, VAR_3, VAR_5, VAR_6);
  if (FUNC_0(VAR_3)[0] != '#') {
    FUNC_3(VAR_0, VAR_1->iv, FUNC_7(VAR_0, "__outer__"), ((void*)0));
    FUNC_4(VAR_0, VAR_1->iv, FUNC_7(VAR_0, "__classname__"), VAR_3);
    FUNC_6(VAR_0, (struct RBasic*)VAR_1, VAR_3);
    VAR_3 = FUNC_11(VAR_0, VAR_3);
  }
  return VAR_3;
}
