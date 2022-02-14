
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_policy {int min; int max; int governor; } ;


 char* FUNC_0 (char*) ;
 unsigned int FUNC_1 () ;
 scalar_t__ FUNC_2 (unsigned int,unsigned long*,unsigned long*) ;
 struct cpufreq_policy* FUNC_3 (unsigned int) ;
 int FUNC_4 (struct cpufreq_policy*) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static void FUNC_6(void)
{
 unsigned int VAR_0, VAR_1;
 struct cpufreq_policy *VAR_2;
 unsigned int VAR_3 = 0;
 unsigned int VAR_4 = 0;
 unsigned long VAR_5, VAR_6;

 FUNC_5(FUNC_0("          minimum CPU frequency  -  maximum CPU frequency  -  governor\n"));

 VAR_1 = FUNC_1();
 for (VAR_0 = 0; VAR_0 < VAR_1; VAR_0++) {
  VAR_2 = FUNC_3(VAR_0);
  if (!VAR_2)
   continue;

  if (FUNC_2(VAR_0, &VAR_5, &VAR_6)) {
   VAR_6 = 0;
  } else {
   VAR_3 = (VAR_2->min * 100) / VAR_6;
   VAR_4 = (VAR_2->max * 100) / VAR_6;
  }
  FUNC_5("CPU%3d    %9lu kHz (%3d %%)  -  %9lu kHz (%3d %%)  -  %s\n",
   VAR_0 , VAR_2->min, VAR_6 ? VAR_3 : 0, VAR_2->max,
   VAR_6 ? VAR_4 : 0, VAR_2->governor);

  FUNC_4(VAR_2);
 }
}
