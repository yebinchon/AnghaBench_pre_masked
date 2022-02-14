
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uchar_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(uchar_t VAR_0, char *VAR_1)
{
 unsigned char *VAR_2 = (unsigned char*) VAR_1;

 FUNC_0(VAR_0 <= 0x10FFFF && !(VAR_0 >= 0xD800 && VAR_0 <= 0xDFFF));

 if (VAR_0 <= 0x7F) {

  *VAR_2++ = VAR_0;
  return 1;
 } else if (VAR_0 <= 0x7FF) {

  *VAR_2++ = 0xC0 | VAR_0 >> 6;
  *VAR_2++ = 0x80 | (VAR_0 & 0x3F);
  return 2;
 } else if (VAR_0 <= 0xFFFF) {

  *VAR_2++ = 0xE0 | VAR_0 >> 12;
  *VAR_2++ = 0x80 | (VAR_0 >> 6 & 0x3F);
  *VAR_2++ = 0x80 | (VAR_0 & 0x3F);
  return 3;
 } else {

  *VAR_2++ = 0xF0 | VAR_0 >> 18;
  *VAR_2++ = 0x80 | (VAR_0 >> 12 & 0x3F);
  *VAR_2++ = 0x80 | (VAR_0 >> 6 & 0x3F);
  *VAR_2++ = 0x80 | (VAR_0 & 0x3F);
  return 4;
 }
}
