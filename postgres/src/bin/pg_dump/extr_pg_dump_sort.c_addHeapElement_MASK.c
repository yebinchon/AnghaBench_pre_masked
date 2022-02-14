
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void
FUNC_0(int VAR_0, int *VAR_1, int VAR_2)
{
 int VAR_3;





 VAR_3 = VAR_2;
 while (VAR_3 > 0)
 {
  int VAR_4 = (VAR_3 - 1) >> 1;

  if (VAR_0 <= VAR_1[VAR_4])
   break;
  VAR_1[VAR_3] = VAR_1[VAR_4];
  VAR_3 = VAR_4;
 }
 VAR_1[VAR_3] = VAR_0;
}
