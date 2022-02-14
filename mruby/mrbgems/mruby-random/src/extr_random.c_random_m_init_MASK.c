
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int rand_state ;
typedef int mrb_value ;
typedef int mrb_state ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int * FUNC_5 (int ) ;

__attribute__((used)) static mrb_value
FUNC_6(mrb_state *VAR_0, mrb_value VAR_1)
{
  mrb_value VAR_2;
  rand_state *VAR_3;

  VAR_2 = FUNC_0(VAR_0);

  VAR_3 = FUNC_5(VAR_1);
  if (FUNC_2(VAR_2)) {
    FUNC_3(VAR_3);
  }
  else {
    FUNC_4(VAR_3, (uint32_t)FUNC_1(VAR_2));
  }

  return VAR_1;
}
