
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_uchar ;


 scalar_t__ FUNC_0 (char const) ;

__attribute__((used)) static unsigned int FUNC_1(const char * const VAR_0, const char * const VAR_1)
{
 if (VAR_1 - VAR_0 <= 1) {
  return 0;
 }
 if (*(zend_uchar *)VAR_0 < 0x80) {
  return 0;
 }
 if (FUNC_0(VAR_0[1])) {
  return 2;
 }
 return 0;
}
