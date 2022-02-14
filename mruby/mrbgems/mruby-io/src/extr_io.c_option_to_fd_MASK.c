
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;


 int VAR_0 ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char const*,int ) ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int *,int ,char*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char const*) ;

__attribute__((used)) static int
FUNC_11(mrb_state *VAR_1, mrb_value VAR_2, const char *VAR_3)
{
  mrb_value VAR_4;

  if (!FUNC_2(VAR_2)) return -1;
  VAR_4 = FUNC_1(VAR_1, VAR_2, FUNC_8(FUNC_3(VAR_1, VAR_3, FUNC_10(VAR_3))), FUNC_6());
  if (FUNC_5(VAR_4)) return -1;

  switch (FUNC_9(VAR_4)) {
    case 129:
      return (int)FUNC_0(FUNC_4(VAR_1, VAR_4));
    case 128:
      return (int)FUNC_0(VAR_4);
    default:
      FUNC_7(VAR_1, VAR_0, "wrong exec redirect action");
      break;
  }
  return -1;
}
