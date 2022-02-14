
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ VAR_3 ;

void
FUNC_3 (void)
{


  do
    {
      if (VAR_2 != VAR_0)
        FUNC_1 (FUNC_0("error: %s.\n"), VAR_1);
    }
  while (FUNC_2 ());


  if (VAR_3)
    {
      FUNC_1 ("assert: error stack overflow detected!\n");
      VAR_3 = 0;
    }
}
