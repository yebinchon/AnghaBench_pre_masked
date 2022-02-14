
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcf_proto {int dummy; } ;
struct tcf_filter_chain_list_item {int list; int chain_head_change_priv; int chain_head_change; } ;
struct tcf_chain {int filter_chain_lock; int filter_chain; } ;
struct tcf_block_ext_info {int chain_head_change_priv; int chain_head_change; } ;
struct TYPE_2__ {int filter_chain_list; struct tcf_chain* chain; } ;
struct tcf_block {int lock; TYPE_1__ chain0; } ;
struct netlink_ext_ack {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 struct tcf_filter_chain_list_item* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct tcf_proto* FUNC_5 (int ,struct tcf_chain*) ;
 int FUNC_6 (struct tcf_filter_chain_list_item*,struct tcf_proto*) ;
 int FUNC_7 (struct tcf_chain*) ;
 int FUNC_8 (struct tcf_chain*) ;

__attribute__((used)) static int
FUNC_9(struct tcf_block *VAR_2,
         struct tcf_block_ext_info *VAR_3,
         struct netlink_ext_ack *VAR_4)
{
 struct tcf_filter_chain_list_item *VAR_5;
 struct tcf_chain *VAR_6;

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_1);
 if (!VAR_5) {
  FUNC_0(VAR_4, "Memory allocation for head change callback item failed");
  return -VAR_0;
 }
 VAR_5->chain_head_change = VAR_3->chain_head_change;
 VAR_5->chain_head_change_priv = VAR_3->chain_head_change_priv;

 FUNC_3(&VAR_2->lock);
 VAR_6 = VAR_2->chain0.chain;
 if (VAR_6)
  FUNC_7(VAR_6);
 else
  FUNC_2(&VAR_5->list, &VAR_2->chain0.filter_chain_list);
 FUNC_4(&VAR_2->lock);

 if (VAR_6) {
  struct tcf_proto *VAR_7;

  FUNC_3(&VAR_6->filter_chain_lock);

  VAR_7 = FUNC_5(VAR_6->filter_chain, VAR_6);
  if (VAR_7)
   FUNC_6(VAR_5, VAR_7);

  FUNC_3(&VAR_2->lock);
  FUNC_2(&VAR_5->list, &VAR_2->chain0.filter_chain_list);
  FUNC_4(&VAR_2->lock);

  FUNC_4(&VAR_6->filter_chain_lock);
  FUNC_8(VAR_6);
 }

 return 0;
}
