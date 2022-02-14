
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeb {int time; int millitm; } ;
typedef int old_tsc ;
typedef int old_mperf ;
typedef int old_aperf ;
typedef int new_tsc ;
typedef int new_mperf ;
typedef int new_aperf ;
typedef int cpu_set_t ;


 int FUNC_0 (unsigned int,int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct timeb*) ;
 unsigned int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (unsigned int,long long*,int,int) ;
 int FUNC_6 (char*,long long,...) ;
 scalar_t__ FUNC_7 (int ,int,int *) ;
 int FUNC_8 (char*,char*,unsigned int) ;
 int FUNC_9 (unsigned int) ;
 char* FUNC_10 (scalar_t__) ;
 unsigned int FUNC_11 (char*,char**,int) ;
 int FUNC_12 (char*) ;

int FUNC_13(int VAR_3, char **VAR_4) {
 unsigned int VAR_5, VAR_6, VAR_7;
 char VAR_8[64];
 long long VAR_9, VAR_10, VAR_11;
 long long VAR_12, VAR_13, VAR_14;
 long long VAR_15, VAR_16, VAR_17;
 struct timeb VAR_18, VAR_19;
 long long int VAR_20, VAR_21, VAR_22;
 cpu_set_t VAR_23;

 if (VAR_3 != 2) {
  FUNC_12(VAR_4[0]);
  return 1;
 }

 VAR_2 = 0;
 VAR_6 = FUNC_11(VAR_4[1], (char **) ((void*)0), 10);

 if (VAR_2) {
  FUNC_12(VAR_4[0]);
  return 1;
 }

 FUNC_8(VAR_8, "/dev/cpu/%d/msr", VAR_6);
 VAR_7 = FUNC_3(VAR_8, VAR_1);

 if (VAR_7 == -1) {
  FUNC_6("/dev/cpu/%d/msr: %s\n", VAR_6, FUNC_10(VAR_2));
  return VAR_0;
 }

 FUNC_1(&VAR_23);
 FUNC_0(VAR_6, &VAR_23);

 if (FUNC_7(0, sizeof(cpu_set_t), &VAR_23)) {
  FUNC_4("Failed to set cpu affinity");
  return 1;
 }

 FUNC_2(&VAR_18);
 FUNC_5(VAR_7, &VAR_10, sizeof(VAR_10), 0x10);
 FUNC_5(VAR_7, &VAR_13, sizeof(VAR_16), 0xe7);
 FUNC_5(VAR_7, &VAR_16, sizeof(VAR_13), 0xe8);

 for (VAR_5=0; VAR_5<0x8fffffff; VAR_5++) {
  FUNC_9(VAR_5);
 }

 FUNC_2(&VAR_19);
 FUNC_5(VAR_7, &VAR_11, sizeof(VAR_11), 0x10);
 FUNC_5(VAR_7, &VAR_14, sizeof(VAR_17), 0xe7);
 FUNC_5(VAR_7, &VAR_17, sizeof(VAR_14), 0xe8);

 VAR_9 = VAR_11-VAR_10;
 VAR_12 = VAR_14-VAR_13;
 VAR_15 = VAR_17-VAR_16;

 VAR_20 = VAR_18.time*1000 + VAR_18.millitm;
 VAR_21 = VAR_19.time*1000 + VAR_19.millitm;
 VAR_22 = VAR_21 - VAR_20;

 FUNC_6("runTime: %4.2f\n", 1.0*VAR_22/1000);
 FUNC_6("freq: %7.0f\n", VAR_9 / (1.0*VAR_12 / (1.0 * VAR_15)) / VAR_22);
 return 0;
}
