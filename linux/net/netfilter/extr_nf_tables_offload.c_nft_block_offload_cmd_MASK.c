
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nft_base_chain {int flow_block; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {TYPE_1__* netdev_ops; } ;
struct flow_block_offload {int command; int cb_list; struct netlink_ext_ack* extack; int binder_type; int * block; int net; } ;
typedef enum flow_block_command { ____Placeholder_flow_block_command } flow_block_command ;
struct TYPE_2__ {int (* ndo_setup_tc ) (struct net_device*,int ,struct flow_block_offload*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct nft_base_chain*,struct flow_block_offload*,int) ;
 int FUNC_3 (struct net_device*,int ,struct flow_block_offload*) ;

__attribute__((used)) static int FUNC_4(struct nft_base_chain *VAR_2,
     struct net_device *VAR_3,
     enum flow_block_command VAR_4)
{
 struct netlink_ext_ack VAR_5 = {};
 struct flow_block_offload VAR_6 = {};
 int VAR_7;

 VAR_6.net = FUNC_1(VAR_3);
 VAR_6.block = &VAR_2->flow_block;
 VAR_6.command = VAR_4;
 VAR_6.binder_type = VAR_0;
 VAR_6.extack = &VAR_5;
 FUNC_0(&VAR_6.cb_list);

 VAR_7 = VAR_3->netdev_ops->ndo_setup_tc(VAR_3, VAR_1, &VAR_6);
 if (VAR_7 < 0)
  return VAR_7;

 return FUNC_2(VAR_2, &VAR_6, VAR_4);
}
