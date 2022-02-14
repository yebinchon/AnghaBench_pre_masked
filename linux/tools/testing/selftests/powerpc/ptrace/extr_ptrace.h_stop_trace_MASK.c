
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,int *,int *) ;

int FUNC_2(pid_t VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0, VAR_3, ((void*)0), ((void*)0));
 if (VAR_4) {
  FUNC_0("ptrace(PTRACE_DETACH) failed");
  return VAR_1;
 }
 return VAR_2;
}
