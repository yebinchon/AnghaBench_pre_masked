
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stb_uint ;



stb_uint FUNC_0(stb_uint VAR_0, unsigned char *VAR_1, stb_uint VAR_2)
{
   static stb_uint VAR_3[256];
   stb_uint VAR_4,VAR_5,VAR_6;
   VAR_0 = ~VAR_0;

   if (VAR_3[1] == 0)
      for(VAR_4=0; VAR_4 < 256; VAR_4++) {
         for (VAR_6=VAR_4, VAR_5=0; VAR_5 < 8; ++VAR_5)
            VAR_6 = (VAR_6 >> 1) ^ (VAR_6 & 1 ? 0xedb88320 : 0);
         VAR_3[VAR_4] = VAR_6;
      }
   for (VAR_4=0; VAR_4 < VAR_2; ++VAR_4)
      VAR_0 = (VAR_0 >> 8) ^ VAR_3[VAR_1[VAR_4] ^ (VAR_0 & 0xff)];
   return ~VAR_0;
}
