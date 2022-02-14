
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qdisc_walker {int stop; scalar_t__ count; scalar_t__ skip; scalar_t__ (* fn ) (struct Qdisc*,unsigned int,struct qdisc_walker*) ;} ;
struct fq_codel_sched_data {unsigned int flows_cnt; TYPE_1__* flows; } ;
struct Qdisc {int dummy; } ;
struct TYPE_2__ {int flowchain; } ;


 scalar_t__ FUNC_0 (int *) ;
 struct fq_codel_sched_data* FUNC_1 (struct Qdisc*) ;
 scalar_t__ FUNC_2 (struct Qdisc*,unsigned int,struct qdisc_walker*) ;

__attribute__((used)) static void FUNC_3(struct Qdisc *VAR_0, struct qdisc_walker *VAR_1)
{
 struct fq_codel_sched_data *VAR_2 = FUNC_1(VAR_0);
 unsigned int VAR_3;

 if (VAR_1->stop)
  return;

 for (VAR_3 = 0; VAR_3 < VAR_2->flows_cnt; VAR_3++) {
  if (FUNC_0(&VAR_2->flows[VAR_3].flowchain) ||
      VAR_1->count < VAR_1->skip) {
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
