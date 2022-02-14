
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*) ;
 char FUNC_1 (unsigned char) ;

char *
FUNC_2 (const char VAR_0[])
{
  char *VAR_1 = ((void*)0);

  if (VAR_0)
    {
      char *VAR_2;

      VAR_2 = VAR_1 = FUNC_0 (VAR_0);

      while (*VAR_2)
        {
          *VAR_2 = FUNC_1 ((unsigned char) *VAR_2);
          VAR_2++;
        }
    }

  return VAR_1;
}
