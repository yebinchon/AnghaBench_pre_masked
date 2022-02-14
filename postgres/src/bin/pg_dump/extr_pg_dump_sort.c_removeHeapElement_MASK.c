
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0(int *VAR_0, int VAR_1)
{
 int VAR_2 = VAR_0[0];
 int VAR_3;
 int VAR_4;

 if (--VAR_1 <= 0)
  return VAR_2;
 VAR_3 = VAR_0[VAR_1];
 VAR_4 = 0;
 for (;;)
 {
  int VAR_5 = 2 * VAR_4 + 1;

  if (VAR_5 >= VAR_1)
   break;
  if (VAR_5 + 1 < VAR_1 &&
   VAR_0[VAR_5] < VAR_0[VAR_5 + 1])
   VAR_5++;
  if (VAR_3 >= VAR_0[VAR_5])
   break;
  VAR_0[VAR_4] = VAR_0[VAR_5];
  VAR_4 = VAR_5;
 }
 VAR_0[VAR_4] = VAR_3;
 return VAR_2;
}
