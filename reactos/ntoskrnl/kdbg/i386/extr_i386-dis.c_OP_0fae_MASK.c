
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4 (int VAR_4, int VAR_5)
{
  if (VAR_0 == 3)
    {
      if (VAR_2 == 7)
 FUNC_2 (VAR_1 + FUNC_3 (VAR_1) - sizeof ("clflush") + 1, "sfence");

      if (VAR_2 < 5 || VAR_3 != 0)
 {
   FUNC_0 ();
   return;
 }
    }
  else if (VAR_2 != 7)
    {
      FUNC_0 ();
      return;
    }

  FUNC_1 (VAR_4, VAR_5);
}
