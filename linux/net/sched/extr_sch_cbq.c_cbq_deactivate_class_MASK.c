
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cbq_sched_data {int activemask; struct cbq_class** active; } ;
struct cbq_class {int cpriority; struct cbq_class* next_alive; int qdisc; } ;


 struct cbq_sched_data* FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct cbq_class *VAR_0)
{
 struct cbq_sched_data *VAR_1 = FUNC_0(VAR_0->qdisc);
 int VAR_2 = VAR_0->cpriority;
 struct cbq_class *VAR_3;
 struct cbq_class *VAR_4 = VAR_1->active[VAR_2];

 do {
  VAR_3 = VAR_4->next_alive;
  if (VAR_3 == VAR_0) {
   VAR_4->next_alive = VAR_3->next_alive;
   VAR_3->next_alive = ((void*)0);

   if (VAR_3 == VAR_1->active[VAR_2]) {
    VAR_1->active[VAR_2] = VAR_4;
    if (VAR_3 == VAR_1->active[VAR_2]) {
     VAR_1->active[VAR_2] = ((void*)0);
     VAR_1->activemask &= ~(1<<VAR_2);
     return;
    }
   }
   return;
  }
 } while ((VAR_4 = VAR_3) != VAR_1->active[VAR_2]);
}
