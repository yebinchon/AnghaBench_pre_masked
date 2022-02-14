
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;
typedef int mrb_int ;
typedef double mrb_float ;


 int FUNC_0 (int *,char*) ;
 double FUNC_1 (double) ;
 int FUNC_2 (int *,double) ;
 int FUNC_3 (int *,char*,double*,double*) ;

__attribute__((used)) static mrb_value
FUNC_4(mrb_state *VAR_0, mrb_value VAR_1)
{
  mrb_float VAR_2, VAR_3;
  mrb_int VAR_4;

  VAR_4 = FUNC_3(VAR_0, "f|f", &VAR_2, &VAR_3);
  if (VAR_2 < 0.0) {
    FUNC_0(VAR_0, "log");
  }
  VAR_2 = FUNC_1(VAR_2);
  if (VAR_4 == 2) {
    if (VAR_3 < 0.0) {
      FUNC_0(VAR_0, "log");
    }
    VAR_2 /= FUNC_1(VAR_3);
  }
  return FUNC_2(VAR_0, VAR_2);
}
