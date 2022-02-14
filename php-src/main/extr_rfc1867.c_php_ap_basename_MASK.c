
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_encoding ;


 char* FUNC_0 (char*,char) ;

__attribute__((used)) static char *FUNC_1(const zend_encoding *VAR_0, char *VAR_1)
{
 char *VAR_2 = FUNC_0(VAR_1, '\\');
 char *VAR_3 = FUNC_0(VAR_1, '/');

 if (VAR_2 && VAR_3) {
  if (VAR_2 > VAR_3) {
   ++VAR_2;
  } else {
   VAR_2 = ++VAR_3;
  }
  return VAR_2;
 } else if (VAR_2) {
  return ++VAR_2;
 } else if (VAR_3) {
  return ++VAR_3;
 }
 return VAR_1;
}
