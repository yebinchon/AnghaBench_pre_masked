
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;
typedef scalar_t__ mrb_int ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int **,scalar_t__*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int ,char*) ;
 int FUNC_3 (int *,scalar_t__,int *,int ) ;

mrb_value
FUNC_4(mrb_state *VAR_1, mrb_value VAR_2)
{
  mrb_int VAR_3;
  mrb_value *VAR_4;

  FUNC_0(VAR_1, "*", &VAR_4, &VAR_3);

  if (VAR_3 <= 0) {
    FUNC_2(VAR_1, VAR_0, "too few arguments");
    return FUNC_1();
  }
  else {
    return FUNC_3(VAR_1, VAR_3 - 1, VAR_4 + 1, VAR_4[0]);
  }
}
