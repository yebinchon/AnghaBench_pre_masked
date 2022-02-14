
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mrb_rational {scalar_t__ numerator; } ;
typedef int mrb_value ;
typedef int mrb_state ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 struct mrb_rational* FUNC_2 (int *,int ) ;

__attribute__((used)) static mrb_value
FUNC_3(mrb_state *VAR_0, mrb_value VAR_1)
{
  struct mrb_rational *VAR_2 = FUNC_2(VAR_0, VAR_1);
  if (VAR_2->numerator < 0) {
    return FUNC_1();
  }
  return FUNC_0();
}
