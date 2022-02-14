
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct timechart {int first_time; int max_freq; int min_freq; int turbo_frequency; struct power_event* power_events; } ;
struct power_event {int state; int start_time; int end_time; int cpu; struct power_event* next; int type; } ;


 int VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 struct power_event* FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct timechart *VAR_3, int VAR_4, u64 VAR_5, u64 VAR_6)
{
 struct power_event *VAR_7;

 if (VAR_6 > 8000000)
  return;

 VAR_7 = FUNC_0(sizeof(*VAR_7));
 if (!VAR_7)
  return;

 VAR_7->state = VAR_2[VAR_4];
 VAR_7->start_time = VAR_1[VAR_4];
 VAR_7->end_time = VAR_5;
 VAR_7->cpu = VAR_4;
 VAR_7->type = VAR_0;
 VAR_7->next = VAR_3->power_events;

 if (!VAR_7->start_time)
  VAR_7->start_time = VAR_3->first_time;

 VAR_3->power_events = VAR_7;

 VAR_2[VAR_4] = VAR_6;
 VAR_1[VAR_4] = VAR_5;

 if ((u64)VAR_6 > VAR_3->max_freq)
  VAR_3->max_freq = VAR_6;

 if (VAR_6 < VAR_3->min_freq || VAR_3->min_freq == 0)
  VAR_3->min_freq = VAR_6;

 if (VAR_6 == VAR_3->max_freq - 1000)
  VAR_3->turbo_frequency = VAR_3->max_freq;
}
