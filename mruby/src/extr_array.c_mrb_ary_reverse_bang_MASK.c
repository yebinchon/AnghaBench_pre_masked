
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RArray {int dummy; } ;
typedef void* mrb_value ;
typedef int mrb_state ;
typedef int mrb_int ;


 int FUNC_0 (struct RArray*) ;
 void** FUNC_1 (struct RArray*) ;
 int FUNC_2 (int *,struct RArray*) ;
 struct RArray* FUNC_3 (void*) ;

__attribute__((used)) static mrb_value
FUNC_4(mrb_state *VAR_0, mrb_value VAR_1)
{
  struct RArray *VAR_2 = FUNC_3(VAR_1);
  mrb_int VAR_3 = FUNC_0(VAR_2);

  if (VAR_3 > 1) {
    mrb_value *VAR_4, *VAR_5;

    FUNC_2(VAR_0, VAR_2);
    VAR_4 = FUNC_1(VAR_2);
    VAR_5 = VAR_4 + VAR_3 - 1;

    while (VAR_4 < VAR_5) {
      mrb_value VAR_6 = *VAR_4;
      *VAR_4++ = *VAR_5;
      *VAR_5-- = VAR_6;
    }
  }
  return VAR_1;
}
