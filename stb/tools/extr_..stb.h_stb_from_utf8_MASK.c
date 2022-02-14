
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stb_uint32 ;
typedef int stb__wchar ;



stb__wchar * FUNC_0(stb__wchar *VAR_0, const char *VAR_1, int VAR_2)
{
   unsigned char *VAR_3 = (unsigned char *) VAR_1;
   stb_uint32 VAR_4;
   int VAR_5=0;
   --VAR_2;
   while (*VAR_3) {
      if (VAR_5 >= VAR_2)
         return ((void*)0);
      if (!(*VAR_3 & 0x80))
         VAR_0[VAR_5++] = *VAR_3++;
      else if ((*VAR_3 & 0xe0) == 0xc0) {
         if (*VAR_3 < 0xc2) return ((void*)0);
         VAR_4 = (*VAR_3++ & 0x1f) << 6;
         if ((*VAR_3 & 0xc0) != 0x80) return ((void*)0);
         VAR_0[VAR_5++] = VAR_4 + (*VAR_3++ & 0x3f);
      } else if ((*VAR_3 & 0xf0) == 0xe0) {
         if (*VAR_3 == 0xe0 && (VAR_3[1] < 0xa0 || VAR_3[1] > 0xbf)) return ((void*)0);
         if (*VAR_3 == 0xed && VAR_3[1] > 0x9f) return ((void*)0);
         VAR_4 = (*VAR_3++ & 0x0f) << 12;
         if ((*VAR_3 & 0xc0) != 0x80) return ((void*)0);
         VAR_4 += (*VAR_3++ & 0x3f) << 6;
         if ((*VAR_3 & 0xc0) != 0x80) return ((void*)0);
         VAR_0[VAR_5++] = VAR_4 + (*VAR_3++ & 0x3f);
      } else if ((*VAR_3 & 0xf8) == 0xf0) {
         if (*VAR_3 > 0xf4) return ((void*)0);
         if (*VAR_3 == 0xf0 && (VAR_3[1] < 0x90 || VAR_3[1] > 0xbf)) return ((void*)0);
         if (*VAR_3 == 0xf4 && VAR_3[1] > 0x8f) return ((void*)0);
         VAR_4 = (*VAR_3++ & 0x07) << 18;
         if ((*VAR_3 & 0xc0) != 0x80) return ((void*)0);
         VAR_4 += (*VAR_3++ & 0x3f) << 12;
         if ((*VAR_3 & 0xc0) != 0x80) return ((void*)0);
         VAR_4 += (*VAR_3++ & 0x3f) << 6;
         if ((*VAR_3 & 0xc0) != 0x80) return ((void*)0);
         VAR_4 += (*VAR_3++ & 0x3f);

         if ((VAR_4 & 0xFFFFF800) == 0xD800) return ((void*)0);
         if (VAR_4 >= 0x10000) {
            VAR_4 -= 0x10000;
            if (VAR_5 + 2 > VAR_2) return ((void*)0);
            VAR_0[VAR_5++] = 0xD800 | (0x3ff & (VAR_4 >> 10));
            VAR_0[VAR_5++] = 0xDC00 | (0x3ff & (VAR_4 ));
         }
      } else
         return ((void*)0);
   }
   VAR_0[VAR_5] = 0;
   return VAR_0;
}
