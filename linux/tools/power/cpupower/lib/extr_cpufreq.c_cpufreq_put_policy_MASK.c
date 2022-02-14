
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_policy {struct cpufreq_policy* governor; } ;


 int FUNC_0 (struct cpufreq_policy*) ;

void FUNC_1(struct cpufreq_policy *VAR_0)
{
 if ((!VAR_0) || (!VAR_0->governor))
  return;

 FUNC_0(VAR_0->governor);
 VAR_0->governor = ((void*)0);
 FUNC_0(VAR_0);
}
