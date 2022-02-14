
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sfb_sched_data {int double_buffering; scalar_t__ slot; int qdisc; } ;
struct TYPE_4__ {scalar_t__ qlen; } ;
struct TYPE_3__ {scalar_t__ backlog; } ;
struct Qdisc {TYPE_2__ q; TYPE_1__ qstats; } ;


 struct sfb_sched_data* FUNC_0 (struct Qdisc*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct sfb_sched_data*) ;
 int FUNC_3 (struct sfb_sched_data*) ;

__attribute__((used)) static void FUNC_4(struct Qdisc *VAR_0)
{
 struct sfb_sched_data *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_1->qdisc);
 VAR_0->qstats.backlog = 0;
 VAR_0->q.qlen = 0;
 VAR_1->slot = 0;
 VAR_1->double_buffering = 0;
 FUNC_3(VAR_1);
 FUNC_2(0, VAR_1);
}
