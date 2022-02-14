
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timechart {scalar_t__ min_freq; struct power_event* power_events; } ;
struct power_event {scalar_t__ type; struct power_event* next; scalar_t__ state; int end_time; int start_time; int cpu; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,int ,scalar_t__) ;
 int FUNC_1 (int ,int ,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct timechart *VAR_2)
{
 struct power_event *VAR_3;
 VAR_3 = VAR_2->power_events;




 while (VAR_3) {
  if (VAR_3->type == VAR_0)
   FUNC_0(VAR_3->cpu, VAR_3->start_time, VAR_3->end_time, VAR_3->state);
  VAR_3 = VAR_3->next;
 }

 VAR_3 = VAR_2->power_events;
 while (VAR_3) {
  if (VAR_3->type == VAR_1) {
   if (!VAR_3->state)
    VAR_3->state = VAR_2->min_freq;
   FUNC_1(VAR_3->cpu, VAR_3->start_time, VAR_3->end_time, VAR_3->state);
  }
  VAR_3 = VAR_3->next;
 }
}
