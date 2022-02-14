
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static bool
FUNC_0(const char *VAR_0, const char *VAR_1)
{
 while (*VAR_0 && *VAR_1)
 {
  if (*VAR_1 == '.' && VAR_1[1] == '*')
  {
   VAR_1 += 2;

   if (*VAR_1 == '\0')
    return 1;





   while (*VAR_0)
   {




    if (*VAR_0 == *VAR_1 || *VAR_1 == '.')
    {
     if (FUNC_0(VAR_0, VAR_1))
      return 1;
    }

    VAR_0++;
   }




   return 0;
  }
  else if (*VAR_1 != '.' && *VAR_0 != *VAR_1)
  {




   return 0;
  }

  VAR_0++;
  VAR_1++;
 }

 if (*VAR_1 == '\0')
  return 1;


 while (*VAR_1 == '.' && VAR_1[1] == '*')
  VAR_1 += 2;
 if (*VAR_1 == '\0')
  return 1;

 return 0;
}
