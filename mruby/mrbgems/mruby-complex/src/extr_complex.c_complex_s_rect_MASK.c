
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;
typedef double mrb_float ;


 int FUNC_0 (int *,double,double) ;
 int FUNC_1 (int *,char*,double*,double*) ;

__attribute__((used)) static mrb_value
FUNC_2(mrb_state *VAR_0, mrb_value VAR_1)
{
  mrb_float VAR_2, VAR_3 = 0.0;

  FUNC_1(VAR_0, "f|f", &VAR_2, &VAR_3);
  return FUNC_0(VAR_0, VAR_2, VAR_3);
}
