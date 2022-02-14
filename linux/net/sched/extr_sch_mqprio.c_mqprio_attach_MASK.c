
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {unsigned int num_tx_queues; unsigned int real_num_tx_queues; } ;
struct mqprio_sched {struct Qdisc** qdiscs; } ;
struct Qdisc {int dev_queue; } ;


 struct Qdisc* FUNC_0 (int ,struct Qdisc*) ;
 int FUNC_1 (struct Qdisc**) ;
 struct net_device* FUNC_2 (struct Qdisc*) ;
 int FUNC_3 (struct Qdisc*,int) ;
 struct mqprio_sched* FUNC_4 (struct Qdisc*) ;
 int FUNC_5 (struct Qdisc*) ;

__attribute__((used)) static void FUNC_6(struct Qdisc *VAR_0)
{
 struct net_device *VAR_1 = FUNC_2(VAR_0);
 struct mqprio_sched *VAR_2 = FUNC_4(VAR_0);
 struct Qdisc *VAR_3, *VAR_4;
 unsigned int VAR_5;


 for (VAR_5 = 0; VAR_5 < VAR_1->num_tx_queues; VAR_5++) {
  VAR_3 = VAR_2->qdiscs[VAR_5];
  VAR_4 = FUNC_0(VAR_3->dev_queue, VAR_3);
  if (VAR_4)
   FUNC_5(VAR_4);
  if (VAR_5 < VAR_1->real_num_tx_queues)
   FUNC_3(VAR_3, 0);
 }
 FUNC_1(VAR_2->qdiscs);
 VAR_2->qdiscs = ((void*)0);
}
