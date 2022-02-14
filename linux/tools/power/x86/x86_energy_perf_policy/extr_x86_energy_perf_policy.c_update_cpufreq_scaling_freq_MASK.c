
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int,char*) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (char*,char*,int,char*) ;

void FUNC_7(int VAR_1, int VAR_2, unsigned int VAR_3)
{
 char VAR_4[64];
 FILE *VAR_5;
 int VAR_6;
 int VAR_7;

 FUNC_6(VAR_4, "/sys/devices/system/cpu/cpu%d/cpufreq/scaling_%s_freq",
  VAR_2, VAR_1 ? "max" : "min");

 VAR_5 = FUNC_1(VAR_4, "w");
 if (!VAR_5) {
  if (VAR_0)
   FUNC_3(VAR_4);
  return;
 }

 VAR_7 = FUNC_5(VAR_3);
 VAR_6 = FUNC_2(VAR_5, "%d", VAR_7);
 if (VAR_6 < 0)
  if (VAR_0)
   FUNC_3("fprintf");
 if (VAR_0)
  FUNC_4("echo %d > %s\n", VAR_7, VAR_4);

 FUNC_0(VAR_5);
}
