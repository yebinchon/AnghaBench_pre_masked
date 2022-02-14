
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qdisc_walker {int stop; scalar_t__ count; scalar_t__ skip; scalar_t__ (* fn ) (struct Qdisc*,int,struct qdisc_walker*) ;} ;
struct prio_sched_data {int bands; } ;
struct Qdisc {int dummy; } ;


 struct prio_sched_data* FUNC_0 (struct Qdisc*) ;
 scalar_t__ FUNC_1 (struct Qdisc*,int,struct qdisc_walker*) ;

__attribute__((used)) static void FUNC_2(struct Qdisc *VAR_0, struct qdisc_walker *VAR_1)
{
 struct prio_sched_data *VAR_2 = FUNC_0(VAR_0);
 int VAR_3;

 if (VAR_1->stop)
  return;

 for (VAR_3 = 0; VAR_3 < VAR_2->bands; VAR_3++) {
  if (VAR_1->count < VAR_1->skip) {
   VAR_1->count++;
   continue;
  }
  if (VAR_1->fn(VAR_0, VAR_3 + 1, VAR_1) < 0) {
   VAR_1->stop = 1;
   break;
  }
  VAR_1->count++;
 }
}
