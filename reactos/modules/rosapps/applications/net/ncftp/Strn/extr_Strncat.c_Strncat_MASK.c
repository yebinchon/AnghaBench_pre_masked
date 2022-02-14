
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char* const) ;

char *
FUNC_1(char *const VAR_0, const char *const VAR_1, const size_t VAR_2)
{
 register size_t VAR_3;
 register char *VAR_4;
 register const char *VAR_5;

 if (VAR_2 != 0 && ((VAR_3 = FUNC_0(VAR_0)) < (VAR_2 - 1))) {
  VAR_4 = VAR_0 + VAR_3;
  VAR_5 = VAR_1;






  for (++VAR_3; VAR_3<VAR_2; VAR_3++) {
   if ((*VAR_4++ = *VAR_5++) == 0) {





    return VAR_0;
   }
  }



  *VAR_4 = 0;
 }
 return (VAR_0);
}
