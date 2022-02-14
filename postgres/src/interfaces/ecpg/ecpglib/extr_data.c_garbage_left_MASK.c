
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum COMPAT_MODE { ____Placeholder_COMPAT_MODE } COMPAT_MODE ;
typedef enum ARRAY_TYPE { ____Placeholder_ARRAY_TYPE } ARRAY_TYPE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int,char) ;
 int FUNC_3 (int,char) ;
 scalar_t__ FUNC_4 (unsigned char) ;

__attribute__((used)) static bool
FUNC_5(enum ARRAY_TYPE VAR_1, char **VAR_2, enum COMPAT_MODE VAR_3)
{




 if (VAR_1 == VAR_0)
 {
  if (FUNC_1(VAR_3) && **VAR_2 == '.')
  {

   do
   {
    (*VAR_2)++;
   } while (FUNC_4((unsigned char) **VAR_2));
  }

  if (**VAR_2 != ' ' && **VAR_2 != '\0')
   return 1;
 }
 else if (FUNC_0(VAR_1) && !FUNC_3(VAR_1, **VAR_2) && !FUNC_2(VAR_1, **VAR_2))
  return 1;

 return 0;
}
