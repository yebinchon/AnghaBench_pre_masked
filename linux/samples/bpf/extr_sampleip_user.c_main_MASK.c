
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int filename ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 char* VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int,char**,char*) ;
 int VAR_7 ;
 scalar_t__ FUNC_4 (char*) ;
 scalar_t__ FUNC_5 () ;
 int* FUNC_6 (int) ;
 int * VAR_8 ;
 int VAR_9 ;
 char* VAR_10 ;
 int VAR_11 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,int,int) ;
 int FUNC_9 (int*) ;
 scalar_t__ FUNC_10 (int*,int) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int) ;
 int FUNC_13 (char*,int,char*,char*) ;
 int VAR_12 ;
 scalar_t__ FUNC_14 (char*,char*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 () ;

int FUNC_17(int VAR_13, char **VAR_14)
{
 char VAR_15[256];
 int *VAR_16, VAR_17, VAR_18 = VAR_0, VAR_19 = VAR_1;


 while ((VAR_17 = FUNC_3(VAR_13, VAR_14, "F:h")) != -1) {
  switch (VAR_17) {
  case 'F':
   VAR_18 = FUNC_0(VAR_10);
   break;
  case 'h':
  default:
   FUNC_16();
   return 0;
  }
 }
 if (VAR_13 - VAR_11 == 1)
  VAR_19 = FUNC_0(VAR_14[VAR_11]);
 if (VAR_18 == 0 || VAR_19 == 0) {
  FUNC_16();
  return 1;
 }


 if (FUNC_5()) {
  FUNC_1(VAR_12, "ERROR: loading /proc/kallsyms\n");
  return 2;
 }


 VAR_9 = FUNC_15(VAR_4);
 VAR_16 = FUNC_6(VAR_9 * sizeof(int));
 if (VAR_16 == ((void*)0)) {
  FUNC_1(VAR_12, "ERROR: malloc of pmu_fd\n");
  return 1;
 }


 FUNC_13(VAR_15, sizeof(VAR_15), "%s_kern.o", VAR_14[0]);
 if (FUNC_4(VAR_15)) {
  FUNC_1(VAR_12, "ERROR: loading BPF program (errno %d):\n",
   VAR_6);
  if (FUNC_14(VAR_5, "") == 0)
   FUNC_1(VAR_12, "Try: ulimit -l unlimited\n");
  else
   FUNC_1(VAR_12, "%s", VAR_5);
  return 1;
 }
 FUNC_11(VAR_2, VAR_7);
 FUNC_11(VAR_3, VAR_7);


 FUNC_8("Sampling at %d Hertz for %d seconds. Ctrl-C also ends.\n",
        VAR_18, VAR_19);
 if (FUNC_10(VAR_16, VAR_18) != 0)
  return 1;
 FUNC_12(VAR_19);
 FUNC_9(VAR_16);
 FUNC_2(VAR_16);


 FUNC_7(VAR_8[0]);

 return 0;
}
