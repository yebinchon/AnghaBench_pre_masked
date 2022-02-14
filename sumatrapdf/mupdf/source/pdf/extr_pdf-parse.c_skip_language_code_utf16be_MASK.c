
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static size_t
FUNC_0(const unsigned char *VAR_0, size_t VAR_1, size_t VAR_2)
{

 if (VAR_2 + 6 <= VAR_1 && VAR_0[VAR_2+0] == 0 && VAR_0[VAR_2+1] == 27 && VAR_0[VAR_2+4] == 0 && VAR_0[VAR_2+5] == 27)
  return 6;
 else if (VAR_2 + 8 <= VAR_1 && VAR_0[VAR_2+0] == 0 && VAR_0[VAR_2+1] == 27 && VAR_0[VAR_2+6] == 0 && VAR_0[VAR_2+7] == 27)
  return 8;
 return 0;
}
