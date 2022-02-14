
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_cbs_qopt_offload {int enable; int sendslope; int idleslope; int locredit; int hicredit; int queue; } ;
struct tc_cbs_qopt {int sendslope; int idleslope; int locredit; int hicredit; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device_ops {int (* ndo_setup_tc ) (struct net_device*,int ,struct tc_cbs_qopt_offload*) ;} ;
struct net_device {struct net_device_ops* netdev_ops; } ;
struct cbs_sched_data {int dequeue; int enqueue; int queue; } ;


 int VAR_0 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct net_device*,int ,struct tc_cbs_qopt_offload*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_4, struct cbs_sched_data *VAR_5,
         const struct tc_cbs_qopt *VAR_6,
         struct netlink_ext_ack *VAR_7)
{
 const struct net_device_ops *VAR_8 = VAR_4->netdev_ops;
 struct tc_cbs_qopt_offload VAR_9 = { };
 int VAR_10;

 if (!VAR_8->ndo_setup_tc) {
  FUNC_0(VAR_7, "Specified device does not support cbs offload");
  return -VAR_0;
 }

 VAR_9.queue = VAR_5->queue;

 VAR_9.enable = 1;
 VAR_9.hicredit = VAR_6->hicredit;
 VAR_9.locredit = VAR_6->locredit;
 VAR_9.idleslope = VAR_6->idleslope;
 VAR_9.sendslope = VAR_6->sendslope;

 VAR_10 = VAR_8->ndo_setup_tc(VAR_4, VAR_1, &VAR_9);
 if (VAR_10 < 0) {
  FUNC_0(VAR_7, "Specified device failed to setup cbs hardware offload");
  return VAR_10;
 }

 VAR_5->enqueue = VAR_3;
 VAR_5->dequeue = VAR_2;

 return 0;
}
