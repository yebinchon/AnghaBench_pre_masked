
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_policy {struct cpufreq_policy* governor; void* max; void* min; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cpufreq_policy*) ;
 struct cpufreq_policy* FUNC_1 (int) ;
 struct cpufreq_policy* FUNC_2 (unsigned int,int ) ;
 void* FUNC_3 (unsigned int,int ) ;

struct cpufreq_policy *FUNC_4(unsigned int VAR_3)
{
 struct cpufreq_policy *VAR_4;

 VAR_4 = FUNC_1(sizeof(struct cpufreq_policy));
 if (!VAR_4)
  return ((void*)0);

 VAR_4->governor = FUNC_2(VAR_3, VAR_0);
 if (!VAR_4->governor) {
  FUNC_0(VAR_4);
  return ((void*)0);
 }
 VAR_4->min = FUNC_3(VAR_3, VAR_2);
 VAR_4->max = FUNC_3(VAR_3, VAR_1);
 if ((!VAR_4->min) || (!VAR_4->max)) {
  FUNC_0(VAR_4->governor);
  FUNC_0(VAR_4);
  return ((void*)0);
 }

 return VAR_4;
}
