
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_available_governors {struct cpufreq_available_governors* governor; struct cpufreq_available_governors* next; struct cpufreq_available_governors* first; } ;


 int FUNC_0 (struct cpufreq_available_governors*) ;

void FUNC_1(struct cpufreq_available_governors *VAR_0)
{
 struct cpufreq_available_governors *VAR_1, *VAR_2;

 if (!VAR_0)
  return;

 VAR_1 = VAR_0->first;
 while (VAR_1) {
  VAR_2 = VAR_1->next;
  if (VAR_1->governor)
   FUNC_0(VAR_1->governor);
  FUNC_0(VAR_1);
  VAR_1 = VAR_2;
 }
}
