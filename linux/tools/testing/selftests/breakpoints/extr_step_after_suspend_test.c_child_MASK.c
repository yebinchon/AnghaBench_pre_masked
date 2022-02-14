
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int set ;
typedef int cpu_set_t ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int FUNC_3 (char*,int ) ;
 scalar_t__ FUNC_4 (int ,int ,int *,int *) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int,int *) ;
 int FUNC_7 (int ) ;

void FUNC_8(int VAR_3)
{
 cpu_set_t VAR_4;

 FUNC_1(&VAR_4);
 FUNC_0(VAR_3, &VAR_4);
 if (FUNC_6(0, sizeof(VAR_4), &VAR_4) != 0) {
  FUNC_3("sched_setaffinity() failed: %s\n",
   FUNC_7(VAR_2));
  FUNC_2(1);
 }

 if (FUNC_4(VAR_0, 0, ((void*)0), ((void*)0)) != 0) {
  FUNC_3("ptrace(PTRACE_TRACEME) failed: %s\n",
   FUNC_7(VAR_2));
  FUNC_2(1);
 }

 if (FUNC_5(VAR_1) != 0) {
  FUNC_3("raise(SIGSTOP) failed: %s\n", FUNC_7(VAR_2));
  FUNC_2(1);
 }

 FUNC_2(0);
}
