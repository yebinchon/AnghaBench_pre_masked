
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int
FUNC_0(int VAR_0, int *VAR_1, const unsigned short VAR_2[][3], int VAR_3)
{
 int VAR_4, VAR_5 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  if (VAR_2[VAR_4][2] <= VAR_0 && VAR_0 <= VAR_2[VAR_4][2] - VAR_2[VAR_4][0] + VAR_2[VAR_4][1]) {
   *VAR_1 = VAR_0 + VAR_2[VAR_4][0] - VAR_2[VAR_4][2];
   VAR_5 = 1;
   break;
  }
 }
 return VAR_5;
}
