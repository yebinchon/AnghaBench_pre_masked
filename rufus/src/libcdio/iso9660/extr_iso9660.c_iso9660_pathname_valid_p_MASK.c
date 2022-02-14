
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char const) ;
 char* FUNC_4 (char const*) ;
 int FUNC_5 (char const*) ;
 char* FUNC_6 (char const*,char) ;

bool
FUNC_7 (const char VAR_1[])
{
  const char *VAR_2 = ((void*)0);

  FUNC_0 (VAR_1 != ((void*)0));

  if ((VAR_2 = FUNC_6 (VAR_1, '/')))
    {
      bool VAR_3;
      char *VAR_4 = FUNC_4 (VAR_1);

      *FUNC_6 (VAR_4, '/') = '\0';

      VAR_3 = FUNC_2 (VAR_4);

      FUNC_1 (VAR_4);

      if (!VAR_3)
        return 0;

      VAR_2++;
    }
  else
    VAR_2 = VAR_1;

  if (FUNC_5 (VAR_1) > (VAR_0 - 6))
    return 0;

  {
    int VAR_5 = 0;
    int VAR_6 = 0;

    for (; *VAR_2; VAR_2++)
      if (FUNC_3 (*VAR_2))
        {
          VAR_5++;
          if (VAR_6 == 0 ? VAR_5 > 8 : VAR_5 > 3)
            return 0;
        }
      else if (*VAR_2 == '.')
        {
          VAR_6++;
          if (VAR_6 > 1)
            return 0;
          if (!VAR_5)
            return 0;
          VAR_5 = 0;
        }
      else
        return 0;

    if (VAR_6 != 1)
      return 0;
  }

  return 1;
}
