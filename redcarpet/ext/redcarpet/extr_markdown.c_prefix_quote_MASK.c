
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;



__attribute__((used)) static size_t
FUNC_0(uint8_t *VAR_0, size_t VAR_1)
{
 size_t VAR_2 = 0;
 if (VAR_2 < VAR_1 && VAR_0[VAR_2] == ' ') VAR_2++;
 if (VAR_2 < VAR_1 && VAR_0[VAR_2] == ' ') VAR_2++;
 if (VAR_2 < VAR_1 && VAR_0[VAR_2] == ' ') VAR_2++;

 if (VAR_2 < VAR_1 && VAR_0[VAR_2] == '>') {
  if (VAR_2 + 1 < VAR_1 && VAR_0[VAR_2 + 1] == ' ')
   return VAR_2 + 2;

  return VAR_2 + 1;
 }

 return 0;
}
