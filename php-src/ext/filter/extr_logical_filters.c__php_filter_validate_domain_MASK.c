
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_long ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(char * VAR_1, int VAR_2, zend_long VAR_3)
{
 char *VAR_4, *VAR_5, *VAR_6;
 size_t VAR_7;
 int VAR_8 = VAR_3 & VAR_0;
 unsigned char VAR_9 = 1;

 VAR_5 = VAR_1;
 VAR_7 = VAR_2;
 VAR_4 = VAR_1 + VAR_7;
 VAR_6 = VAR_4 - 1;


 if (*VAR_6 == '.') {
  VAR_4 = VAR_6;
  VAR_7--;
 }


 if (VAR_7 > 253) {
  return 0;
 }


 if(*VAR_5 == '.' || (VAR_8 && !FUNC_0((int)*(unsigned char *)VAR_5))) {
  return 0;
 }

 while (VAR_5 < VAR_4) {
  if (*VAR_5 == '.') {

   if (*(VAR_5 + 1) == '.' || (VAR_8 && (!FUNC_0((int)*(unsigned char *)(VAR_5 - 1)) || !FUNC_0((int)*(unsigned char *)(VAR_5 + 1))))) {
    return 0;
   }


   VAR_9 = 1;
  } else {
   if (VAR_9 > 63 || (VAR_8 && *VAR_5 != '-' && !FUNC_0((int)*(unsigned char *)VAR_5))) {
    return 0;
   }

   VAR_9++;
  }

  VAR_5++;
 }

 return 1;
}
