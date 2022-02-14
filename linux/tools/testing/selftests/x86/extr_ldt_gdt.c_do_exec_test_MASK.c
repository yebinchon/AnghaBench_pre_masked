
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_desc {int limit; int seg_32bit; int contents; int useable; int seg_not_present; int limit_in_pages; int read_exec_only; int base_addr; int entry_number; } ;
typedef scalar_t__ pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,char*,int *) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (struct user_desc*,int) ;
 int VAR_5 ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (scalar_t__,int*,int ) ;

__attribute__((used)) static void FUNC_8(void)
{
 FUNC_6("[RUN]\tTest exec\n");

 struct user_desc VAR_6 = {
  .entry_number = 0,
  .base_addr = 0,
  .limit = 42,
  .seg_32bit = 1,
  .contents = 2,
  .read_exec_only = 0,
  .limit_in_pages = 0,
  .seg_not_present = 0,
  .useable = 0
 };
 FUNC_5(&VAR_6, VAR_1 | VAR_4 | VAR_3 | VAR_2 | VAR_0);

 pid_t VAR_7 = FUNC_4();
 if (VAR_7 == 0) {
  FUNC_2("/proc/self/exe", "ldt_gdt_test_exec", ((void*)0));
  FUNC_6("[FAIL]\tCould not exec self\n");
  FUNC_3(1);
 } else {
  int VAR_8;
  if (FUNC_7(VAR_7, &VAR_8, 0) != VAR_7 ||
      !FUNC_1(VAR_8)) {
   FUNC_6("[FAIL]\tChild died\n");
   VAR_5++;
  } else if (FUNC_0(VAR_8) != 0) {
   FUNC_6("[FAIL]\tChild failed\n");
   VAR_5++;
  } else {
   FUNC_6("[OK]\tChild succeeded\n");
  }
 }
}
