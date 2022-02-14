
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_etf_qopt_offload {int queue; scalar_t__ enable; } ;
struct net_device_ops {int (* ndo_setup_tc ) (struct net_device*,int ,struct tc_etf_qopt_offload*) ;} ;
struct net_device {struct net_device_ops* netdev_ops; } ;
struct etf_sched_data {int queue; int offload; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct net_device*,int ,struct tc_etf_qopt_offload*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_1,
    struct etf_sched_data *VAR_2)
{
 struct tc_etf_qopt_offload VAR_3 = { };
 const struct net_device_ops *VAR_4;
 int VAR_5;

 if (!VAR_2->offload)
  return;

 VAR_4 = VAR_1->netdev_ops;
 if (!VAR_4->ndo_setup_tc)
  return;

 VAR_3.queue = VAR_2->queue;
 VAR_3.enable = 0;

 VAR_5 = VAR_4->ndo_setup_tc(VAR_1, VAR_0, &VAR_3);
 if (VAR_5 < 0)
  FUNC_0("Couldn't disable ETF offload for queue %d\n",
   VAR_3.queue);
}
