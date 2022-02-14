
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_int ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static mrb_value
FUNC_1(mrb_int VAR_1, mrb_int VAR_2)
{
  if (VAR_2 < 0) {
    return FUNC_0(0);
  }
  if (VAR_2 >= VAR_0) {
    if (VAR_1 < 0) {
      return FUNC_0(-1);
    }
    return FUNC_0(0);
  }
  return FUNC_0(VAR_1 >> VAR_2);
}
