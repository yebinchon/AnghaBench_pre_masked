
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int ,int ,int ) ;
 int FUNC_5 (int *,int ,char*) ;
 int FUNC_6 (int const) ;

__attribute__((used)) static void
FUNC_7(mrb_state *VAR_1, mrb_value VAR_2, mrb_value VAR_3)
{
  if (!FUNC_2(VAR_3)) {
  type_err:
    FUNC_5(VAR_1, VAR_0, "backtrace must be Array of String");
  }
  else {
    const mrb_value *VAR_4 = FUNC_1(VAR_3);
    const mrb_value *VAR_5 = VAR_4 + FUNC_0(VAR_3);

    while (VAR_4 < VAR_5) {
      if (!FUNC_6(*VAR_4)) goto type_err;
      VAR_4++;
    }
  }
  FUNC_4(VAR_1, VAR_2, FUNC_3(VAR_1, "backtrace"), VAR_3);
}
