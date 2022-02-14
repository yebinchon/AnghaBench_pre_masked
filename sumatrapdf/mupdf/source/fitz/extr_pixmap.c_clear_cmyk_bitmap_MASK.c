
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char uint8_t ;
typedef scalar_t__ uint32_t ;


 int FUNC_0 (scalar_t__*,int,int) ;
 int FUNC_1 (scalar_t__*,int ,size_t) ;

__attribute__((used)) static void
FUNC_2(unsigned char *VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
 uint32_t *VAR_7 = (uint32_t *)(void *)VAR_0;
 uint8_t *VAR_8;

 if (VAR_1 < 0 || VAR_2 < 0)
  return;

 if (VAR_3)
 {
  int VAR_9, VAR_10;
  VAR_3 += 4;
  VAR_4 -= VAR_1 * (VAR_3 + VAR_6);
  for (; VAR_2 > 0; VAR_2--)
  {
   for (VAR_9 = VAR_1; VAR_9 > 0; VAR_9--)
   {
    for (VAR_10 = VAR_3; VAR_10 > 0; VAR_10--)
     *VAR_0++ = VAR_5;
    if (VAR_6)
     *VAR_0++ = 255;
   }
   VAR_0 += VAR_4;
  }
  return;
 }

 if (VAR_6)
 {
  int VAR_11 = VAR_1;
  VAR_4 -= VAR_1*5;
  if (VAR_4 == 0)
  {





   union
   {
    uint8_t bytes[20];
    uint32_t words[5];
   } VAR_12;

   VAR_11 *= VAR_2;
   VAR_2 = 1;

   VAR_12.words[0] = 0;
   VAR_12.words[1] = 0;
   VAR_12.words[2] = 0;
   VAR_12.words[3] = 0;
   VAR_12.words[4] = 0;
   VAR_12.bytes[3] = VAR_5;
   VAR_12.bytes[4] = 255;
   VAR_12.bytes[8] = VAR_5;
   VAR_12.bytes[9] = 255;
   VAR_12.bytes[13] = VAR_5;
   VAR_12.bytes[14] = 255;
   VAR_12.bytes[18] = VAR_5;
   VAR_12.bytes[19] = 255;

   VAR_11 -= 3;
   {
    const uint32_t VAR_13 = VAR_12.words[0];
    const uint32_t VAR_14 = VAR_12.words[1];
    const uint32_t VAR_15 = VAR_12.words[2];
    const uint32_t VAR_16 = VAR_12.words[3];
    const uint32_t VAR_17 = VAR_12.words[4];
    while (VAR_11 > 0)
    {
     *VAR_7++ = VAR_13;
     *VAR_7++ = VAR_14;
     *VAR_7++ = VAR_15;
     *VAR_7++ = VAR_16;
     *VAR_7++ = VAR_17;
     VAR_11 -= 4;
    }
   }
   VAR_11 += 3;

  }
  VAR_8 = (unsigned char *)VAR_7;
  VAR_1 = VAR_11;
  while (VAR_2--)
  {
   VAR_11 = VAR_1;
   while (VAR_11 > 0)
   {
    *VAR_8++ = 0;
    *VAR_8++ = 0;
    *VAR_8++ = 0;
    *VAR_8++ = VAR_5;
    *VAR_8++ = 255;
    VAR_11--;
   }
   VAR_8 += VAR_4;
  }
 }
 else
 {
  VAR_4 -= VAR_1*4;
  if ((VAR_4 & 3) == 0)
  {
   size_t VAR_18 = VAR_1;
   if (VAR_4 == 0)
   {
    VAR_18 *= VAR_2;
    VAR_2 = 1;
   }
   VAR_18 *= 4;
   if (VAR_5 == 0)
   {
    while (VAR_2--)
    {
     FUNC_1(VAR_7, 0, VAR_18);
     VAR_7 += (VAR_4>>2);
    }
   }
   else
   {

    union
    {
     uint8_t bytes[4];
     uint32_t word;
    } VAR_19;

    VAR_19.word = 0;
    VAR_19.bytes[3] = VAR_5;
    {
     const uint32_t VAR_20 = VAR_19.word;
     while (VAR_2--)
     {
      size_t VAR_21 = VAR_18 >> 2;
      while (VAR_21--)
      {
       *VAR_7++ = VAR_20;
      }
      VAR_7 += (VAR_4>>2);
     }
    }
   }
  }
  else
  {
   VAR_8 = (unsigned char *)VAR_7;
   while (VAR_2--)
   {
    int VAR_22 = VAR_1;
    while (VAR_22 > 0)
    {
     *VAR_8++ = 0;
     *VAR_8++ = 0;
     *VAR_8++ = 0;
     *VAR_8++ = VAR_5;
     VAR_22--;
    }
    VAR_8 += VAR_4;
   }
  }
 }
}
