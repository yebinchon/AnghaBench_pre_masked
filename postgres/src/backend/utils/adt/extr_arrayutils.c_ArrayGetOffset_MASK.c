
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int
FUNC_0(int VAR_0, const int *VAR_1, const int *VAR_2, const int *VAR_3)
{
 int VAR_4,
    VAR_5 = 1,
    VAR_6 = 0;

 for (VAR_4 = VAR_0 - 1; VAR_4 >= 0; VAR_4--)
 {
  VAR_6 += (VAR_3[VAR_4] - VAR_2[VAR_4]) * VAR_5;
  VAR_5 *= VAR_1[VAR_4];
 }
 return VAR_6;
}
