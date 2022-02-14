
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef int mrb_int ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,int*,int*,int*) ;

__attribute__((used)) static mrb_value
FUNC_2(mrb_state *VAR_0, mrb_value VAR_1)
{
  mrb_int VAR_2;
  mrb_int VAR_3;
  mrb_int VAR_4;

  FUNC_1(VAR_0, "iii", &VAR_2, &VAR_3, &VAR_4);
  VAR_2 ^= ((uint32_t)VAR_4 << (VAR_3 % 16));

  return FUNC_0(VAR_2);
}
