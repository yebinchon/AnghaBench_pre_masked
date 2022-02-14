
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pg_wchar ;



unsigned char *
FUNC_0(pg_wchar VAR_0, unsigned char *VAR_1)
{
 if (VAR_0 <= 0x7F)
 {
  VAR_1[0] = VAR_0;
 }
 else if (VAR_0 <= 0x7FF)
 {
  VAR_1[0] = 0xC0 | ((VAR_0 >> 6) & 0x1F);
  VAR_1[1] = 0x80 | (VAR_0 & 0x3F);
 }
 else if (VAR_0 <= 0xFFFF)
 {
  VAR_1[0] = 0xE0 | ((VAR_0 >> 12) & 0x0F);
  VAR_1[1] = 0x80 | ((VAR_0 >> 6) & 0x3F);
  VAR_1[2] = 0x80 | (VAR_0 & 0x3F);
 }
 else
 {
  VAR_1[0] = 0xF0 | ((VAR_0 >> 18) & 0x07);
  VAR_1[1] = 0x80 | ((VAR_0 >> 12) & 0x3F);
  VAR_1[2] = 0x80 | ((VAR_0 >> 6) & 0x3F);
  VAR_1[3] = 0x80 | (VAR_0 & 0x3F);
 }

 return VAR_1;
}
