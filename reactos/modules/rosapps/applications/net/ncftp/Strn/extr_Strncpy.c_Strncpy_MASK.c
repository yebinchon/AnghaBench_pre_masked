
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
char *
FUNC_0(char *const VAR_0, const char *const VAR_1, const size_t VAR_2)
{
 register char *VAR_3;
 register const char *VAR_4;
 register size_t VAR_5;

 VAR_3 = VAR_0;
 *VAR_3 = 0;
 if (VAR_2 != 0) {
  VAR_4 = VAR_1;






  for (VAR_5=1; VAR_5<VAR_2; VAR_5++) {
   if ((*VAR_3++ = *VAR_4++) == 0) {





    return VAR_0;
   }
  }



  *VAR_3 = 0;
 }
 return (VAR_0);
}
