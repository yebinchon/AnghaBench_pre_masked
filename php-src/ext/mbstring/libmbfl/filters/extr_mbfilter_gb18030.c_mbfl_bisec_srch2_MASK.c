
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int
FUNC_0(int VAR_0, const unsigned short VAR_1[], int VAR_2)
{
 int VAR_3, VAR_4 = 0, VAR_5 = VAR_2;

 if (VAR_0 == VAR_1[0]) {
  return 0;
 }

 while (VAR_5 - VAR_4 > 1) {
  VAR_3 = (VAR_4 + VAR_5) >> 1;
  if (VAR_0 < VAR_1[VAR_3]) {
   VAR_5 = VAR_3;
  } else if (VAR_0 > VAR_1[VAR_3]) {
   VAR_4 = VAR_3;
  } else {
   return VAR_3;
  }
 }
 return -1;
}
