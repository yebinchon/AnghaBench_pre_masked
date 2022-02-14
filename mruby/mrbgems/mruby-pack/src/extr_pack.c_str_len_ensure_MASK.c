
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;
typedef scalar_t__ mrb_int ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (int *,int ,scalar_t__) ;

__attribute__((used)) static mrb_value
FUNC_3(mrb_state *VAR_1, mrb_value VAR_2, mrb_int VAR_3)
{
  mrb_int VAR_4 = FUNC_0(VAR_2);
  if (VAR_3 < 0) {
    FUNC_1(VAR_1, VAR_0, "negative (or overflowed) integer");
  }
  if (VAR_3 > VAR_4) {
    do {
      VAR_4 *= 2;
    } while (VAR_3 > VAR_4);
    VAR_2 = FUNC_2(VAR_1, VAR_2, VAR_4);
  }
  return VAR_2;
}
