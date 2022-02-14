
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mrb_complex {int imaginary; } ;
typedef int mrb_value ;
typedef int mrb_state ;


 struct mrb_complex* FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static mrb_value
FUNC_2(mrb_state *VAR_0, mrb_value VAR_1)
{
  struct mrb_complex *VAR_2 = FUNC_0(VAR_0, VAR_1);
  return FUNC_1(VAR_0, VAR_2->imaginary);
}
