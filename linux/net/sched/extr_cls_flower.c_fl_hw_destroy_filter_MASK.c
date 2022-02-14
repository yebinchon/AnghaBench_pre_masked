
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcf_proto {TYPE_1__* chain; } ;
struct tcf_block {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct flow_cls_offload {unsigned long cookie; int command; int common; } ;
struct cls_fl_filter {int in_hw_count; int flags; } ;
struct TYPE_2__ {struct tcf_block* block; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct tcf_proto*,int ,struct netlink_ext_ack*) ;
 int FUNC_1 (struct tcf_block*,struct tcf_proto*,int ,struct flow_cls_offload*,int,int *,int *,int) ;

__attribute__((used)) static void FUNC_2(struct tcf_proto *VAR_2, struct cls_fl_filter *VAR_3,
     bool VAR_4, struct netlink_ext_ack *VAR_5)
{
 struct tcf_block *VAR_6 = VAR_2->chain->block;
 struct flow_cls_offload VAR_7 = {};

 FUNC_0(&VAR_7.common, VAR_2, VAR_3->flags, VAR_5);
 VAR_7.command = VAR_0;
 VAR_7.cookie = (unsigned long) VAR_3;

 FUNC_1(VAR_6, VAR_2, VAR_1, &VAR_7, 0,
       &VAR_3->flags, &VAR_3->in_hw_count, VAR_4);

}
