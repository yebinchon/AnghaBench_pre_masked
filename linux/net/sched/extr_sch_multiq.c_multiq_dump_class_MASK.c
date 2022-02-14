
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcmsg {int tcm_info; int tcm_handle; } ;
struct sk_buff {int dummy; } ;
struct multiq_sched_data {TYPE_1__** queues; } ;
struct Qdisc {int dummy; } ;
struct TYPE_2__ {int handle; } ;


 int FUNC_0 (unsigned long) ;
 struct multiq_sched_data* FUNC_1 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_2(struct Qdisc *VAR_0, unsigned long VAR_1,
        struct sk_buff *VAR_2, struct tcmsg *VAR_3)
{
 struct multiq_sched_data *VAR_4 = FUNC_1(VAR_0);

 VAR_3->tcm_handle |= FUNC_0(VAR_1);
 VAR_3->tcm_info = VAR_4->queues[VAR_1 - 1]->handle;
 return 0;
}
