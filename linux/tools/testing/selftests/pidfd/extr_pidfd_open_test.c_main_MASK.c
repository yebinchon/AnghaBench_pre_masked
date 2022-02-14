
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (char*,int,...) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int,int) ;

int FUNC_10(int VAR_1, char **VAR_2)
{
 int VAR_3 = -1, VAR_4 = 1;
 pid_t VAR_5;

 FUNC_6(3);

 VAR_3 = FUNC_9(-1, 0);
 if (VAR_3 >= 0) {
  FUNC_5(
   "%s - succeeded to open pidfd for invalid pid -1\n",
   FUNC_8(VAR_0));
  goto on_error;
 }
 FUNC_7("do not allow invalid pid test: passed\n");

 VAR_3 = FUNC_9(FUNC_2(), 1);
 if (VAR_3 >= 0) {
  FUNC_5(
   "%s - succeeded to open pidfd with invalid flag value specified\n",
   FUNC_8(VAR_0));
  goto on_error;
 }
 FUNC_7("do not allow invalid flag test: passed\n");

 VAR_3 = FUNC_9(FUNC_2(), 0);
 if (VAR_3 < 0) {
  FUNC_5("%s - failed to open pidfd\n", FUNC_8(VAR_0));
  goto on_error;
 }
 FUNC_7("open a new pidfd test: passed\n");

 VAR_5 = FUNC_1(VAR_3, "Pid:", sizeof("Pid:") - 1);
 FUNC_5("pidfd %d refers to process with pid %d\n", VAR_3, VAR_5);

 VAR_4 = 0;

on_error:
 if (VAR_3 >= 0)
  FUNC_0(VAR_3);

 return !VAR_4 ? FUNC_4() : FUNC_3();
}
