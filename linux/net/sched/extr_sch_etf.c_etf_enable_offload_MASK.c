
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_etf_qopt_offload {int enable; int queue; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device_ops {int (* ndo_setup_tc ) (struct net_device*,int ,struct tc_etf_qopt_offload*) ;} ;
struct net_device {struct net_device_ops* netdev_ops; } ;
struct etf_sched_data {int queue; scalar_t__ offload; } ;


 int VAR_0 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int VAR_1 ;
 int FUNC_1 (struct net_device*,int ,struct tc_etf_qopt_offload*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2, struct etf_sched_data *VAR_3,
         struct netlink_ext_ack *VAR_4)
{
 const struct net_device_ops *VAR_5 = VAR_2->netdev_ops;
 struct tc_etf_qopt_offload VAR_6 = { };
 int VAR_7;

 if (VAR_3->offload)
  return 0;

 if (!VAR_5->ndo_setup_tc) {
  FUNC_0(VAR_4, "Specified device does not support ETF offload");
  return -VAR_0;
 }

 VAR_6.queue = VAR_3->queue;
 VAR_6.enable = 1;

 VAR_7 = VAR_5->ndo_setup_tc(VAR_2, VAR_1, &VAR_6);
 if (VAR_7 < 0) {
  FUNC_0(VAR_4, "Specified device failed to setup ETF hardware offload");
  return VAR_7;
 }

 return 0;
}
