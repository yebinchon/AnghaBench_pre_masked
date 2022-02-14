
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpufreq_frequencies {int frequency; struct cpufreq_frequencies* next; } ;
struct TYPE_2__ {scalar_t__ vendor; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_0 (char*) ;
 struct cpufreq_frequencies* FUNC_1 (char*,unsigned int) ;
 int FUNC_2 (struct cpufreq_frequencies*) ;
 TYPE_1__ VAR_3 ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(unsigned int VAR_4)
{
 struct cpufreq_frequencies *VAR_5;

 if (VAR_3.vendor == VAR_0 ||
     VAR_3.vendor == VAR_1 ||
     VAR_3.vendor == VAR_2)
  return FUNC_3(VAR_4);

 VAR_5 = FUNC_1("boost", VAR_4);
 if (VAR_5) {
  FUNC_5(FUNC_0("  boost frequency steps: "));
  while (VAR_5->next) {
   FUNC_4(VAR_5->frequency);
   FUNC_5(", ");
   VAR_5 = VAR_5->next;
  }
  FUNC_4(VAR_5->frequency);
  FUNC_5("\n");
  FUNC_2(VAR_5);
 }

 return 0;
}
