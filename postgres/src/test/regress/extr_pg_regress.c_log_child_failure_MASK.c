
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int,...) ;

__attribute__((used)) static void
FUNC_7(int VAR_0)
{
 if (FUNC_1(VAR_0))
  FUNC_6(FUNC_4(" (test process exited with exit code %d)"),
      FUNC_0(VAR_0));
 else if (FUNC_2(VAR_0))
 {




  FUNC_6(FUNC_4(" (test process was terminated by signal %d: %s)"),
      FUNC_3(VAR_0), FUNC_5(FUNC_3(VAR_0)));

 }
 else
  FUNC_6(FUNC_4(" (test process exited with unrecognized status %d)"),
      VAR_0);
}
