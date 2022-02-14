
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* FUNC_0 (unsigned char) ;

int FUNC_1(char *VAR_0, const char *VAR_1, const char *VAR_2)
{
 int VAR_3 = 0;
 int VAR_4 = 0;

 while (VAR_1 < VAR_2) {
  unsigned char VAR_5, VAR_6, VAR_7;

  VAR_5 = *VAR_1++;
  *VAR_0++ = FUNC_0(VAR_5 >> 2);
  if (VAR_1 < VAR_2) {
   VAR_6 = *VAR_1++;
   *VAR_0++ = FUNC_0(((VAR_5 & 3) << 4) | (VAR_6 >> 4));
   if (VAR_1 < VAR_2) {
    VAR_7 = *VAR_1++;
    *VAR_0++ = FUNC_0(((VAR_6 & 15) << 2) |
           (VAR_7 >> 6));
    *VAR_0++ = FUNC_0(VAR_7 & 63);
   } else {
    *VAR_0++ = FUNC_0((VAR_6 & 15) << 2);
    *VAR_0++ = '=';
   }
  } else {
   *VAR_0++ = FUNC_0(((VAR_5 & 3) << 4));
   *VAR_0++ = '=';
   *VAR_0++ = '=';
  }
  VAR_3 += 4;
  VAR_4 += 4;
  if (VAR_4 == 64) {
   VAR_4 = 0;
   *(VAR_0++) = '\n';
   VAR_3++;
  }
 }
 return VAR_3;
}
