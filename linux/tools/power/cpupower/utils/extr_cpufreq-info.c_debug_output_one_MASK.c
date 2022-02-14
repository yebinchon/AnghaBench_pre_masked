
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_frequencies {int frequency; struct cpufreq_frequencies* next; } ;


 char* FUNC_0 (char*) ;
 struct cpufreq_frequencies* FUNC_1 (char*,unsigned int) ;
 int FUNC_2 (struct cpufreq_frequencies*) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (unsigned int) ;
 scalar_t__ FUNC_7 (unsigned int,int) ;
 int FUNC_8 (unsigned int,int) ;
 int FUNC_9 (unsigned int,int) ;
 int FUNC_10 (unsigned int,int) ;
 int FUNC_11 (unsigned int) ;
 int FUNC_12 (unsigned int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (char*) ;

__attribute__((used)) static void FUNC_15(unsigned int VAR_0)
{
 struct cpufreq_frequencies *VAR_1;

 FUNC_6(VAR_0);
 FUNC_12(VAR_0);
 FUNC_3(VAR_0);
 FUNC_10(VAR_0, 1);
 FUNC_9(VAR_0, 1);

 VAR_1 = FUNC_1("available", VAR_0);
 if (VAR_1) {
  FUNC_14(FUNC_0("  available frequency steps:  "));
  while (VAR_1->next) {
   FUNC_13(VAR_1->frequency);
   FUNC_14(", ");
   VAR_1 = VAR_1->next;
  }
  FUNC_13(VAR_1->frequency);
  FUNC_14("\n");
  FUNC_2(VAR_1);
 }

 FUNC_4(VAR_0);
 FUNC_11(VAR_0);
 if (FUNC_7(VAR_0, 1) < 0)
  FUNC_8(VAR_0, 1);
 FUNC_5(VAR_0);
}
