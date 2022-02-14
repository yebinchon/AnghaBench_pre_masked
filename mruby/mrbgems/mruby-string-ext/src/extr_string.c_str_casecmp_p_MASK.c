
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ mrb_int ;
typedef int mrb_bool ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const) ;
 int VAR_1 ;

__attribute__((used)) static mrb_bool
FUNC_1(const char *VAR_2, mrb_int VAR_3, const char *VAR_4, mrb_int VAR_5)
{
  const char *VAR_6, *VAR_7;

  if (VAR_3 != VAR_5) return VAR_0;
  VAR_6 = VAR_2 + VAR_3;
  VAR_7 = VAR_4 + VAR_5;
  while (VAR_2 < VAR_6 && VAR_4 < VAR_7) {
    if (*VAR_2 != *VAR_4 && FUNC_0(*VAR_2) != FUNC_0(*VAR_4)) return VAR_0;
    ++VAR_2;
    ++VAR_4;
  }
  return VAR_1;
}
