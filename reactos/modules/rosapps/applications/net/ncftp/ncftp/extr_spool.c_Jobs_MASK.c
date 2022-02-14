
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char**) ;
 int FUNC_4 (char*,char**) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int ,char*,char*,...) ;
 int FUNC_8 (char*) ;
 int VAR_1 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (scalar_t__,int *,int ) ;

void
FUNC_11(void)
{



 char *VAR_2[8];
 pid_t VAR_3;
 VAR_3 = FUNC_6();
 if (VAR_3 < 0) {
  FUNC_8("fork");
 } else if (VAR_3 == 0) {
  VAR_2[0] = (char *) "ncftpbatch";
  VAR_2[1] = (char *) "-l";
  VAR_2[2] = ((void*)0);





  (void) FUNC_4(VAR_2[0], VAR_2);
  (void) FUNC_7(VAR_1, "Could not run %s.  Is it in your $PATH?\n", VAR_2[0]);

  FUNC_8(VAR_2[0]);
  FUNC_5(1);
 } else {



  (void) FUNC_9(((void*)0));

 }

}
