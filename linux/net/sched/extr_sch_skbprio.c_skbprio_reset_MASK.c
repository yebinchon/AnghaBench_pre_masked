
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct skbprio_sched_data {int lowest_prio; scalar_t__ highest_prio; int qstats; int * qdiscs; } ;
struct TYPE_4__ {scalar_t__ qlen; } ;
struct TYPE_3__ {scalar_t__ backlog; } ;
struct Qdisc {TYPE_2__ q; TYPE_1__ qstats; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int) ;
 struct skbprio_sched_data* FUNC_2 (struct Qdisc*) ;

__attribute__((used)) static void FUNC_3(struct Qdisc *VAR_1)
{
 struct skbprio_sched_data *VAR_2 = FUNC_2(VAR_1);
 int VAR_3;

 VAR_1->qstats.backlog = 0;
 VAR_1->q.qlen = 0;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_0(&VAR_2->qdiscs[VAR_3]);

 FUNC_1(&VAR_2->qstats, 0, sizeof(VAR_2->qstats));
 VAR_2->highest_prio = 0;
 VAR_2->lowest_prio = VAR_0 - 1;
}
