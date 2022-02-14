
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mrb_rational {void* denominator; void* numerator; } ;
struct RClass {int dummy; } ;
struct RBasic {int dummy; } ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef void* mrb_int ;


 int FUNC_0 (struct RBasic*) ;
 struct RClass* FUNC_1 (int *,char*) ;
 int FUNC_2 (struct RBasic*) ;
 struct RBasic* FUNC_3 (int *,struct RClass*,struct mrb_rational**) ;

__attribute__((used)) static mrb_value
FUNC_4(mrb_state *VAR_0, mrb_int VAR_1, mrb_int VAR_2)
{
  struct RClass *VAR_3 = FUNC_1(VAR_0, "Rational");
  struct mrb_rational *VAR_4;
  struct RBasic *VAR_5 = FUNC_3(VAR_0, VAR_3, &VAR_4);
  VAR_4->numerator = VAR_1;
  VAR_4->denominator = VAR_2;
  FUNC_0(VAR_5);
  return FUNC_2(VAR_5);
}
