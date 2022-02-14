
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_policy {int governor; int max; int min; } ;


 int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (unsigned int,unsigned long) ;
 int FUNC_4 (unsigned int,struct cpufreq_policy*) ;

__attribute__((used)) static int FUNC_5(unsigned int VAR_0, struct cpufreq_policy *VAR_1,
  unsigned long VAR_2, unsigned int VAR_3)
{
 switch (VAR_3) {
 case 0:
  return FUNC_3(VAR_0, VAR_2);

 case 1:



  if (VAR_1->min)
   return FUNC_2(VAR_0, VAR_1->min);
  else if (VAR_1->max)
   return FUNC_1(VAR_0, VAR_1->max);
  else if (VAR_1->governor)
   return FUNC_0(VAR_0,
       VAR_1->governor);

 default:

  return FUNC_4(VAR_0, VAR_1);
 }
}
