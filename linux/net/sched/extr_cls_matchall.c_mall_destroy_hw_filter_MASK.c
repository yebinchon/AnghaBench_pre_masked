
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcf_proto {TYPE_1__* chain; } ;
struct tcf_block {int dummy; } ;
struct tc_cls_matchall_offload {unsigned long cookie; int command; int common; } ;
struct netlink_ext_ack {int dummy; } ;
struct cls_mall_head {int in_hw_count; int flags; } ;
struct TYPE_2__ {struct tcf_block* block; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct tcf_proto*,int ,struct netlink_ext_ack*) ;
 int FUNC_1 (struct tcf_block*,struct tcf_proto*,int ,struct tc_cls_matchall_offload*,int,int *,int *,int) ;

__attribute__((used)) static void FUNC_2(struct tcf_proto *VAR_2,
       struct cls_mall_head *VAR_3,
       unsigned long VAR_4,
       struct netlink_ext_ack *VAR_5)
{
 struct tc_cls_matchall_offload VAR_6 = {};
 struct tcf_block *VAR_7 = VAR_2->chain->block;

 FUNC_0(&VAR_6.common, VAR_2, VAR_3->flags, VAR_5);
 VAR_6.command = VAR_0;
 VAR_6.cookie = VAR_4;

 FUNC_1(VAR_7, VAR_2, VAR_1, &VAR_6, 0,
       &VAR_3->flags, &VAR_3->in_hw_count, 1);
}
