
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mrb_complex {scalar_t__ imaginary; int real; } ;
typedef int mrb_value ;
typedef int mrb_state ;


 int VAR_0 ;
 struct mrb_complex* FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,char*,int ) ;

__attribute__((used)) static mrb_value
FUNC_3(mrb_state *VAR_1, mrb_value VAR_2)
{
  struct mrb_complex *VAR_3 = FUNC_0(VAR_1, VAR_2);

  if (VAR_3->imaginary != 0) {
    FUNC_2(VAR_1, VAR_0, "can't convert %v into Float", VAR_2);
  }
  return FUNC_1(VAR_1, VAR_3->real);
}
