
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;
typedef scalar_t__ kern_return_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ,char*,int ,scalar_t__,char*) ;

int FUNC_4(pid_t VAR_4)
{
 kern_return_t VAR_5;

 VAR_5 = FUNC_2(FUNC_1(), VAR_4, &VAR_3);
 if (VAR_5 != VAR_1) {
  char *VAR_6 = "";

  if (VAR_5 == VAR_0) {
   VAR_6 = " It seems that master process does not have enough privileges to trace processes.";
  }
  FUNC_3(VAR_2, "task_for_pid() failed: %s (%d)%s", FUNC_0(VAR_5), VAR_5, VAR_6);
  return -1;
 }
 return 0;
}
