
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct taprio_sched {TYPE_2__* admin_sched; TYPE_1__* oper_sched; scalar_t__* qdiscs; int advance_timer; int taprio_list; } ;
struct net_device {unsigned int num_tx_queues; } ;
struct Qdisc {int dummy; } ;
struct TYPE_4__ {int rcu; } ;
struct TYPE_3__ {int rcu; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct net_device*,int ) ;
 struct net_device* FUNC_5 (struct Qdisc*) ;
 struct taprio_sched* FUNC_6 (struct Qdisc*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct net_device*,struct taprio_sched*,int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_11(struct Qdisc *VAR_2)
{
 struct taprio_sched *VAR_3 = FUNC_6(VAR_2);
 struct net_device *VAR_4 = FUNC_5(VAR_2);
 unsigned int VAR_5;

 FUNC_8(&VAR_1);
 FUNC_3(&VAR_3->taprio_list);
 FUNC_9(&VAR_1);

 FUNC_1(&VAR_3->advance_timer);

 FUNC_10(VAR_4, VAR_3, ((void*)0));

 if (VAR_3->qdiscs) {
  for (VAR_5 = 0; VAR_5 < VAR_4->num_tx_queues && VAR_3->qdiscs[VAR_5]; VAR_5++)
   FUNC_7(VAR_3->qdiscs[VAR_5]);

  FUNC_2(VAR_3->qdiscs);
 }
 VAR_3->qdiscs = ((void*)0);

 FUNC_4(VAR_4, 0);

 if (VAR_3->oper_sched)
  FUNC_0(&VAR_3->oper_sched->rcu, VAR_0);

 if (VAR_3->admin_sched)
  FUNC_0(&VAR_3->admin_sched->rcu, VAR_0);
}
