
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_taprio_qopt_offload {scalar_t__ enable; } ;
struct taprio_sched {int flags; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device_ops {int (* ndo_setup_tc ) (struct net_device*,int ,struct tc_taprio_qopt_offload*) ;} ;
struct net_device {struct net_device_ops* netdev_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct netlink_ext_ack*,char*) ;
 int VAR_2 ;
 int FUNC_2 (struct net_device*,int ,struct tc_taprio_qopt_offload*) ;
 struct tc_taprio_qopt_offload* FUNC_3 (int ) ;
 int FUNC_4 (struct tc_taprio_qopt_offload*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_3,
      struct taprio_sched *VAR_4,
      struct netlink_ext_ack *VAR_5)
{
 const struct net_device_ops *VAR_6 = VAR_3->netdev_ops;
 struct tc_taprio_qopt_offload *VAR_7;
 int VAR_8;

 if (!FUNC_0(VAR_4->flags))
  return 0;

 if (!VAR_6->ndo_setup_tc)
  return -VAR_1;

 VAR_7 = FUNC_3(0);
 if (!VAR_7) {
  FUNC_1(VAR_5,
          "Not enough memory to disable offload mode");
  return -VAR_0;
 }
 VAR_7->enable = 0;

 VAR_8 = VAR_6->ndo_setup_tc(VAR_3, VAR_2, VAR_7);
 if (VAR_8 < 0) {
  FUNC_1(VAR_5,
          "Device failed to disable offload");
  goto out;
 }

out:
 FUNC_4(VAR_7);

 return VAR_8;
}
