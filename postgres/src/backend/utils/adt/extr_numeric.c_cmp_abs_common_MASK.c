
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ NumericDigit ;



__attribute__((used)) static int
FUNC_0(const NumericDigit *VAR_0, int VAR_1, int VAR_2,
      const NumericDigit *VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6 = 0;
 int VAR_7 = 0;



 while (VAR_2 > VAR_5 && VAR_6 < VAR_1)
 {
  if (VAR_0[VAR_6++] != 0)
   return 1;
  VAR_2--;
 }
 while (VAR_5 > VAR_2 && VAR_7 < VAR_4)
 {
  if (VAR_3[VAR_7++] != 0)
   return -1;
  VAR_5--;
 }



 if (VAR_2 == VAR_5)
 {
  while (VAR_6 < VAR_1 && VAR_7 < VAR_4)
  {
   int VAR_8 = VAR_0[VAR_6++] - VAR_3[VAR_7++];

   if (VAR_8)
   {
    if (VAR_8 > 0)
     return 1;
    return -1;
   }
  }
 }





 while (VAR_6 < VAR_1)
 {
  if (VAR_0[VAR_6++] != 0)
   return 1;
 }
 while (VAR_7 < VAR_4)
 {
  if (VAR_3[VAR_7++] != 0)
   return -1;
 }

 return 0;
}
