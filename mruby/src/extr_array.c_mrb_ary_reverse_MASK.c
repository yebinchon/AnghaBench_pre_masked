
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RArray {int dummy; } ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef scalar_t__ mrb_int ;


 scalar_t__ FUNC_0 (struct RArray*) ;
 int * FUNC_1 (struct RArray*) ;
 int FUNC_2 (struct RArray*,scalar_t__) ;
 struct RArray* FUNC_3 (int *,scalar_t__) ;
 struct RArray* FUNC_4 (int ) ;
 int FUNC_5 (struct RArray*) ;

__attribute__((used)) static mrb_value
FUNC_6(mrb_state *VAR_0, mrb_value VAR_1)
{
  struct RArray *VAR_2 = FUNC_4(VAR_1), *VAR_3 = FUNC_3(VAR_0, FUNC_0(VAR_2));
  mrb_int VAR_4 = FUNC_0(VAR_2);

  if (VAR_4 > 0) {
    mrb_value *VAR_5, *VAR_6, *VAR_7;

    VAR_5 = FUNC_1(VAR_2);
    VAR_7 = VAR_5 + VAR_4;
    VAR_6 = FUNC_1(VAR_3) + VAR_4 - 1;
    while (VAR_5 < VAR_7) {
      *VAR_6-- = *VAR_5++;
    }
    FUNC_2(VAR_3, VAR_4);
  }
  return FUNC_5(VAR_3);
}
