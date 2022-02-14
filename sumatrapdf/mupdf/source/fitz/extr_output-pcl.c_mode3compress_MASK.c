
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int
FUNC_0(unsigned char *VAR_0, const unsigned char *VAR_1, unsigned char *VAR_2, int VAR_3)
{
 unsigned char *VAR_4 = VAR_0;
 const unsigned char *VAR_5 = VAR_1;
 const unsigned char *VAR_6 = VAR_1 + VAR_3;

 while (VAR_5 < VAR_6) {
  const unsigned char *VAR_7 = VAR_5;
  const unsigned char *VAR_8;
  const unsigned char *VAR_9;
  int VAR_10, VAR_11;

  while (VAR_5 < VAR_6 && *VAR_5 == *VAR_2) {
   VAR_5++, VAR_2++;
  }
  if (VAR_5 == VAR_6)
   break;


  VAR_8 = VAR_5;
  VAR_9 = (VAR_6 - VAR_5 > 8 ? VAR_5 + 8 : VAR_6);
  do
  {
   *VAR_2++ = *VAR_5++;
  }
  while (VAR_5 < VAR_9 && *VAR_5 != *VAR_2);



  VAR_10 = VAR_8 - VAR_7;
  VAR_11 = (VAR_5 - VAR_8 - 1) << 5;
  if (VAR_10 < 31)
   *VAR_0++ = VAR_11 + VAR_10;
  else {
   *VAR_0++ = VAR_11 + 31;
   VAR_10 -= 31;
   while (VAR_10 >= 255)
    *VAR_0++ = 255, VAR_10 -= 255;
   *VAR_0++ = VAR_10;
  }

  while (VAR_8 < VAR_5)
   *VAR_0++ = *VAR_8++;
 }
 return VAR_0 - VAR_4;
}
