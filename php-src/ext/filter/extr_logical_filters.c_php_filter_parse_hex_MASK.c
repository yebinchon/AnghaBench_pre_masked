
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_ulong ;
typedef scalar_t__ zend_long ;



__attribute__((used)) static int FUNC_0(const char *VAR_0, size_t VAR_1, zend_long *VAR_2) {
 zend_ulong VAR_3 = 0;
 const char *VAR_4 = VAR_0 + VAR_1;
 zend_ulong VAR_5;

 while (VAR_0 < VAR_4) {
  if (*VAR_0 >= '0' && *VAR_0 <= '9') {
   VAR_5 = ((*(VAR_0++)) - '0');
  } else if (*VAR_0 >= 'a' && *VAR_0 <= 'f') {
   VAR_5 = ((*(VAR_0++)) - ('a' - 10));
  } else if (*VAR_0 >= 'A' && *VAR_0 <= 'F') {
   VAR_5 = ((*(VAR_0++)) - ('A' - 10));
  } else {
   return -1;
  }
  if ((VAR_3 > ((zend_ulong)(~(zend_long)0)) / 16) ||
   ((VAR_3 = VAR_3 * 16) > ((zend_ulong)(~(zend_long)0)) - VAR_5)) {
   return -1;
  }
  VAR_3 += VAR_5;
 }

 *VAR_2 = (zend_long)VAR_3;
 return 1;
}
