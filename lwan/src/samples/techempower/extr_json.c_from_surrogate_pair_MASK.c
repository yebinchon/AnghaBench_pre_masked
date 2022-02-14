
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int uchar_t ;



__attribute__((used)) static bool FUNC_0(uint16_t VAR_0, uint16_t VAR_1, uchar_t *VAR_2)
{
 if (VAR_0 >= 0xD800 && VAR_0 <= 0xDBFF && VAR_1 >= 0xDC00 && VAR_1 <= 0xDFFF) {
  *VAR_2 = 0x10000 + ((((uchar_t)VAR_0 & 0x3FF) << 10) | (VAR_1 & 0x3FF));
  return 1;
 } else {
  return 0;
 }
}
