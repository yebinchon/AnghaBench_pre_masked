
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mrb_rational {scalar_t__ denominator; scalar_t__ numerator; } ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef int mrb_float ;


 int FUNC_0 (int *,int) ;
 struct mrb_rational* FUNC_1 (int *,int ) ;

__attribute__((used)) static mrb_value
FUNC_2(mrb_state *VAR_0, mrb_value VAR_1)
{
  struct mrb_rational *VAR_2 = FUNC_1(VAR_0, VAR_1);
  mrb_float VAR_3 = (mrb_float)VAR_2->numerator / (mrb_float)VAR_2->denominator;

  return FUNC_0(VAR_0, VAR_3);
}
