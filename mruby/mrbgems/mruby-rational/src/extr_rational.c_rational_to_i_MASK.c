
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mrb_rational {int denominator; int numerator; } ;
typedef int mrb_value ;
typedef int mrb_state ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ,char*) ;
 struct mrb_rational* FUNC_3 (int *,int ) ;

__attribute__((used)) static mrb_value
FUNC_4(mrb_state *VAR_0, mrb_value VAR_1)
{
  struct mrb_rational *VAR_2 = FUNC_3(VAR_0, VAR_1);
  if (VAR_2->denominator == 0) {
    FUNC_2(VAR_0, FUNC_0(VAR_0, "StandardError"), "divided by 0");
  }
  return FUNC_1(VAR_2->numerator / VAR_2->denominator);
}
