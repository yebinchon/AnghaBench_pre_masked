
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int rand_state ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef int mrb_int ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *,scalar_t__) ;
 scalar_t__ FUNC_5 (int *) ;
 int * FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int *) ;

__attribute__((used)) static mrb_value
FUNC_8(mrb_state *VAR_0, mrb_value VAR_1)
{
  uint32_t VAR_2;
  uint32_t VAR_3;
  mrb_value VAR_4;
  rand_state *VAR_5 = FUNC_6(VAR_1);

  VAR_4 = FUNC_0(VAR_0);
  if (FUNC_3(VAR_4)) {
    VAR_2 = (uint32_t)FUNC_7(((void*)0)) + FUNC_5(VAR_5);
  }
  else {
    VAR_2 = (uint32_t)FUNC_1(VAR_4);
  }
  VAR_3 = FUNC_4(VAR_5, VAR_2);

  return FUNC_2((mrb_int)VAR_3);
}
