
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_stats {unsigned long long time_in_state; struct cpufreq_stats* next; int frequency; struct cpufreq_stats* first; } ;
typedef int linebuf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cpufreq_stats*) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (char*,char*,unsigned int) ;
 int FUNC_3 (char*,char*,int *,unsigned long long*) ;
 unsigned int FUNC_4 (char*) ;
 unsigned int FUNC_5 (unsigned int,char*,char*,int) ;

struct cpufreq_stats *FUNC_6(unsigned int VAR_2,
     unsigned long long *VAR_3)
{
 struct cpufreq_stats *VAR_4 = ((void*)0);
 struct cpufreq_stats *VAR_5 = ((void*)0);
 char VAR_6[VAR_1];
 char VAR_7[VAR_0];
 unsigned int VAR_8, VAR_9;
 unsigned int VAR_10;

 VAR_10 = FUNC_5(VAR_2, "stats/time_in_state",
    VAR_7, sizeof(VAR_7));
 if (VAR_10 == 0)
  return ((void*)0);

 *VAR_3 = 0;
 VAR_8 = 0;
 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
  if (VAR_9 == FUNC_4(VAR_7) || VAR_7[VAR_9] == '\n') {
   if (VAR_9 - VAR_8 < 2)
    continue;
   if ((VAR_9 - VAR_8) >= VAR_1)
    goto error_out;
   if (VAR_5) {
    VAR_5->next = FUNC_1(sizeof(*VAR_5));
    if (!VAR_5->next)
     goto error_out;
    VAR_5 = VAR_5->next;
   } else {
    VAR_4 = FUNC_1(sizeof(*VAR_4));
    if (!VAR_4)
     goto error_out;
    VAR_5 = VAR_4;
   }
   VAR_5->first = VAR_4;
   VAR_5->next = ((void*)0);

   FUNC_2(VAR_6, VAR_7 + VAR_8, VAR_9 - VAR_8);
   VAR_6[VAR_9 - VAR_8] = '\0';
   if (FUNC_3(VAR_6, "%lu %llu",
     &VAR_5->frequency,
     &VAR_5->time_in_state) != 2)
    goto error_out;

   *VAR_3 = *VAR_3 + VAR_5->time_in_state;
   VAR_8 = VAR_9 + 1;
  }
 }

 return VAR_4;

 error_out:
 while (VAR_4) {
  VAR_5 = VAR_4->next;
  FUNC_0(VAR_4);
  VAR_4 = VAR_5;
 }
 return ((void*)0);
}
