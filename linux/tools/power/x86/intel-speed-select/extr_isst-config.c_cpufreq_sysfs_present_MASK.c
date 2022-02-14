
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DIR ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*) ;

int FUNC_2(void)
{
 DIR *VAR_0;

 VAR_0 = FUNC_1("/sys/devices/system/cpu/cpu0/cpufreq");
 if (VAR_0) {
  FUNC_0(VAR_0);
  return 1;
 }

 return 0;
}
