
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(int VAR_0, int VAR_1,
        int *VAR_2, int *VAR_3)
{
 bool VAR_4;
 bool VAR_5;


 if (VAR_0 * 8 > 33 * VAR_1)
  *VAR_2 = 2;
 else if (VAR_0 * 8 > 15 * VAR_1) {
  if (VAR_0 > 152000)
   *VAR_2 = 2;
  else
   *VAR_2 = 1;
 } else if (VAR_0 < 76000)
  *VAR_2 = 0;
 else if (VAR_0 > 152000)
  *VAR_2 = 2;
 else
  *VAR_2 = 1;


 VAR_4 = (VAR_0 * 15 > VAR_1 * 16 && VAR_1 < 56000) ||
     (VAR_0 > 56000 && VAR_1 < 56000);
 VAR_5 = VAR_0 * 23 < VAR_1 * 8;

 if (VAR_4)
  *VAR_3 = 2;
 else if (VAR_5)
  *VAR_3 = 0;
 else
  *VAR_3 = 1;
}
