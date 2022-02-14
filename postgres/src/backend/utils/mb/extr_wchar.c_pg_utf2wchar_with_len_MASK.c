
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;
typedef int pg_wchar ;



__attribute__((used)) static int
FUNC_0(const unsigned char *VAR_0, pg_wchar *VAR_1, int VAR_2)
{
 int VAR_3 = 0;
 uint32 VAR_4,
    VAR_5,
    VAR_6,
    VAR_7;

 while (VAR_2 > 0 && *VAR_0)
 {
  if ((*VAR_0 & 0x80) == 0)
  {
   *VAR_1 = *VAR_0++;
   VAR_2--;
  }
  else if ((*VAR_0 & 0xe0) == 0xc0)
  {
   if (VAR_2 < 2)
    break;
   VAR_4 = *VAR_0++ & 0x1f;
   VAR_5 = *VAR_0++ & 0x3f;
   *VAR_1 = (VAR_4 << 6) | VAR_5;
   VAR_2 -= 2;
  }
  else if ((*VAR_0 & 0xf0) == 0xe0)
  {
   if (VAR_2 < 3)
    break;
   VAR_4 = *VAR_0++ & 0x0f;
   VAR_5 = *VAR_0++ & 0x3f;
   VAR_6 = *VAR_0++ & 0x3f;
   *VAR_1 = (VAR_4 << 12) | (VAR_5 << 6) | VAR_6;
   VAR_2 -= 3;
  }
  else if ((*VAR_0 & 0xf8) == 0xf0)
  {
   if (VAR_2 < 4)
    break;
   VAR_4 = *VAR_0++ & 0x07;
   VAR_5 = *VAR_0++ & 0x3f;
   VAR_6 = *VAR_0++ & 0x3f;
   VAR_7 = *VAR_0++ & 0x3f;
   *VAR_1 = (VAR_4 << 18) | (VAR_5 << 12) | (VAR_6 << 6) | VAR_7;
   VAR_2 -= 4;
  }
  else
  {

   *VAR_1 = *VAR_0++;
   VAR_2--;
  }
  VAR_1++;
  VAR_3++;
 }
 *VAR_1 = 0;
 return VAR_3;
}
