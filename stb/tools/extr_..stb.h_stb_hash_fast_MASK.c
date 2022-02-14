
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (unsigned char*) ;

unsigned int FUNC_1(void *VAR_0, int VAR_1)
{
   unsigned char *VAR_2 = (unsigned char *) VAR_0;
   unsigned int VAR_3 = VAR_1;

   if (VAR_1 <= 0 || VAR_2 == ((void*)0)) return 0;


   for (;VAR_1 > 3; VAR_1 -= 4) {
      unsigned int VAR_4;
      VAR_3 += FUNC_0(VAR_2);
      VAR_4 = (FUNC_0(VAR_2+2) << 11);
      VAR_3 = (VAR_3 << 16) ^ VAR_3 ^ VAR_4;
      VAR_2 += 4;
      VAR_3 += VAR_3 >> 11;
   }


   switch (VAR_1) {
      case 3: VAR_3 += FUNC_0(VAR_2);
              VAR_3 ^= VAR_3 << 16;
              VAR_3 ^= VAR_2[2] << 18;
              VAR_3 += VAR_3 >> 11;
              break;
      case 2: VAR_3 += FUNC_0(VAR_2);
              VAR_3 ^= VAR_3 << 11;
              VAR_3 += VAR_3 >> 17;
              break;
      case 1: VAR_3 += VAR_2[0];
              VAR_3 ^= VAR_3 << 10;
              VAR_3 += VAR_3 >> 1;
              break;
      case 0: break;
   }


   VAR_3 ^= VAR_3 << 3;
   VAR_3 += VAR_3 >> 5;
   VAR_3 ^= VAR_3 << 4;
   VAR_3 += VAR_3 >> 17;
   VAR_3 ^= VAR_3 << 25;
   VAR_3 += VAR_3 >> 6;

   return VAR_3;
}
