
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (char*,char*) ;
 unsigned int VAR_0 ;
 int FUNC_3 (char*,char*,int) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 unsigned int FUNC_5 (char*,int *,int) ;

__attribute__((used)) static char *FUNC_6(void)
{
 static char VAR_1[255];
 char VAR_2[256];
 FILE *VAR_3;

 VAR_1[0] = 0;

 VAR_3 = FUNC_2("/proc/cpuinfo", "r");
 if (VAR_3) {
  while (FUNC_1(VAR_2, 255, VAR_3)) {
   if (FUNC_4(VAR_2, "model name")) {
    FUNC_3(VAR_1, &VAR_2[13], 255);
    break;
   }
  }
  FUNC_0(VAR_3);
 }


 VAR_3 = FUNC_2("/sys/devices/system/cpu/cpu0/cpufreq/scaling_available_frequencies", "r");
 if (VAR_3) {
  while (FUNC_1(VAR_2, 255, VAR_3)) {
   unsigned int VAR_4;
   VAR_4 = FUNC_5(VAR_2, ((void*)0), 10);
   if (VAR_4 > VAR_0)
    VAR_0 = VAR_4;
  }
  FUNC_0(VAR_3);
 }
 return VAR_1;
}
