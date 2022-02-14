
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int input ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,int*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (scalar_t__,char*,int,int*,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (scalar_t__,int) ;
 scalar_t__ FUNC_5 (scalar_t__,char const*,int,int*,int *) ;
 int FUNC_6 (char const*) ;

char *FUNC_7 (const char * VAR_6)
{
  static char VAR_7[256];
  HANDLE VAR_8;
  HANDLE VAR_9;
  DWORD VAR_10;

  VAR_8 = FUNC_2 (VAR_5);
  VAR_9 = FUNC_2 (VAR_4);

  if (VAR_8 == VAR_3 || VAR_9 == VAR_3)
    return ((void*)0);

  if (FUNC_5 (VAR_9, VAR_6, FUNC_6 (VAR_6), &VAR_10, ((void*)0)))
    {
      int VAR_11 = (FUNC_1 (VAR_8) == VAR_2);
      DWORD VAR_12;
      int VAR_13;

      if (VAR_11)
    {
      if (FUNC_0 (VAR_8, &VAR_12))
        FUNC_4 (VAR_8, VAR_0 | VAR_1);
      else
        VAR_11 = 0;
    }


      VAR_10 = 0;
      while (1)
    {
      DWORD VAR_14;
      char VAR_15;

      VAR_13 = FUNC_3 (VAR_8, &VAR_15, 1, &VAR_14, ((void*)0));
      if (VAR_13 == 0)
        break;
      if (VAR_15 == '\r')
        {

          if (VAR_11)
        continue;
          else
        break;
        }
      if (VAR_15 == '\n')
        break;

      if (VAR_10 < sizeof (VAR_7) - 1)
        VAR_7[VAR_10++] = VAR_15;
    }
      VAR_7[VAR_10] = '\0';

      FUNC_5 (VAR_9, "\r\n", 2, &VAR_10, ((void*)0));
      if (VAR_11)
    FUNC_4 (VAR_8, VAR_12);
      if (VAR_13)
    return VAR_7;
    }

  return ((void*)0);
}
