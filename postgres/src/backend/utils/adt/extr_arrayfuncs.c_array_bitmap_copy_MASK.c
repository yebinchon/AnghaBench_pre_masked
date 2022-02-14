
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bits8 ;


 int FUNC_0 (int*) ;

void
FUNC_1(bits8 *VAR_0, int VAR_1,
      const bits8 *VAR_2, int VAR_3,
      int VAR_4)
{
 int VAR_5,
    VAR_6,
    VAR_7,
    VAR_8;

 FUNC_0(VAR_0);
 if (VAR_4 <= 0)
  return;
 VAR_0 += VAR_1 / 8;
 VAR_5 = 1 << (VAR_1 % 8);
 VAR_6 = *VAR_0;
 if (VAR_2)
 {
  VAR_2 += VAR_3 / 8;
  VAR_7 = 1 << (VAR_3 % 8);
  VAR_8 = *VAR_2;
  while (VAR_4-- > 0)
  {
   if (VAR_8 & VAR_7)
    VAR_6 |= VAR_5;
   else
    VAR_6 &= ~VAR_5;
   VAR_5 <<= 1;
   if (VAR_5 == 0x100)
   {
    *VAR_0++ = VAR_6;
    VAR_5 = 1;
    if (VAR_4 > 0)
     VAR_6 = *VAR_0;
   }
   VAR_7 <<= 1;
   if (VAR_7 == 0x100)
   {
    VAR_2++;
    VAR_7 = 1;
    if (VAR_4 > 0)
     VAR_8 = *VAR_2;
   }
  }
  if (VAR_5 != 1)
   *VAR_0 = VAR_6;
 }
 else
 {
  while (VAR_4-- > 0)
  {
   VAR_6 |= VAR_5;
   VAR_5 <<= 1;
   if (VAR_5 == 0x100)
   {
    *VAR_0++ = VAR_6;
    VAR_5 = 1;
    if (VAR_4 > 0)
     VAR_6 = *VAR_0;
   }
  }
  if (VAR_5 != 1)
   *VAR_0 = VAR_6;
 }
}
