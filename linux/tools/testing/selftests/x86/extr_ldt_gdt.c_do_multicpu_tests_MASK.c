
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_desc {int limit; int seg_32bit; int limit_in_pages; int useable; int seg_not_present; int read_exec_only; int contents; int base_addr; int entry_number; } ;
typedef int pthread_t ;
typedef int desc ;
typedef int cpuset ;
typedef int cpu_set_t ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int,char*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (char*,...) ;
 scalar_t__ FUNC_4 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int,struct user_desc*,int) ;
 scalar_t__ FUNC_7 (int ,int,int *) ;
 int FUNC_8 (int ,int ,int ) ;
 int VAR_9 ;
 scalar_t__ FUNC_9 (int ,int) ;
 int FUNC_10 (int ,int*,int ,int ,int *,int *,int ) ;
 int VAR_10 ;

__attribute__((used)) static void FUNC_11(void)
{
 cpu_set_t VAR_11;
 pthread_t VAR_12;
 int VAR_13 = 0, VAR_14 = 5, VAR_15;
 unsigned short VAR_16;

 FUNC_1(&VAR_11);
 FUNC_0(1, &VAR_11);
 if (FUNC_7(0, sizeof(VAR_11), &VAR_11) != 0) {
  FUNC_3("[SKIP]\tCannot set affinity to CPU 1\n");
  return;
 }

 FUNC_1(&VAR_11);
 FUNC_0(0, &VAR_11);
 if (FUNC_7(0, sizeof(VAR_11), &VAR_11) != 0) {
  FUNC_3("[SKIP]\tCannot set affinity to CPU 0\n");
  return;
 }

 FUNC_8(VAR_3, VAR_9, 0);





 FUNC_3("[RUN]\tCross-CPU LDT invalidation\n");

 if (FUNC_4(&VAR_12, 0, VAR_10, 0) != 0)
  FUNC_2(1, "pthread_create");

 asm volatile ("mov %%ss, %0" : "=rm" (VAR_16));

 for (VAR_15 = 0; VAR_15 < 5; VAR_15++) {
  if (FUNC_9(VAR_7, 1) != 0)
   continue;


  while (VAR_6 != 0)
   ;

  struct user_desc VAR_17 = {
   .entry_number = 0,
   .base_addr = 0,
   .limit = 0xfffff,
   .seg_32bit = 1,
   .contents = 0,
   .read_exec_only = 0,
   .limit_in_pages = 1,
   .seg_not_present = 0,
   .useable = 0
  };

  if (FUNC_6(0x11, &VAR_17, sizeof(VAR_17)) != 0) {
   if (VAR_5 != VAR_0)
    FUNC_2(1, "modify_ldt");
   FUNC_3("[SKIP]\tmodify_ldt unavailable\n");
   break;
  }


  VAR_6 = 1;
  FUNC_10(VAR_4, &VAR_6, VAR_1, 0, ((void*)0), ((void*)0), 0);

  asm volatile ("mov %0, %%ss" : : "r" (0x7));


  VAR_6 = 2;

  while (VAR_6 != 0)
   ;






  VAR_13++;
  asm volatile ("mov %0, %%ss" : : "rm" (VAR_16));
 };

 VAR_6 = 100;
 FUNC_10(VAR_4, &VAR_6, VAR_1, 0, ((void*)0), ((void*)0), 0);

 if (FUNC_5(VAR_12, ((void*)0)) != 0)
  FUNC_2(1, "pthread_join");

 if (VAR_13) {
  FUNC_3("[FAIL]\t%d of %d iterations failed\n", VAR_13, VAR_14);
  VAR_8++;
 } else {
  FUNC_3("[OK]\tAll %d iterations succeeded\n", VAR_14);
 }
}
