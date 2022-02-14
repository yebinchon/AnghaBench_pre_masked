
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cbq_sched_data {struct cbq_class** active; } ;
struct cbq_class {scalar_t__ penalized; struct cbq_class* next_alive; scalar_t__ delayed; int priority; int cpriority; } ;
typedef scalar_t__ psched_time_t ;
typedef scalar_t__ psched_tdiff_t ;


 int FUNC_0 (struct cbq_class*) ;

__attribute__((used)) static psched_tdiff_t FUNC_1(struct cbq_sched_data *VAR_0, int VAR_1,
           psched_time_t VAR_2)
{
 struct cbq_class *VAR_3;
 struct cbq_class *VAR_4 = VAR_0->active[VAR_1];
 psched_time_t VAR_5 = VAR_2;

 if (VAR_4 == ((void*)0))
  return 0;

 do {
  VAR_3 = VAR_4->next_alive;
  if (VAR_2 - VAR_3->penalized > 0) {
   VAR_4->next_alive = VAR_3->next_alive;
   VAR_3->next_alive = ((void*)0);
   VAR_3->cpriority = VAR_3->priority;
   VAR_3->delayed = 0;
   FUNC_0(VAR_3);

   if (VAR_3 == VAR_0->active[VAR_1]) {
    VAR_0->active[VAR_1] = VAR_4;
    if (VAR_3 == VAR_0->active[VAR_1]) {
     VAR_0->active[VAR_1] = ((void*)0);
     return 0;
    }
   }

   VAR_3 = VAR_4->next_alive;
  } else if (VAR_5 - VAR_3->penalized > 0)
   VAR_5 = VAR_3->penalized;
 } while ((VAR_4 = VAR_3) != VAR_0->active[VAR_1]);

 return VAR_5 - VAR_2;
}
