
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {unsigned int num_tx_queues; } ;
struct mq_sched {scalar_t__* qdiscs; } ;
struct Qdisc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (struct Qdisc*,int ) ;
 struct net_device* FUNC_2 (struct Qdisc*) ;
 struct mq_sched* FUNC_3 (struct Qdisc*) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct Qdisc *VAR_1)
{
 struct net_device *VAR_2 = FUNC_2(VAR_1);
 struct mq_sched *VAR_3 = FUNC_3(VAR_1);
 unsigned int VAR_4;

 FUNC_1(VAR_1, VAR_0);

 if (!VAR_3->qdiscs)
  return;
 for (VAR_4 = 0; VAR_4 < VAR_2->num_tx_queues && VAR_3->qdiscs[VAR_4]; VAR_4++)
  FUNC_4(VAR_3->qdiscs[VAR_4]);
 FUNC_0(VAR_3->qdiscs);
}
