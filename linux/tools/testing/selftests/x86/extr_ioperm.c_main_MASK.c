
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;
typedef int cpuset ;
typedef int cpu_set_t ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,char*) ;
 int VAR_0 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int,int,int) ;
 int VAR_1 ;
 int FUNC_9 (char*,...) ;
 scalar_t__ FUNC_10 (int ,int,int *) ;
 scalar_t__ FUNC_11 (int,int,int) ;
 int FUNC_12 (int,int*,int ) ;

int FUNC_13(void)
{
 cpu_set_t VAR_2;
 FUNC_1(&VAR_2);
 FUNC_0(0, &VAR_2);
 if (FUNC_10(0, sizeof(VAR_2), &VAR_2) != 0)
  FUNC_4(1, "sched_setaffinity to CPU 0");

 FUNC_5(0x80);
 FUNC_5(0xed);





 FUNC_9("[RUN]\tenable 0x80\n");
 if (FUNC_8(0x80, 1, 1) != 0) {
  FUNC_9("[OK]\tioperm(0x80, 1, 1) failed (%d) -- try running as root\n",
         VAR_0);
  return 0;
 }
 FUNC_6(0x80);
 FUNC_5(0xed);

 FUNC_9("[RUN]\tdisable 0x80\n");
 if (FUNC_8(0x80, 1, 0) != 0) {
  FUNC_9("[FAIL]\tioperm(0x80, 1, 0) failed (%d)", VAR_0);
  return 1;
 }
 FUNC_5(0x80);
 FUNC_5(0xed);


 if (FUNC_8(0x80, 1, 1) != 0) {
  FUNC_9("[FAIL]\tioperm(0x80, 1, 0) failed (%d)", VAR_0);
  return 1;
 }

 pid_t VAR_3 = FUNC_7();
 if (VAR_3 == -1)
  FUNC_4(1, "fork");

 if (VAR_3 == 0) {
  FUNC_9("[RUN]\tchild: check that we inherited permissions\n");
  FUNC_6(0x80);
  FUNC_5(0xed);
  return 0;
 } else {
  int VAR_4;
  if (FUNC_12(VAR_3, &VAR_4, 0) != VAR_3 ||
      !FUNC_3(VAR_4)) {
   FUNC_9("[FAIL]\tChild died\n");
   VAR_1++;
  } else if (FUNC_2(VAR_4) != 0) {
   FUNC_9("[FAIL]\tChild failed\n");
   VAR_1++;
  } else {
   FUNC_9("[OK]\tChild succeeded\n");
  }
 }



 FUNC_9("\tDrop privileges\n");
 if (FUNC_11(1, 1, 1) != 0) {
  FUNC_9("[WARN]\tDropping privileges failed\n");
  return 0;
 }

 FUNC_9("[RUN]\tdisable 0x80\n");
 if (FUNC_8(0x80, 1, 0) != 0) {
  FUNC_9("[FAIL]\tioperm(0x80, 1, 0) failed (%d)", VAR_0);
  return 1;
 }
 FUNC_9("[OK]\tit worked\n");

 FUNC_9("[RUN]\tenable 0x80 again\n");
 if (FUNC_8(0x80, 1, 1) == 0) {
  FUNC_9("[FAIL]\tit succeeded but should have failed.\n");
  return 1;
 }
 FUNC_9("[OK]\tit failed\n");
 return 0;
}
