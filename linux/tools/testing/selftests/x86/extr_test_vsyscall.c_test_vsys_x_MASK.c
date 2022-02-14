
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_3(void)
{

 if (VAR_2) {

  return 0;
 }

 FUNC_0("[RUN]\tMake sure that vsyscalls really page fault\n");

 bool VAR_3;
 if (FUNC_1(VAR_0, 1) == 0) {
  FUNC_2(((void*)0), ((void*)0));
  VAR_3 = 1;
 } else {
  VAR_3 = 0;
 }

 if (VAR_3) {
  FUNC_0("[FAIL]\tExecuting the vsyscall did not page fault\n");
  return 1;
 } else if (VAR_1 & (1 << 4)) {
  FUNC_0("[OK]\tExecuting the vsyscall page failed: #PF(0x%lx)\n",
         VAR_1);
 } else {
  FUNC_0("[FAIL]\tExecution failed with the wrong error: #PF(0x%lx)\n",
         VAR_1);
  return 1;
 }


 return 0;
}
