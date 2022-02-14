
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mrb_complex {void* imaginary; void* real; } ;
struct RClass {int dummy; } ;
struct RBasic {int dummy; } ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef void* mrb_float ;


 int FUNC_0 (struct RBasic*) ;
 struct RBasic* FUNC_1 (int *,struct RClass*,struct mrb_complex**) ;
 struct RClass* FUNC_2 (int *,char*) ;
 int FUNC_3 (struct RBasic*) ;

__attribute__((used)) static mrb_value
FUNC_4(mrb_state *VAR_0, mrb_float VAR_1, mrb_float VAR_2)
{
  struct RClass *VAR_3 = FUNC_2(VAR_0, "Complex");
  struct mrb_complex *VAR_4;
  struct RBasic *VAR_5 = FUNC_1(VAR_0, VAR_3, &VAR_4);
  VAR_4->real = VAR_1;
  VAR_4->imaginary = VAR_2;
  FUNC_0(VAR_5);

  return FUNC_3(VAR_5);
}
