
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_policy {int governor; int max; int min; } ;


 int VAR_0 ;
 char* FUNC_0 (char*) ;
 struct cpufreq_policy* FUNC_1 (unsigned int) ;
 int FUNC_2 (struct cpufreq_policy*) ;
 int FUNC_3 (unsigned int,struct cpufreq_policy*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(unsigned int VAR_1, struct cpufreq_policy *VAR_2)
{
 struct cpufreq_policy *VAR_3 = FUNC_1(VAR_1);
 int VAR_4;

 if (!VAR_3) {
  FUNC_4(FUNC_0("wrong, unknown or unhandled CPU?\n"));
  return -VAR_0;
 }

 if (!VAR_2->min)
  VAR_2->min = VAR_3->min;

 if (!VAR_2->max)
  VAR_2->max = VAR_3->max;

 if (!VAR_2->governor)
  VAR_2->governor = VAR_3->governor;

 VAR_4 = FUNC_3(VAR_1, VAR_2);

 FUNC_2(VAR_3);

 return VAR_4;
}
