
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_taprio_qopt_offload {int enable; } ;
struct tc_mqprio_qopt {int dummy; } ;
struct taprio_sched {int dummy; } ;
struct sched_gate_list {int num_entries; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device_ops {int (* ndo_setup_tc ) (struct net_device*,int ,struct tc_taprio_qopt_offload*) ;} ;
struct net_device {struct net_device_ops* netdev_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int VAR_2 ;
 int FUNC_1 (struct net_device*,int ,struct tc_taprio_qopt_offload*) ;
 struct tc_taprio_qopt_offload* FUNC_2 (int ) ;
 int FUNC_3 (struct tc_taprio_qopt_offload*) ;
 int FUNC_4 (struct taprio_sched*,struct sched_gate_list*,struct tc_mqprio_qopt*,struct tc_taprio_qopt_offload*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_3,
     struct tc_mqprio_qopt *VAR_4,
     struct taprio_sched *VAR_5,
     struct sched_gate_list *VAR_6,
     struct netlink_ext_ack *VAR_7)
{
 const struct net_device_ops *VAR_8 = VAR_3->netdev_ops;
 struct tc_taprio_qopt_offload *VAR_9;
 int VAR_10 = 0;

 if (!VAR_8->ndo_setup_tc) {
  FUNC_0(VAR_7,
          "Device does not support taprio offload");
  return -VAR_1;
 }

 VAR_9 = FUNC_2(VAR_6->num_entries);
 if (!VAR_9) {
  FUNC_0(VAR_7,
          "Not enough memory for enabling offload mode");
  return -VAR_0;
 }
 VAR_9->enable = 1;
 FUNC_4(VAR_5, VAR_6, VAR_4, VAR_9);

 VAR_10 = VAR_8->ndo_setup_tc(VAR_3, VAR_2, VAR_9);
 if (VAR_10 < 0) {
  FUNC_0(VAR_7,
          "Device failed to setup taprio offload");
  goto done;
 }

done:
 FUNC_3(VAR_9);

 return VAR_10;
}
