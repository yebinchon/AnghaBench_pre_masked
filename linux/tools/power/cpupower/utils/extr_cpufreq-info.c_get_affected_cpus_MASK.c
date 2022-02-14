
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_affected_cpus {int cpu; struct cpufreq_affected_cpus* next; } ;


 int VAR_0 ;
 char* FUNC_0 (char*) ;
 struct cpufreq_affected_cpus* FUNC_1 (unsigned int) ;
 int FUNC_2 (struct cpufreq_affected_cpus*) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static int FUNC_4(unsigned int VAR_1)
{
 struct cpufreq_affected_cpus *VAR_2 = FUNC_1(VAR_1);

 FUNC_3(FUNC_0("  CPUs which need to have their frequency coordinated by software: "));
 if (!VAR_2) {
  FUNC_3(FUNC_0("Not Available\n"));
  return -VAR_0;
 }

 while (VAR_2->next) {
  FUNC_3("%d ", VAR_2->cpu);
  VAR_2 = VAR_2->next;
 }
 FUNC_3("%d\n", VAR_2->cpu);
 FUNC_2(VAR_2);
 return 0;
}
