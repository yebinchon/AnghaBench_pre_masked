
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char const*,size_t) ;

__attribute__((used)) static char *
FUNC_3 (const char VAR_0[], size_t VAR_1)
{
  static char VAR_2[1025];
  int VAR_3;

  FUNC_0 (VAR_1 < 1024);

  FUNC_2 (VAR_2, VAR_0, VAR_1);
  VAR_2[VAR_1] = '\0';

  for (VAR_3 = FUNC_1 (VAR_2) - 1; VAR_3 >= 0; VAR_3--)
    {
      if (VAR_2[VAR_3] != ' ')
        break;

      VAR_2[VAR_3] = '\0';
    }

  return VAR_2;
}
