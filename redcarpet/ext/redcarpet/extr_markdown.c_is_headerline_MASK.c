
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;



__attribute__((used)) static int
FUNC_0(uint8_t *VAR_0, size_t VAR_1)
{
 size_t VAR_2 = 0;


 if (VAR_0[VAR_2] == '=') {
  for (VAR_2 = 1; VAR_2 < VAR_1 && VAR_0[VAR_2] == '='; VAR_2++);
  while (VAR_2 < VAR_1 && VAR_0[VAR_2] == ' ') VAR_2++;
  return (VAR_2 >= VAR_1 || VAR_0[VAR_2] == '\n') ? 1 : 0; }


 if (VAR_0[VAR_2] == '-') {
  for (VAR_2 = 1; VAR_2 < VAR_1 && VAR_0[VAR_2] == '-'; VAR_2++);
  while (VAR_2 < VAR_1 && VAR_0[VAR_2] == ' ') VAR_2++;
  return (VAR_2 >= VAR_1 || VAR_0[VAR_2] == '\n') ? 2 : 0; }

 return 0;
}
