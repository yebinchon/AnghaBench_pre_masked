
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u64 ;
struct timechart {size_t numcpus; struct power_event* power_events; scalar_t__ min_freq; scalar_t__ first_time; int last_time; } ;
struct power_event {size_t cpu; scalar_t__ state; scalar_t__ start_time; struct power_event* next; int type; int end_time; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__* VAR_2 ;
 scalar_t__* VAR_3 ;
 scalar_t__* VAR_4 ;
 scalar_t__* VAR_5 ;
 struct power_event* FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct timechart *VAR_6)
{
 u64 VAR_7;
 struct power_event *VAR_8;

 for (VAR_7 = 0; VAR_7 <= VAR_6->numcpus; VAR_7++) {
  VAR_8 = FUNC_0(sizeof(*VAR_8));
  if (!VAR_8)
   return;

  VAR_8->state = VAR_5[VAR_7];
  VAR_8->start_time = VAR_4[VAR_7];
  VAR_8->end_time = VAR_6->last_time;
  VAR_8->cpu = VAR_7;
  VAR_8->type = VAR_1;
  VAR_8->next = VAR_6->power_events;

  if (!VAR_8->start_time)
   VAR_8->start_time = VAR_6->first_time;
  if (!VAR_8->state)
   VAR_8->state = VAR_6->min_freq;
  VAR_6->power_events = VAR_8;
 }
}
