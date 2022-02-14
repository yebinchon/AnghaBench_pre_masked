
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_block_ext_info {int binder_type; } ;
struct tcf_block {int flow_block; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct flow_block_offload {int command; int cb_list; struct netlink_ext_ack* extack; int block_shared; int * block; int net; int binder_type; } ;
typedef enum flow_block_command { ____Placeholder_flow_block_command } flow_block_command ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,struct flow_block_offload*,int) ;
 int FUNC_3 (struct tcf_block*,struct flow_block_offload*) ;
 int FUNC_4 (struct tcf_block*) ;

__attribute__((used)) static void FUNC_5(struct tcf_block *VAR_0,
          struct net_device *VAR_1,
          struct tcf_block_ext_info *VAR_2,
          enum flow_block_command VAR_3,
          struct netlink_ext_ack *VAR_4)
{
 struct flow_block_offload VAR_5 = {
  .command = VAR_3,
  .binder_type = VAR_2->binder_type,
  .net = FUNC_1(VAR_1),
  .block = &VAR_0->flow_block,
  .block_shared = FUNC_4(VAR_0),
  .extack = VAR_4,
 };
 FUNC_0(&VAR_5.cb_list);

 FUNC_2(VAR_1, &VAR_5, VAR_3);
 FUNC_3(VAR_0, &VAR_5);
}
