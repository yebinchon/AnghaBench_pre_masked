
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfq_sched_data {unsigned int divisor; scalar_t__* ht; } ;
struct qdisc_walker {int stop; scalar_t__ count; scalar_t__ skip; scalar_t__ (* fn ) (struct Qdisc*,unsigned int,struct qdisc_walker*) ;} ;
struct Qdisc {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct sfq_sched_data* FUNC_0 (struct Qdisc*) ;
 scalar_t__ FUNC_1 (struct Qdisc*,unsigned int,struct qdisc_walker*) ;

__attribute__((used)) static void FUNC_2(struct Qdisc *VAR_1, struct qdisc_walker *VAR_2)
{
 struct sfq_sched_data *VAR_3 = FUNC_0(VAR_1);
 unsigned int VAR_4;

 if (VAR_2->stop)
  return;

 for (VAR_4 = 0; VAR_4 < VAR_3->divisor; VAR_4++) {
  if (VAR_3->ht[VAR_4] == VAR_0 ||
      VAR_2->count < VAR_2->skip) {
   VAR_2->count++;
   continue;
  }
  if (VAR_2->fn(VAR_1, VAR_4 + 1, VAR_2) < 0) {
   VAR_2->stop = 1;
   break;
  }
  VAR_2->count++;
 }
}
