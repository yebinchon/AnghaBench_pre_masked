
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int member_0; } ;
struct tc_mqprio_qopt_offload {TYPE_1__ member_0; } ;
struct net_device {unsigned int num_tx_queues; TYPE_2__* netdev_ops; } ;
struct mqprio_sched {int mode; scalar_t__ hw_offload; scalar_t__* qdiscs; } ;
struct Qdisc {int dummy; } ;
struct TYPE_4__ {int (* ndo_setup_tc ) (struct net_device*,int ,struct tc_mqprio_qopt_offload*) ;} ;




 int VAR_0 ;
 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (struct net_device*,int ) ;
 struct net_device* FUNC_2 (struct Qdisc*) ;
 struct mqprio_sched* FUNC_3 (struct Qdisc*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct net_device*,int ,struct tc_mqprio_qopt_offload*) ;

__attribute__((used)) static void FUNC_6(struct Qdisc *VAR_1)
{
 struct net_device *VAR_2 = FUNC_2(VAR_1);
 struct mqprio_sched *VAR_3 = FUNC_3(VAR_1);
 unsigned int VAR_4;

 if (VAR_3->qdiscs) {
  for (VAR_4 = 0;
       VAR_4 < VAR_2->num_tx_queues && VAR_3->qdiscs[VAR_4];
       VAR_4++)
   FUNC_4(VAR_3->qdiscs[VAR_4]);
  FUNC_0(VAR_3->qdiscs);
 }

 if (VAR_3->hw_offload && VAR_2->netdev_ops->ndo_setup_tc) {
  struct tc_mqprio_qopt_offload VAR_5 = { { 0 } };

  switch (VAR_3->mode) {
  case 128:
  case 129:
   VAR_2->netdev_ops->ndo_setup_tc(VAR_2,
            VAR_0,
            &VAR_5);
   break;
  default:
   return;
  }
 } else {
  FUNC_1(VAR_2, 0);
 }
}
