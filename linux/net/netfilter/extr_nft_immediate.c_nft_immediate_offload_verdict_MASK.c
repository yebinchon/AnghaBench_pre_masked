
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nft_offload_ctx {int num_actions; } ;
struct TYPE_6__ {int code; } ;
struct nft_data {TYPE_3__ verdict; } ;
struct nft_immediate_expr {struct nft_data data; } ;
struct nft_flow_rule {TYPE_2__* rule; } ;
struct flow_action_entry {int id; } ;
struct TYPE_4__ {struct flow_action_entry* entries; } ;
struct TYPE_5__ {TYPE_1__ action; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



__attribute__((used)) static int FUNC_0(struct nft_offload_ctx *VAR_3,
      struct nft_flow_rule *VAR_4,
      const struct nft_immediate_expr *VAR_5)
{
 struct flow_action_entry *VAR_6;
 const struct nft_data *VAR_7;

 VAR_6 = &VAR_4->rule->action.entries[VAR_3->num_actions++];

 VAR_7 = &VAR_5->data;
 switch (VAR_7->verdict.code) {
 case 129:
  VAR_6->id = VAR_1;
  break;
 case 128:
  VAR_6->id = VAR_2;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
