
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,char*,...) ;
 int FUNC_2 (char*) ;

int
FUNC_3 (int VAR_2, char* VAR_3[])
{
  int VAR_4 = 0;
  int VAR_5;
  int VAR_6;

  for (VAR_5 = 1; VAR_5 < VAR_2; VAR_5++)
  {
    FUNC_0 (VAR_3 [VAR_5]);

    if (VAR_4)
    {
      FUNC_1 ("remove %s\n", VAR_3 [VAR_5]);
    }
    else
    {
      VAR_6 = FUNC_2 (VAR_3 [VAR_5]);
      if (VAR_6 != 0 && VAR_1 != VAR_0)
      {







      }
    }
  }

  return 0;
}
