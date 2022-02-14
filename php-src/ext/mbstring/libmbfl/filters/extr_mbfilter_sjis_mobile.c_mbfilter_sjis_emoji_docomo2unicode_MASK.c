
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int
FUNC_0(int VAR_3, int *VAR_4)
{
 int VAR_5 = VAR_3;
 if (VAR_3 >= VAR_2 && VAR_3 <= VAR_1) {
  if (VAR_3 >= VAR_2 + 0x00a2 &&
   VAR_3 <= VAR_2 + 0x00ad &&
   VAR_3 != VAR_2 + 0x00a3) {
   VAR_5 = 0x20E3;
   *VAR_4 = VAR_0[VAR_3 - VAR_2];
   if (*VAR_4 > 0xf000) {
    *VAR_4 += 0x10000;
   }
  } else {
   VAR_5 = VAR_0[VAR_3 - VAR_2];
   if (VAR_5 > 0xf000) {
    VAR_5 += 0x10000;
   } else if (VAR_5 > 0xe000) {
    VAR_5 += 0xf0000;
   }
   *VAR_4 = 0;
   if (!VAR_5) {
    VAR_5 = VAR_3;
   }
  }
 }

 return VAR_5;
}
