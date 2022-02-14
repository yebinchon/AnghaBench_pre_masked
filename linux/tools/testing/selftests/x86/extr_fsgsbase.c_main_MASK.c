
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;
typedef int cpuset ;
typedef int cpu_set_t ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (int *,int,int,int,int,int ) ;
 int FUNC_6 (int,int) ;
 scalar_t__ VAR_11 ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_9 (int ,int *) ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 (int ,int,int *) ;
 int FUNC_12 (unsigned long,unsigned short,unsigned long) ;
 int FUNC_13 (int ,int ,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_14 (int ,int) ;
 int FUNC_15 (int ,int*,int ,int ,int *,int *,int ) ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int FUNC_18 (unsigned short,int) ;
 int VAR_15 ;

int FUNC_19()
{
 pthread_t VAR_16;

 VAR_12 = FUNC_5(((void*)0), 4096, VAR_3 | VAR_4,
         VAR_1 | VAR_2, -1, 0);


 FUNC_13(VAR_5, VAR_13, 0);
 if (FUNC_14(VAR_10, 1) == 0) {
  FUNC_10();
  VAR_9 = 1;
  FUNC_7("\tFSGSBASE instructions are enabled\n");
 } else {
  FUNC_7("\tFSGSBASE instructions are disabled\n");
 }
 FUNC_3(VAR_5);

 FUNC_13(VAR_6, VAR_14, 0);

 FUNC_2(0);
 FUNC_2(1);
 FUNC_2(0x200000000);
 FUNC_2(0);
 FUNC_2(0x200000000);
 FUNC_2(1);

 for (int VAR_17 = 0; VAR_17 < 2; VAR_17++) {
  FUNC_6(0, !!VAR_17);
  FUNC_6(1, !!VAR_17);
  FUNC_6(0x200000000, !!VAR_17);
 }



 cpu_set_t VAR_18;
 FUNC_1(&VAR_18);
 FUNC_0(0, &VAR_18);
 if (FUNC_11(0, sizeof(VAR_18), &VAR_18) != 0)
  FUNC_4(1, "sched_setaffinity to CPU 0");

 if (FUNC_8(&VAR_16, 0, VAR_15, 0) != 0)
  FUNC_4(1, "pthread_create");

 static unsigned long VAR_19[] = {
  0, 128, 1, 0x200000000,
 };

 for (int VAR_20 = 0; VAR_20 < 4; VAR_20++) {
  for (int VAR_21 = 0; VAR_21 < 4; VAR_21++) {
   for (unsigned short VAR_22 = 0; VAR_22 < 5; VAR_22++) {
    unsigned short VAR_23 = VAR_22;
    if (VAR_22 == 4)
     asm ("mov %%ss, %0" : "=rm" (VAR_23));
    FUNC_12(
     VAR_19[VAR_20],
     VAR_23,
     VAR_19[VAR_21]);
   }
  }
 }

 FUNC_17();

 if (VAR_9) {
  unsigned short VAR_24;

  asm volatile ("mov %%ss, %0" : "=rm" (VAR_24));

  FUNC_18(0, 0);
  FUNC_18(0, 1);
  FUNC_18(0, 0x200000000);
  FUNC_18(0, 0xffffffffffffffff);
  FUNC_18(VAR_24, 0);
  FUNC_18(VAR_24, 1);
  FUNC_18(VAR_24, 0x200000000);
  FUNC_18(VAR_24, 0xffffffffffffffff);
 }

 VAR_8 = 3;
 FUNC_15(VAR_7, &VAR_8, VAR_0, 0, ((void*)0), ((void*)0), 0);

 if (FUNC_9(VAR_16, ((void*)0)) != 0)
  FUNC_4(1, "pthread_join");

 FUNC_16();

 return VAR_11 == 0 ? 0 : 1;
}
