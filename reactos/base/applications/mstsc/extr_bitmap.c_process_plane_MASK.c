
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;


 int FUNC_0 (int*) ;

__attribute__((used)) static int
FUNC_1(uint8 * VAR_0, int VAR_1, int VAR_2, uint8 * VAR_3, int VAR_4)
{
 int VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;
 uint8 * VAR_13;
 uint8 * VAR_14;
 uint8 * VAR_15;
 uint8 * VAR_16;

 VAR_15 = VAR_0;
 VAR_16 = VAR_3;
 VAR_13 = 0;
 VAR_6 = 0;
 while (VAR_6 < VAR_2)
 {
  VAR_3 = (VAR_16 + VAR_1 * VAR_2 * 4) - ((VAR_6 + 1) * VAR_1 * 4);
  VAR_10 = 0;
  VAR_14 = VAR_3;
  VAR_5 = 0;
  if (VAR_13 == 0)
  {
   while (VAR_5 < VAR_1)
   {
    VAR_7 = FUNC_0(VAR_0);
    VAR_9 = VAR_7 & 0xf;
    VAR_8 = (VAR_7 >> 4) & 0xf;
    VAR_12 = (VAR_9 << 4) | VAR_8;
    if ((VAR_12 <= 47) && (VAR_12 >= 16))
    {
     VAR_9 = VAR_12;
     VAR_8 = 0;
    }
    while (VAR_8 > 0)
    {
     VAR_10 = FUNC_0(VAR_0);
     *VAR_3 = VAR_10;
     VAR_3 += 4;
     VAR_5++;
     VAR_8--;
    }
    while (VAR_9 > 0)
    {
     *VAR_3 = VAR_10;
     VAR_3 += 4;
     VAR_5++;
     VAR_9--;
    }
   }
  }
  else
  {
   while (VAR_5 < VAR_1)
   {
    VAR_7 = FUNC_0(VAR_0);
    VAR_9 = VAR_7 & 0xf;
    VAR_8 = (VAR_7 >> 4) & 0xf;
    VAR_12 = (VAR_9 << 4) | VAR_8;
    if ((VAR_12 <= 47) && (VAR_12 >= 16))
    {
     VAR_9 = VAR_12;
     VAR_8 = 0;
    }
    while (VAR_8 > 0)
    {
     VAR_11 = FUNC_0(VAR_0);
     if (VAR_11 & 1)
     {
      VAR_11 = VAR_11 >> 1;
      VAR_11 = VAR_11 + 1;
      VAR_10 = -VAR_11;
     }
     else
     {
      VAR_11 = VAR_11 >> 1;
      VAR_10 = VAR_11;
     }
     VAR_11 = VAR_13[VAR_5 * 4] + VAR_10;
     *VAR_3 = VAR_11;
     VAR_3 += 4;
     VAR_5++;
     VAR_8--;
    }
    while (VAR_9 > 0)
    {
     VAR_11 = VAR_13[VAR_5 * 4] + VAR_10;
     *VAR_3 = VAR_11;
     VAR_3 += 4;
     VAR_5++;
     VAR_9--;
    }
   }
  }
  VAR_6++;
  VAR_13 = VAR_14;
 }
 return (int) (VAR_0 - VAR_15);
}
