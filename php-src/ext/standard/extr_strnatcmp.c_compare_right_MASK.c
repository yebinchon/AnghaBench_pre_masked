
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(char const **VAR_0, char const *VAR_1, char const **VAR_2, char const *VAR_3)
{
 int VAR_4 = 0;





 for(;; (*VAR_0)++, (*VAR_2)++) {
  if ((*VAR_0 == VAR_1 || !FUNC_0((int)(unsigned char)**VAR_0)) &&
   (*VAR_2 == VAR_3 || !FUNC_0((int)(unsigned char)**VAR_2)))
   return VAR_4;
  else if (*VAR_0 == VAR_1 || !FUNC_0((int)(unsigned char)**VAR_0))
   return -1;
  else if (*VAR_2 == VAR_3 || !FUNC_0((int)(unsigned char)**VAR_2))
   return +1;
  else if (**VAR_0 < **VAR_2) {
   if (!VAR_4)
    VAR_4 = -1;
  } else if (**VAR_0 > **VAR_2) {
   if (!VAR_4)
    VAR_4 = +1;
  }
     }

     return 0;
}
