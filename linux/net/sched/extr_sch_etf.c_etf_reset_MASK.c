
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct Qdisc* qdisc; } ;
struct etf_sched_data {scalar_t__ last; TYPE_2__ watchdog; } ;
struct TYPE_6__ {scalar_t__ qlen; } ;
struct TYPE_4__ {scalar_t__ backlog; } ;
struct Qdisc {TYPE_3__ q; TYPE_1__ qstats; } ;


 int FUNC_0 (TYPE_3__*) ;
 struct etf_sched_data* FUNC_1 (struct Qdisc*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct Qdisc*) ;

__attribute__((used)) static void FUNC_4(struct Qdisc *VAR_0)
{
 struct etf_sched_data *VAR_1 = FUNC_1(VAR_0);


 if (VAR_1->watchdog.qdisc == VAR_0)
  FUNC_2(&VAR_1->watchdog);


 FUNC_3(VAR_0);
 FUNC_0(&VAR_0->q);

 VAR_0->qstats.backlog = 0;
 VAR_0->q.qlen = 0;

 VAR_1->last = 0;
}
