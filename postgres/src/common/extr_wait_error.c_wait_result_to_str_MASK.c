
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int str ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 char* FUNC_4 (char*) ;
 char* FUNC_5 (int) ;
 char* FUNC_6 (char*) ;
 int FUNC_7 (char*,int,char*,...) ;

char *
FUNC_8(int VAR_0)
{
 char VAR_1[512];

 if (FUNC_1(VAR_0))
 {




  switch (FUNC_0(VAR_0))
  {
   case 126:
    FUNC_7(VAR_1, sizeof(VAR_1), FUNC_4("command not executable"));
    break;

   case 127:
    FUNC_7(VAR_1, sizeof(VAR_1), FUNC_4("command not found"));
    break;

   default:
    FUNC_7(VAR_1, sizeof(VAR_1),
       FUNC_4("child process exited with exit code %d"),
       FUNC_0(VAR_0));
  }
 }
 else if (FUNC_2(VAR_0))
 {





  FUNC_7(VAR_1, sizeof(VAR_1),
     FUNC_4("child process was terminated by signal %d: %s"),
     FUNC_3(VAR_0), FUNC_5(FUNC_3(VAR_0)));

 }
 else
  FUNC_7(VAR_1, sizeof(VAR_1),
     FUNC_4("child process exited with unrecognized status %d"),
     VAR_0);

 return FUNC_6(VAR_1);
}
