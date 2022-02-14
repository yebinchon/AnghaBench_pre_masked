
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_cbs_qopt_offload {int queue; scalar_t__ enable; } ;
struct net_device_ops {int (* ndo_setup_tc ) (struct net_device*,int ,struct tc_cbs_qopt_offload*) ;} ;
struct net_device {struct net_device_ops* netdev_ops; } ;
struct cbs_sched_data {int queue; int dequeue; int enqueue; int offload; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct net_device*,int ,struct tc_cbs_qopt_offload*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_3,
    struct cbs_sched_data *VAR_4)
{
 struct tc_cbs_qopt_offload VAR_5 = { };
 const struct net_device_ops *VAR_6;
 int VAR_7;

 if (!VAR_4->offload)
  return;

 VAR_4->enqueue = VAR_2;
 VAR_4->dequeue = VAR_1;

 VAR_6 = VAR_3->netdev_ops;
 if (!VAR_6->ndo_setup_tc)
  return;

 VAR_5.queue = VAR_4->queue;
 VAR_5.enable = 0;

 VAR_7 = VAR_6->ndo_setup_tc(VAR_3, VAR_0, &VAR_5);
 if (VAR_7 < 0)
  FUNC_0("Couldn't disable CBS offload for queue %d\n",
   VAR_5.queue);
}
