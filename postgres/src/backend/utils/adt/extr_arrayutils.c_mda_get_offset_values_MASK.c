
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void
FUNC_0(int VAR_0, int *VAR_1, const int *VAR_2, const int *VAR_3)
{
 int VAR_4,
    VAR_5;

 VAR_1[VAR_0 - 1] = 0;
 for (VAR_5 = VAR_0 - 2; VAR_5 >= 0; VAR_5--)
 {
  VAR_1[VAR_5] = VAR_2[VAR_5] - 1;
  for (VAR_4 = VAR_5 + 1; VAR_4 < VAR_0; VAR_4++)
   VAR_1[VAR_5] -= (VAR_3[VAR_4] - 1) * VAR_2[VAR_4];
 }
}
