
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RClass {int dummy; } ;
typedef int mrb_value ;
typedef int mrb_sym ;
typedef int mrb_state ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct RClass*,int ) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ,struct RClass*) ;
 struct RClass* FUNC_6 (int *,struct RClass*) ;
 scalar_t__ FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (int *,int ,int ) ;
 int FUNC_10 (int *,struct RClass*,char*,int ,int ) ;
 struct RClass* FUNC_11 (int *,struct RClass*,int ,struct RClass*) ;
 int VAR_1 ;
 int FUNC_12 (int *,char*) ;
 int FUNC_13 (int *,int ,int ,int ) ;
 int FUNC_14 (int *,int ,char*,int ) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (struct RClass*) ;
 int VAR_2 ;
 int FUNC_18 (int *,int ) ;
 int FUNC_19 (int *,char*,int ) ;

__attribute__((used)) static mrb_value
FUNC_20(mrb_state *VAR_3, mrb_value VAR_4, mrb_value VAR_5, struct RClass *VAR_6)
{
  mrb_value VAR_7;
  mrb_sym VAR_8;
  struct RClass *VAR_9;

  if (FUNC_15(VAR_4)) {
    VAR_9 = FUNC_6(VAR_3, VAR_6);
  }
  else {

    FUNC_18(VAR_3, VAR_4);
    VAR_8 = FUNC_16(VAR_3, VAR_4);
    if (!FUNC_8(VAR_3, FUNC_4(VAR_4), FUNC_3(VAR_4))) {
      FUNC_14(VAR_3, VAR_8, "identifier %v needs to be constant", VAR_4);
    }
    if (FUNC_7(VAR_3, FUNC_17(VAR_6), VAR_8)) {
      FUNC_19(VAR_3, "redefining constant Struct::%v", VAR_4);
      FUNC_9(VAR_3, FUNC_17(VAR_6), VAR_8);
    }
    VAR_9 = FUNC_11(VAR_3, VAR_6, FUNC_4(VAR_4), VAR_6);
  }
  FUNC_2(VAR_9, VAR_0);
  VAR_7 = FUNC_17(VAR_9);
  FUNC_13(VAR_3, VAR_7, FUNC_12(VAR_3, "__members__"), VAR_5);

  FUNC_10(VAR_3, VAR_9, "new", VAR_1, FUNC_0());
  FUNC_10(VAR_3, VAR_9, "[]", VAR_1, FUNC_0());
  FUNC_10(VAR_3, VAR_9, "members", VAR_2, FUNC_1());

  FUNC_5(VAR_3, VAR_5, VAR_9);
  return VAR_7;
}
