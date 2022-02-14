
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*,int ) ;

int FUNC_2(pid_t VAR_2)
{
 if (0 > FUNC_0(VAR_2, VAR_0)) {
  FUNC_1(VAR_1, "failed to send SIGSTOP to %d", VAR_2);
  return -1;
 }
 return 0;
}
