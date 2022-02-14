
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_block_ext_info {int binder_type; int block_index; } ;
struct tcf_block {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net {int dummy; } ;
struct Qdisc {int dummy; } ;


 scalar_t__ FUNC_0 (struct tcf_block*) ;
 int FUNC_1 (struct tcf_block*) ;
 struct net* FUNC_2 (struct Qdisc*) ;
 struct tcf_block* FUNC_3 (struct net*,struct Qdisc*,int ,struct netlink_ext_ack*) ;
 int FUNC_4 (struct tcf_block*,struct net*,struct netlink_ext_ack*) ;
 int FUNC_5 (struct tcf_block*,struct Qdisc*,struct tcf_block_ext_info*,struct netlink_ext_ack*) ;
 int FUNC_6 (struct tcf_block*,struct Qdisc*,int ) ;
 int FUNC_7 (struct tcf_block*,struct Qdisc*,int ) ;
 int FUNC_8 (struct tcf_block*,struct Qdisc*,int ) ;
 struct tcf_block* FUNC_9 (struct net*,int ) ;
 int FUNC_10 (struct tcf_block*,int) ;
 scalar_t__ FUNC_11 (struct tcf_block*) ;
 int FUNC_12 (struct tcf_block*,struct tcf_block_ext_info*,struct netlink_ext_ack*) ;
 int FUNC_13 (struct tcf_block*,struct tcf_block_ext_info*) ;

int FUNC_14(struct tcf_block **VAR_0, struct Qdisc *VAR_1,
        struct tcf_block_ext_info *VAR_2,
        struct netlink_ext_ack *VAR_3)
{
 struct net *VAR_4 = FUNC_2(VAR_1);
 struct tcf_block *VAR_5 = ((void*)0);
 int VAR_6;

 if (VAR_2->block_index)

  VAR_5 = FUNC_9(VAR_4, VAR_2->block_index);

 if (!VAR_5) {
  VAR_5 = FUNC_3(VAR_4, VAR_1, VAR_2->block_index, VAR_3);
  if (FUNC_0(VAR_5))
   return FUNC_1(VAR_5);
  if (FUNC_11(VAR_5)) {
   VAR_6 = FUNC_4(VAR_5, VAR_4, VAR_3);
   if (VAR_6)
    goto err_block_insert;
  }
 }

 VAR_6 = FUNC_6(VAR_5, VAR_1, VAR_2->binder_type);
 if (VAR_6)
  goto err_block_owner_add;

 FUNC_8(VAR_5, VAR_1, VAR_2->binder_type);

 VAR_6 = FUNC_12(VAR_5, VAR_2, VAR_3);
 if (VAR_6)
  goto err_chain0_head_change_cb_add;

 VAR_6 = FUNC_5(VAR_5, VAR_1, VAR_2, VAR_3);
 if (VAR_6)
  goto err_block_offload_bind;

 *VAR_0 = VAR_5;
 return 0;

err_block_offload_bind:
 FUNC_13(VAR_5, VAR_2);
err_chain0_head_change_cb_add:
 FUNC_7(VAR_5, VAR_1, VAR_2->binder_type);
err_block_owner_add:
err_block_insert:
 FUNC_10(VAR_5, 1);
 return VAR_6;
}
