
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(const uint8 *VAR_1, unsigned VAR_2, uint8 *VAR_3)
{
 const uint8 *VAR_4 = VAR_1 + VAR_2,
      *VAR_5 = VAR_1;
 uint8 *VAR_6 = VAR_3;
 char VAR_7;
 unsigned VAR_8 = 0;
 unsigned long VAR_9 = 0;
 int VAR_10 = 0,
    VAR_11 = 0;

 while (VAR_5 < VAR_4)
 {
  VAR_7 = *VAR_5++;
  if (VAR_7 >= 'A' && VAR_7 <= 'Z')
   VAR_8 = VAR_7 - 'A';
  else if (VAR_7 >= 'a' && VAR_7 <= 'z')
   VAR_8 = VAR_7 - 'a' + 26;
  else if (VAR_7 >= '0' && VAR_7 <= '9')
   VAR_8 = VAR_7 - '0' + 52;
  else if (VAR_7 == '+')
   VAR_8 = 62;
  else if (VAR_7 == '/')
   VAR_8 = 63;
  else if (VAR_7 == '=')
  {



   if (!VAR_11)
   {
    if (VAR_10 == 2)
     VAR_11 = 1;
    else if (VAR_10 == 3)
     VAR_11 = 2;
    else
     return VAR_0;
   }
   VAR_8 = 0;
  }
  else if (VAR_7 == ' ' || VAR_7 == '\t' || VAR_7 == '\n' || VAR_7 == '\r')
   continue;
  else
   return VAR_0;




  VAR_9 = (VAR_9 << 6) + VAR_8;
  VAR_10++;
  if (VAR_10 == 4)
  {
   *VAR_6++ = (VAR_9 >> 16) & 255;
   if (VAR_11 == 0 || VAR_11 > 1)
    *VAR_6++ = (VAR_9 >> 8) & 255;
   if (VAR_11 == 0 || VAR_11 > 2)
    *VAR_6++ = VAR_9 & 255;
   VAR_9 = 0;
   VAR_10 = 0;
  }
 }

 if (VAR_10 != 0)
  return VAR_0;
 return VAR_6 - VAR_3;
}
