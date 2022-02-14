
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nft_offload_ctx {int num_actions; int net; } ;
struct nft_flow_rule {TYPE_2__* rule; } ;
struct net_device {int dummy; } ;
struct flow_action_entry {int id; struct net_device* dev; } ;
typedef enum flow_action_id { ____Placeholder_flow_action_id } flow_action_id ;
struct TYPE_3__ {struct flow_action_entry* entries; } ;
struct TYPE_4__ {TYPE_1__ action; } ;


 int VAR_0 ;
 struct net_device* FUNC_0 (int ,int) ;

int FUNC_1(struct nft_offload_ctx *VAR_1,
          struct nft_flow_rule *VAR_2,
          enum flow_action_id VAR_3, int VAR_4)
{
 struct flow_action_entry *VAR_5;
 struct net_device *VAR_6;


 VAR_6 = FUNC_0(VAR_1->net, VAR_4);
 if (!VAR_6)
  return -VAR_0;

 VAR_5 = &VAR_2->rule->action.entries[VAR_1->num_actions++];
 VAR_5->id = VAR_3;
 VAR_5->dev = VAR_6;

 return 0;
}
