
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_policy {char* governor; int max; int min; } ;


 int VAR_0 ;
 char* FUNC_0 (char*) ;
 struct cpufreq_policy* FUNC_1 (unsigned int) ;
 int FUNC_2 (struct cpufreq_policy*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static int FUNC_5(unsigned int VAR_1)
{
 struct cpufreq_policy *VAR_2 = FUNC_1(VAR_1);
 if (!VAR_2) {
  FUNC_4(FUNC_0("  Unable to determine current policy\n"));
  return -VAR_0;
 }
 FUNC_4(FUNC_0("  current policy: frequency should be within "));
 FUNC_3(VAR_2->min);
 FUNC_4(FUNC_0(" and "));
 FUNC_3(VAR_2->max);

 FUNC_4(".\n                  ");
 FUNC_4(FUNC_0("The governor \"%s\" may decide which speed to use\n"
        "                  within this range.\n"),
        VAR_2->governor);
 FUNC_2(VAR_2);
 return 0;
}
