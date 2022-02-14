
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned int,char*) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (char*) ;
 int VAR_0 ;

int FUNC_5(char *VAR_1, unsigned int VAR_2)
{

 FUNC_2("set %s as cpufreq governor\n", VAR_1);

 if (FUNC_1(VAR_2) != 1) {
  FUNC_4("cpufreq_cpu_exists");
  FUNC_3(VAR_0, "error: cpu %u does not exist\n", VAR_2);
  return -1;
 }

 if (FUNC_0(VAR_2, VAR_1) != 0) {
  FUNC_4("cpufreq_modify_policy_governor");
  FUNC_3(VAR_0, "error: unable to set %s governor\n", VAR_1);
  return -1;
 }

 return 0;
}
