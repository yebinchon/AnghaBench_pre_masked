
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;

__attribute__((used)) static bool FUNC_1(const char *VAR_0, size_t VAR_1)
{

  if (VAR_1 == 0 || VAR_1 > 32 || !FUNC_0(VAR_0[0]) || !FUNC_0(VAR_0[VAR_1-1])){
    return 0;
  }

  for (int VAR_2=1; VAR_2<VAR_1; VAR_2++){
    if (!(FUNC_0(VAR_0[VAR_2]) || VAR_0[VAR_2]=='-')){
      return 0;
    }
  }

  return 1;
}
