
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
char *
FUNC_0 (const char *VAR_0, const char *VAR_1)
{





  if (*VAR_1 != '\0')
    {


      char VAR_2 = *VAR_1++;

      for (;; VAR_0++)
 {
   if (*VAR_0 == '\0')

     return ((void*)0);
   if (*VAR_0 == VAR_2)

     {
       const char *VAR_3 = VAR_0 + 1;
       const char *VAR_4 = VAR_1;

       for (;; VAR_3++, VAR_4++)
  {
    if (*VAR_4 == '\0')

      return (char *) VAR_0;
    if (*VAR_3 == '\0')

      return ((void*)0);
    if (*VAR_3 != *VAR_4)

      break;
  }
     }
 }
    }
  else
    return (char *) VAR_0;
}
