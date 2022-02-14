
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcf_block_ext_info {int binder_type; } ;
struct tcf_block {int flow_block; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {TYPE_1__* netdev_ops; } ;
struct flow_block_offload {int command; int cb_list; struct netlink_ext_ack* extack; int block_shared; int * block; int binder_type; int net; } ;
typedef enum flow_block_command { ____Placeholder_flow_block_command } flow_block_command ;
struct TYPE_2__ {int (* ndo_setup_tc ) (struct net_device*,int ,struct flow_block_offload*) ;} ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int ,struct flow_block_offload*) ;
 int FUNC_3 (struct tcf_block*,struct flow_block_offload*) ;
 int FUNC_4 (struct tcf_block*) ;

__attribute__((used)) static int FUNC_5(struct tcf_block *VAR_1,
     struct net_device *VAR_2,
     struct tcf_block_ext_info *VAR_3,
     enum flow_block_command VAR_4,
     struct netlink_ext_ack *VAR_5)
{
 struct flow_block_offload VAR_6 = {};
 int VAR_7;

 VAR_6.net = FUNC_1(VAR_2);
 VAR_6.command = VAR_4;
 VAR_6.binder_type = VAR_3->binder_type;
 VAR_6.block = &VAR_1->flow_block;
 VAR_6.block_shared = FUNC_4(VAR_1);
 VAR_6.extack = VAR_5;
 FUNC_0(&VAR_6.cb_list);

 VAR_7 = VAR_2->netdev_ops->ndo_setup_tc(VAR_2, VAR_0, &VAR_6);
 if (VAR_7 < 0)
  return VAR_7;

 return FUNC_3(VAR_1, &VAR_6);
}
