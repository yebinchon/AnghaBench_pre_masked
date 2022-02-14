
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,int) ;

void
FUNC_1 (const char *VAR_0)
{
  const char *VAR_1;

  if (!VAR_0) {
   return;
  }

  while (*VAR_0 != '\0')
    {

      if (*VAR_0 == ',')
 {
   VAR_0++;
   continue;
 }


      VAR_1 = VAR_0 + 1;
      while (*VAR_1 != ',' && *VAR_1 != '\0') {
       VAR_1++;
      }

      FUNC_0 (VAR_0, VAR_1 - VAR_0);



      VAR_0 = VAR_1;
    }
}
