
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_long ;
typedef scalar_t__ int32_t ;


 scalar_t__ FUNC_0 (char*,char*,size_t) ;

zend_long
FUNC_1(char *VAR_0, size_t VAR_1, char *VAR_2, size_t VAR_3, int32_t VAR_4)
{
 char *VAR_5, *VAR_6;

 if (VAR_4 >= 0) {
  VAR_5 = VAR_0 + VAR_4;
  VAR_6 = VAR_0 + VAR_1 - VAR_3;
 } else {
  VAR_5 = VAR_0;
  if (VAR_3 > (size_t)-VAR_4) {
   VAR_6 = VAR_0 + VAR_1 - VAR_3;
  } else {
   VAR_6 = VAR_0 + VAR_1 + VAR_4;
  }
 }

 if (VAR_3 == 1) {

  while (VAR_6 >= VAR_5) {
   if (*VAR_6 == *VAR_2) {
    return (VAR_6 - VAR_5 + (VAR_4 > 0 ? VAR_4 : 0));
   }
   VAR_6--;
  }
  return -1;
 }

 while (VAR_6 >= VAR_5) {
  if (FUNC_0(VAR_6, VAR_2, VAR_3) == 0) {
   return (VAR_6 - VAR_5 + (VAR_4 > 0 ? VAR_4 : 0));
  }
  VAR_6--;
 }

 return -1;
}
