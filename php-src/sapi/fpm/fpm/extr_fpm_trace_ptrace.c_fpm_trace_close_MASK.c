
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,void*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,char*,int ) ;

int FUNC_2(pid_t VAR_3)
{
 if (0 > FUNC_0(VAR_0, VAR_3, (void *) 1, 0)) {
  FUNC_1(VAR_1, "failed to ptrace(DETACH) child %d", VAR_3);
  return -1;
 }
 VAR_2 = 0;
 return 0;
}
