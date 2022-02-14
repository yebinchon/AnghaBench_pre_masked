
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static mrb_value
FUNC_7(mrb_state *VAR_0, mrb_value VAR_1)
{
  mrb_value VAR_2 = FUNC_1(VAR_0, FUNC_3(VAR_0, "$mrbtest_io_rfname"));
  mrb_value VAR_3 = FUNC_1(VAR_0, FUNC_3(VAR_0, "$mrbtest_io_wfname"));
  mrb_value VAR_4 = FUNC_1(VAR_0, FUNC_3(VAR_0, "$mrbtest_io_symlinkname"));
  mrb_value VAR_5 = FUNC_1(VAR_0, FUNC_3(VAR_0, "$mrbtest_io_socketname"));

  if (FUNC_5(VAR_2)) {
    FUNC_6(FUNC_0(VAR_2));
  }
  if (FUNC_5(VAR_3)) {
    FUNC_6(FUNC_0(VAR_3));
  }
  if (FUNC_5(VAR_4)) {
    FUNC_6(FUNC_0(VAR_4));
  }
  if (FUNC_5(VAR_5)) {
    FUNC_6(FUNC_0(VAR_5));
  }

  FUNC_2(VAR_0, FUNC_3(VAR_0, "$mrbtest_io_rfname"), FUNC_4());
  FUNC_2(VAR_0, FUNC_3(VAR_0, "$mrbtest_io_wfname"), FUNC_4());
  FUNC_2(VAR_0, FUNC_3(VAR_0, "$mrbtest_io_symlinkname"), FUNC_4());
  FUNC_2(VAR_0, FUNC_3(VAR_0, "$mrbtest_io_socketname"), FUNC_4());
  FUNC_2(VAR_0, FUNC_3(VAR_0, "$mrbtest_io_msg"), FUNC_4());

  return FUNC_4();
}
