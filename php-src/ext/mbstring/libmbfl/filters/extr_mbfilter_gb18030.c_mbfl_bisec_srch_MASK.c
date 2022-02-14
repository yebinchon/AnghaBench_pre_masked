
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int
FUNC_0(int VAR_0, const unsigned short *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4 = 0, VAR_5 = VAR_2-1;

 while (VAR_4 < VAR_5) {
  VAR_3 = (VAR_4+VAR_5) >> 1;
  if (VAR_0 <= VAR_1[2*VAR_3+1]) {
   VAR_5 = VAR_3;
  } else if (VAR_0 >= VAR_1[2*VAR_3+2]) {
   VAR_4 = VAR_3 + 1;
  } else {
   return -1;
  }
 }
 return VAR_4;
}
