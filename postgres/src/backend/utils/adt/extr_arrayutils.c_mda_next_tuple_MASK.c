
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int
FUNC_0(int VAR_0, int *VAR_1, const int *VAR_2)
{
 int VAR_3;

 if (VAR_0 <= 0)
  return -1;

 VAR_1[VAR_0 - 1] = (VAR_1[VAR_0 - 1] + 1) % VAR_2[VAR_0 - 1];
 for (VAR_3 = VAR_0 - 1; VAR_3 && VAR_1[VAR_3] == 0; VAR_3--)
  VAR_1[VAR_3 - 1] = (VAR_1[VAR_3 - 1] + 1) % VAR_2[VAR_3 - 1];

 if (VAR_3)
  return VAR_3;
 if (VAR_1[0])
  return 0;

 return -1;
}
