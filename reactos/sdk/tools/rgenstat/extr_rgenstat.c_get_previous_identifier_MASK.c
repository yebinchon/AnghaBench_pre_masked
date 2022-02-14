
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char) ;
 scalar_t__ FUNC_2 (char) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_4(unsigned int VAR_1, char *VAR_2)
{
  unsigned int VAR_3 = VAR_1;
  int VAR_4;

  VAR_2[0] = 0;

  while ((VAR_3 > 0) && (FUNC_2(VAR_0[VAR_3])
    || FUNC_1(VAR_0[VAR_3])))
    {
      VAR_3--;
    }


  if ((VAR_3 > 0) && (VAR_0[VAR_3] == '/'))
    {
      if ((VAR_3 > 0) && (VAR_0[VAR_3 - 1] == '*'))
        {
          VAR_3--;
          while ((VAR_3 > 0) && !((VAR_0[VAR_3] == '*')
            && (VAR_0[VAR_3 - 1] == '/')))
            {
              VAR_3--;
            }
          VAR_3 -= 2;
        }
    }


  while ((VAR_3 > 0) && (FUNC_2(VAR_0[VAR_3])))
    {
      VAR_3--;
    }

  VAR_1 = VAR_3;
  while ((VAR_3 > 0))
    {
      if (FUNC_0(VAR_0[VAR_3]))
        {
          VAR_4 = VAR_1 - VAR_3;
          FUNC_3(VAR_2, &VAR_0[VAR_3 + 1], VAR_4);
          VAR_2[VAR_4] = 0;
          return 1;
        }
      VAR_3--;
    }

  return 0;
}
