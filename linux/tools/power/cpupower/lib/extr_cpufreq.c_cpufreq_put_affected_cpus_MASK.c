
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_affected_cpus {struct cpufreq_affected_cpus* next; struct cpufreq_affected_cpus* first; } ;


 int FUNC_0 (struct cpufreq_affected_cpus*) ;

void FUNC_1(struct cpufreq_affected_cpus *VAR_0)
{
 struct cpufreq_affected_cpus *VAR_1, *VAR_2;

 if (!VAR_0)
  return;

 VAR_1 = VAR_0->first;
 while (VAR_1) {
  VAR_2 = VAR_1->next;
  FUNC_0(VAR_1);
  VAR_1 = VAR_2;
 }
}
