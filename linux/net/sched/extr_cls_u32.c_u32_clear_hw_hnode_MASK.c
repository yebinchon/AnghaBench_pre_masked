
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tcf_proto {TYPE_2__* chain; } ;
struct tcf_block {int dummy; } ;
struct tc_u_hnode {int prio; int handle; int divisor; int flags; } ;
struct TYPE_3__ {int prio; int handle; int divisor; } ;
struct tc_cls_u32_offload {TYPE_1__ hnode; int command; int common; } ;
struct netlink_ext_ack {int dummy; } ;
struct TYPE_4__ {struct tcf_block* block; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct tcf_proto*,int ,struct netlink_ext_ack*) ;
 int FUNC_1 (struct tcf_block*,int ,struct tc_cls_u32_offload*,int,int) ;

__attribute__((used)) static void FUNC_2(struct tcf_proto *VAR_2, struct tc_u_hnode *VAR_3,
          struct netlink_ext_ack *VAR_4)
{
 struct tcf_block *VAR_5 = VAR_2->chain->block;
 struct tc_cls_u32_offload VAR_6 = {};

 FUNC_0(&VAR_6, VAR_2, VAR_3->flags, VAR_4);
 VAR_6 = VAR_0;
 VAR_6 = VAR_3->divisor;
 VAR_6 = VAR_3->handle;
 VAR_6 = VAR_3->prio;

 FUNC_1(VAR_5, VAR_1, &VAR_6, 0, 1);
}
