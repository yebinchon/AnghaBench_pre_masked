
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t mrb_int ;
typedef int mrb_bool ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const) ;

mrb_bool
FUNC_1(const char *VAR_2, mrb_int VAR_3)
{
  mrb_int VAR_4;

  for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
    if (!FUNC_0(VAR_2[VAR_4])) return VAR_0;
  }
  return VAR_1;
}
