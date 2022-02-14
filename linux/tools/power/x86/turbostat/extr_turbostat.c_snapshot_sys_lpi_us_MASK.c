
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *,char*,int *) ;
 int VAR_2 ;

int FUNC_5(void)
{
 FILE *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_2("/sys/devices/system/cpu/cpuidle/low_power_idle_system_residency_us", "r");

 VAR_4 = FUNC_4(VAR_3, "%lld", &VAR_1);
 if (VAR_4 != 1) {
  FUNC_3(VAR_2, "Disabling Low Power Idle System output\n");
  FUNC_0(VAR_0);
  FUNC_1(VAR_3);
  return -1;
 }
 FUNC_1(VAR_3);

 return 0;
}
