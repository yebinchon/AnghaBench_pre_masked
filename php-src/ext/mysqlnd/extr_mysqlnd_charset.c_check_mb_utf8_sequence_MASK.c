
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_uchar ;



__attribute__((used)) static unsigned int FUNC_0(const char * const VAR_0, const char * const VAR_1)
{
 zend_uchar VAR_2;

 if (VAR_0 >= VAR_1) {
  return 0;
 }

 VAR_2 = (zend_uchar) VAR_0[0];

 if (VAR_2 < 0x80) {
  return 1;
 }
 if (VAR_2 < 0xC2) {
  return 0;
 }
 if (VAR_2 < 0xE0) {
  if (VAR_0 + 2 > VAR_1) {
   return 0;
  }
  if (!(((zend_uchar)VAR_0[1] ^ 0x80) < 0x40)) {
   return 0;
  }
  return 2;
 }
 if (VAR_2 < 0xF0) {
  if (VAR_0 + 3 > VAR_1) {
   return 0;
  }
  if (!(((zend_uchar)VAR_0[1] ^ 0x80) < 0x40 && ((zend_uchar)VAR_0[2] ^ 0x80) < 0x40 &&
   (VAR_2 >= 0xE1 || (zend_uchar)VAR_0[1] >= 0xA0))) {
   return 0;
  }
  return 3;
 }
 if (VAR_2 < 0xF5) {
  if (VAR_0 + 4 > VAR_1) {
   return 0;
  }
  if (!(((zend_uchar)VAR_0[1] ^ 0x80) < 0x40 &&
   ((zend_uchar)VAR_0[2] ^ 0x80) < 0x40 &&
   ((zend_uchar)VAR_0[3] ^ 0x80) < 0x40 &&
    (VAR_2 >= 0xf1 || (zend_uchar)VAR_0[1] >= 0x90) &&
    (VAR_2 <= 0xf3 || (zend_uchar)VAR_0[1] <= 0x8F)))
  {
   return 0;
  }
  return 4;
 }
 return 0;
}
