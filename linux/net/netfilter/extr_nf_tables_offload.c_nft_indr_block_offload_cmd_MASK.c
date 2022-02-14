
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nft_base_chain {int flow_block; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct flow_block_offload {int command; int cb_list; struct netlink_ext_ack* extack; int binder_type; int * block; int net; } ;
typedef enum flow_block_command { ____Placeholder_flow_block_command } flow_block_command ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,struct flow_block_offload*,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct nft_base_chain*,struct flow_block_offload*,int) ;

__attribute__((used)) static int FUNC_5(struct nft_base_chain *VAR_2,
          struct net_device *VAR_3,
          enum flow_block_command VAR_4)
{
 struct flow_block_offload VAR_5 = {};
 struct netlink_ext_ack VAR_6 = {};

 VAR_5.net = FUNC_1(VAR_3);
 VAR_5.block = &VAR_2->flow_block;
 VAR_5.command = VAR_4;
 VAR_5.binder_type = VAR_1;
 VAR_5.extack = &VAR_6;
 FUNC_0(&VAR_5.cb_list);

 FUNC_2(VAR_3, &VAR_5, VAR_4);

 if (FUNC_3(&VAR_5.cb_list))
  return -VAR_0;

 return FUNC_4(VAR_2, &VAR_5, VAR_4);
}
