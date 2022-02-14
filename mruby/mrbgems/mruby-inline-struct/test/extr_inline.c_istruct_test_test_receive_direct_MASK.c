
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,char**) ;

__attribute__((used)) static mrb_value
FUNC_2(mrb_state *VAR_0, mrb_value VAR_1)
{
  char *VAR_2;
  FUNC_1(VAR_0, "I", &VAR_2);
  return FUNC_0(VAR_2[0] == 's');
}
