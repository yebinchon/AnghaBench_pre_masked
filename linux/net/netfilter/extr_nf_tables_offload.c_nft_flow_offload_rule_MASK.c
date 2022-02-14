
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nft_rule {int dummy; } ;
struct nft_flow_rule {int rule; int proto; } ;
struct nft_chain {int dummy; } ;
struct TYPE_2__ {int priority; } ;
struct nft_base_chain {TYPE_1__ ops; } ;
struct netlink_ext_ack {int dummy; } ;
struct flow_cls_offload {int command; unsigned long cookie; int rule; int common; } ;
typedef enum flow_cls_command { ____Placeholder_flow_cls_command } flow_cls_command ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nft_base_chain* FUNC_0 (struct nft_chain*) ;
 int FUNC_1 (int *,int ,int ,struct netlink_ext_ack*) ;
 int FUNC_2 (struct nft_chain*) ;
 int FUNC_3 (struct nft_base_chain*,int ,struct flow_cls_offload*) ;

__attribute__((used)) static int FUNC_4(struct nft_chain *VAR_3,
     struct nft_rule *VAR_4,
     struct nft_flow_rule *VAR_5,
     enum flow_cls_command VAR_6)
{
 struct flow_cls_offload VAR_7 = {};
 struct nft_base_chain *VAR_8;
 struct netlink_ext_ack VAR_9;
 __be16 VAR_10 = VAR_1;

 if (!FUNC_2(VAR_3))
  return -VAR_0;

 VAR_8 = FUNC_0(VAR_3);

 if (VAR_5)
  VAR_10 = VAR_5->proto;

 FUNC_1(&VAR_7.common, VAR_10,
         VAR_8->ops.priority, &VAR_9);
 VAR_7.command = VAR_6;
 VAR_7.cookie = (unsigned long) VAR_4;
 if (VAR_5)
  VAR_7.rule = VAR_5->rule;

 return FUNC_3(VAR_8, VAR_2, &VAR_7);
}
