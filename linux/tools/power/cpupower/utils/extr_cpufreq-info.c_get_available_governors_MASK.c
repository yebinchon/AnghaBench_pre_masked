
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_available_governors {char* governor; struct cpufreq_available_governors* next; } ;


 int VAR_0 ;
 char* FUNC_0 (char*) ;
 struct cpufreq_available_governors* FUNC_1 (unsigned int) ;
 int FUNC_2 (struct cpufreq_available_governors*) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static int FUNC_4(unsigned int VAR_1)
{
 struct cpufreq_available_governors *VAR_2 =
  FUNC_1(VAR_1);

 FUNC_3(FUNC_0("  available cpufreq governors: "));
 if (!VAR_2) {
  FUNC_3(FUNC_0("Not Available\n"));
  return -VAR_0;
 }

 while (VAR_2->next) {
  FUNC_3("%s ", VAR_2->governor);
  VAR_2 = VAR_2->next;
 }
 FUNC_3("%s\n", VAR_2->governor);
 FUNC_2(VAR_2);
 return 0;
}
