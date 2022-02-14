
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qdisc_walker {int stop; scalar_t__ count; scalar_t__ skip; scalar_t__ (* fn ) (struct Qdisc*,unsigned int,struct qdisc_walker*) ;} ;
struct cake_tin_data {TYPE_1__* flows; } ;
struct cake_sched_data {unsigned int tin_cnt; size_t* tin_order; struct cake_tin_data* tins; } ;
struct Qdisc {int dummy; } ;
struct TYPE_2__ {int flowchain; } ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 struct cake_sched_data* FUNC_1 (struct Qdisc*) ;
 scalar_t__ FUNC_2 (struct Qdisc*,unsigned int,struct qdisc_walker*) ;

__attribute__((used)) static void FUNC_3(struct Qdisc *VAR_1, struct qdisc_walker *VAR_2)
{
 struct cake_sched_data *VAR_3 = FUNC_1(VAR_1);
 unsigned int VAR_4, VAR_5;

 if (VAR_2->stop)
  return;

 for (VAR_4 = 0; VAR_4 < VAR_3->tin_cnt; VAR_4++) {
  struct cake_tin_data *VAR_6 = &VAR_3->tins[VAR_3->tin_order[VAR_4]];

  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
   if (FUNC_0(&VAR_6->flows[VAR_5].flowchain) ||
       VAR_2->count < VAR_2->skip) {
    VAR_2->count++;
    continue;
   }
   if (VAR_2->fn(VAR_1, VAR_4 * VAR_0 + VAR_5 + 1, VAR_2) < 0) {
    VAR_2->stop = 1;
    break;
   }
   VAR_2->count++;
  }
 }
}
