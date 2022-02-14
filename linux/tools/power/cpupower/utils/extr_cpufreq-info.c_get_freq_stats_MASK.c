
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_stats {double time_in_state; struct cpufreq_stats* next; int frequency; } ;


 struct cpufreq_stats* FUNC_0 (unsigned int,unsigned long long*) ;
 unsigned long FUNC_1 (unsigned int) ;
 int FUNC_2 (struct cpufreq_stats*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static int FUNC_5(unsigned int VAR_0, unsigned int VAR_1)
{
 unsigned long VAR_2 = FUNC_1(VAR_0);
 unsigned long long VAR_3;
 struct cpufreq_stats *VAR_4 = FUNC_0(VAR_0, &VAR_3);
 while (VAR_4) {
  if (VAR_1) {
   FUNC_3(VAR_4->frequency);
   FUNC_4(":%.2f%%",
    (100.0 * VAR_4->time_in_state) / VAR_3);
  } else
   FUNC_4("%lu:%llu",
    VAR_4->frequency, VAR_4->time_in_state);
  VAR_4 = VAR_4->next;
  if (VAR_4)
   FUNC_4(", ");
 }
 FUNC_2(VAR_4);
 if (VAR_2)
  FUNC_4("  (%lu)\n", VAR_2);
 return 0;
}
