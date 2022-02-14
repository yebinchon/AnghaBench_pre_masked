
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int governor_buf ;
typedef int driver_buf ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int,char*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int,int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int *,char*,int*) ;
 int VAR_1 ;
 int FUNC_6 (char*,char*,...) ;

__attribute__((used)) static void
FUNC_7(void)
{
 char VAR_2[64];
 char VAR_3[64];
 char VAR_4[64];
 FILE *VAR_5;
 int VAR_6;

 FUNC_6(VAR_2, "/sys/devices/system/cpu/cpu%d/cpufreq/scaling_driver",
   VAR_0);
 VAR_5 = FUNC_3(VAR_2, "r");
 if (VAR_5 == ((void*)0)) {
  FUNC_4(VAR_1, "NSFOD %s\n", VAR_2);
  return;
 }
 if (!FUNC_2(VAR_3, sizeof(VAR_3), VAR_5))
  FUNC_0(1, "%s: failed to read file", VAR_2);
 FUNC_1(VAR_5);

 FUNC_6(VAR_2, "/sys/devices/system/cpu/cpu%d/cpufreq/scaling_governor",
   VAR_0);
 VAR_5 = FUNC_3(VAR_2, "r");
 if (VAR_5 == ((void*)0)) {
  FUNC_4(VAR_1, "NSFOD %s\n", VAR_2);
  return;
 }
 if (!FUNC_2(VAR_4, sizeof(VAR_4), VAR_5))
  FUNC_0(1, "%s: failed to read file", VAR_2);
 FUNC_1(VAR_5);

 FUNC_4(VAR_1, "cpu%d: cpufreq driver: %s", VAR_0, VAR_3);
 FUNC_4(VAR_1, "cpu%d: cpufreq governor: %s", VAR_0, VAR_4);

 FUNC_6(VAR_2, "/sys/devices/system/cpu/cpufreq/boost");
 VAR_5 = FUNC_3(VAR_2, "r");
 if (VAR_5 != ((void*)0)) {
  if (FUNC_5(VAR_5, "%d", &VAR_6) != 1)
   FUNC_0(1, "%s: failed to parse number from file", VAR_2);
  FUNC_4(VAR_1, "cpufreq boost: %d\n", VAR_6);
  FUNC_1(VAR_5);
 }

 FUNC_6(VAR_2, "/sys/devices/system/cpu/intel_pstate/no_turbo");
 VAR_5 = FUNC_3(VAR_2, "r");
 if (VAR_5 != ((void*)0)) {
  if (FUNC_5(VAR_5, "%d", &VAR_6) != 1)
   FUNC_0(1, "%s: failed to parse number from file", VAR_2);
  FUNC_4(VAR_1, "cpufreq intel_pstate no_turbo: %d\n", VAR_6);
  FUNC_1(VAR_5);
 }
}
