
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;
typedef int cpuset ;
typedef int cpu_set_t ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,char*) ;
 int VAR_1 ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_7 (char*,...) ;
 scalar_t__ FUNC_8 (int ,int,int *) ;
 int FUNC_9 (int ,int ,int ) ;
 scalar_t__ FUNC_10 (int,int,int) ;
 int VAR_4 ;
 scalar_t__ FUNC_11 (int ,int) ;
 int FUNC_12 (int,int*,int ) ;

int FUNC_13(void)
{
 cpu_set_t VAR_5;
 FUNC_1(&VAR_5);
 FUNC_0(0, &VAR_5);
 if (FUNC_8(0, sizeof(VAR_5), &VAR_5) != 0)
  FUNC_4(1, "sched_setaffinity to CPU 0");


 if (FUNC_6(3) != 0) {
  FUNC_7("[OK]\tiopl(3) failed (%d) -- try running as root\n",
         VAR_1);
  return 0;
 }


 if (FUNC_6(0) != 0)
  FUNC_4(1, "iopl(0)");

 pid_t VAR_6 = FUNC_5();
 if (VAR_6 == -1)
  FUNC_4(1, "fork");

 if (VAR_6 == 0) {
  FUNC_7("\tchild: set IOPL to 3\n");
  if (FUNC_6(3) != 0)
   FUNC_4(1, "iopl");

  FUNC_7("[RUN]\tchild: write to 0x80\n");
  asm volatile ("outb %%al, $0x80" : : "a" (0));

  return 0;
 } else {
  int VAR_7;
  if (FUNC_12(VAR_6, &VAR_7, 0) != VAR_6 ||
      !FUNC_3(VAR_7)) {
   FUNC_7("[FAIL]\tChild died\n");
   VAR_3++;
  } else if (FUNC_2(VAR_7) != 0) {
   FUNC_7("[FAIL]\tChild failed\n");
   VAR_3++;
  } else {
   FUNC_7("[OK]\tChild succeeded\n");
  }
 }

 FUNC_7("[RUN]\tparent: write to 0x80 (should fail)\n");

 FUNC_9(VAR_0, VAR_4, 0);
 if (FUNC_11(VAR_2, 1) != 0) {
  FUNC_7("[OK]\twrite was denied\n");
 } else {
  asm volatile ("outb %%al, $0x80" : : "a" (0));
  FUNC_7("[FAIL]\twrite was allowed\n");
  VAR_3++;
 }


 FUNC_7("\tiopl(3)\n");
 if (FUNC_6(3) != 0)
  FUNC_4(1, "iopl(3)");

 FUNC_7("\tDrop privileges\n");
 if (FUNC_10(1, 1, 1) != 0) {
  FUNC_7("[WARN]\tDropping privileges failed\n");
  goto done;
 }

 FUNC_7("[RUN]\tiopl(3) unprivileged but with IOPL==3\n");
 if (FUNC_6(3) != 0) {
  FUNC_7("[FAIL]\tiopl(3) should work if iopl is already 3 even if unprivileged\n");
  VAR_3++;
 }

 FUNC_7("[RUN]\tiopl(0) unprivileged\n");
 if (FUNC_6(0) != 0) {
  FUNC_7("[FAIL]\tiopl(0) should work if iopl is already 3 even if unprivileged\n");
  VAR_3++;
 }

 FUNC_7("[RUN]\tiopl(3) unprivileged\n");
 if (FUNC_6(3) == 0) {
  FUNC_7("[FAIL]\tiopl(3) should fail if when unprivileged if iopl==0\n");
  VAR_3++;
 } else {
  FUNC_7("[OK]\tFailed as expected\n");
 }

done:
 return VAR_3 ? 1 : 0;
}
