
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_uchar ;
typedef char const* start ;


 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const) ;
 scalar_t__ FUNC_2 (char const) ;
 scalar_t__ FUNC_3 (char const) ;

__attribute__((used)) static unsigned int FUNC_4(const char * const VAR_0, const char * const VAR_1)
{
 if (*(zend_uchar*)VAR_0 < 0x80) {
  return 0;
 }
 if (FUNC_0(*(VAR_0)) && FUNC_0(*((VAR_0)+1))) {
  return 2;
 }
 if (FUNC_2(*(VAR_0)) && FUNC_1(*((VAR_0)+1))) {
  return 2;
 }
 if (FUNC_3(*(VAR_0)) && (VAR_1-VAR_0) > 2 && FUNC_0(*((VAR_0)+1)) && FUNC_0(*((VAR_0)+2))) {
  return 3;
 }
 return 0;
}
