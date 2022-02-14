
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int entry ;


 int VAR_0 ;
 int FUNC_0 (char*,int,char*,int) ;
 scalar_t__ FUNC_1 (char*,int*) ;
 int FUNC_2 (char*,unsigned long long*) ;

int FUNC_3(unsigned long long *VAR_1)
{
 char VAR_2[VAR_0];
 int VAR_3;

 if (FUNC_1("devices/system/cpu/online", &VAR_3) < 0)
  return -1;

 FUNC_0(VAR_2, sizeof(VAR_2),
   "devices/system/cpu/cpu%d/cpufreq/cpuinfo_max_freq", VAR_3);

 return FUNC_2(VAR_2, VAR_1);
}
