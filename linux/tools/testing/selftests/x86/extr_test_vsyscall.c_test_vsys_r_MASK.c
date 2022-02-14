
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_2(void)
{

 FUNC_0("[RUN]\tChecking read access to the vsyscall page\n");
 bool VAR_3;
 if (FUNC_1(VAR_0, 1) == 0) {
  *(volatile int *)0xffffffffff600000;
  VAR_3 = 1;
 } else {
  VAR_3 = 0;
 }

 if (VAR_3 && !VAR_2) {
  FUNC_0("[FAIL]\tWe have read access, but we shouldn't\n");
  return 1;
 } else if (!VAR_3 && VAR_2) {
  FUNC_0("[FAIL]\tWe don't have read access, but we should\n");
  return 1;
 } else if (VAR_3) {
  FUNC_0("[OK]\tWe have read access\n");
 } else {
  FUNC_0("[OK]\tWe do not have read access: #PF(0x%lx)\n",
         VAR_1);
 }


 return 0;
}
