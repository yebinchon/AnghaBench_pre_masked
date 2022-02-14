
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;

int
FUNC_1 (const char *VAR_0, const char *VAR_1)
{
  const char *VAR_2 = VAR_1;

  while (FUNC_0 (*VAR_0))
    VAR_0++;

  while (*VAR_0)
    {

      while(*VAR_0 && !FUNC_0 (*VAR_0)
            && *VAR_0 == *VAR_2)
        {
          VAR_0++;
          VAR_2++;
        }




      if ( (!*VAR_0 || FUNC_0 (*VAR_0))
         && (!*VAR_2 || FUNC_0 (*VAR_2)))
        return 1;
      else
        {
          VAR_2 = VAR_1;
          while (*VAR_0 && !FUNC_0 (*VAR_0))
            VAR_0++;
          while (FUNC_0 (*VAR_0))
            VAR_0++;
        }
    }

  return 0;
}
