
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*,unsigned char*,int) ;

__attribute__((used)) static int
FUNC_1(unsigned char *VAR_0, unsigned char *VAR_1, unsigned char *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5 = VAR_4;
 int VAR_6 = VAR_3;

 while (VAR_6 > 0)
 {

  int VAR_7 = 0;
  int VAR_8 = 0;
  while (VAR_6 > 0 && *VAR_0 == *VAR_1)
  {
   VAR_0++;
   VAR_1++;
   VAR_7++;
   VAR_6--;
  }


  while (VAR_6 > 0 && *VAR_0 != *VAR_1)
  {
   VAR_0++;
   VAR_1++;
   VAR_8++;
   VAR_6--;
  }

  while (VAR_8 > 0)
  {
   int VAR_9;
   int VAR_10 = VAR_8;
   if (VAR_10 > 8)
    VAR_10 = 8;

   VAR_9 = (VAR_7+255-31)/255;
   VAR_5 -= 1 + VAR_10 + VAR_9;
   if (VAR_5 < 0)
    return 0;
   *VAR_2++ = ((VAR_10-1)<<5) | (VAR_7 < 31 ? VAR_7 : 31);
   if (VAR_9 > 0)
   {
    VAR_7 -= 31;
    while (--VAR_9)
    {
     *VAR_2++ = 255;
     VAR_7 -= 255;
    }
    *VAR_2++ = VAR_7;
   }
   FUNC_0(VAR_2, VAR_0-VAR_8, VAR_10);
   VAR_2 += VAR_10;

   VAR_7 = 0;
   VAR_8 -= VAR_10;
  }
 }
 return VAR_4 - VAR_5;
}
