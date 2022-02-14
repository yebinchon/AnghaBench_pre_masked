
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct tcf_proto {TYPE_1__* chain; } ;
struct tcf_block {int dummy; } ;
struct tc_u_hnode {int prio; int handle; int divisor; } ;
struct TYPE_4__ {int prio; int handle; int divisor; } ;
struct tc_cls_u32_offload {TYPE_2__ hnode; int command; int common; } ;
struct netlink_ext_ack {int dummy; } ;
struct TYPE_3__ {struct tcf_block* block; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct tcf_proto*,int ,struct netlink_ext_ack*) ;
 int FUNC_1 (struct tcf_block*,int ,struct tc_cls_u32_offload*,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct tcf_proto*,struct tc_u_hnode*,int *) ;

__attribute__((used)) static int FUNC_4(struct tcf_proto *VAR_3, struct tc_u_hnode *VAR_4,
    u32 VAR_5, struct netlink_ext_ack *VAR_6)
{
 struct tcf_block *VAR_7 = VAR_3->chain->block;
 struct tc_cls_u32_offload VAR_8 = {};
 bool VAR_9 = FUNC_2(VAR_5);
 bool VAR_10 = 0;
 int VAR_11;

 FUNC_0(&VAR_8, VAR_3, VAR_5, VAR_6);
 VAR_8 = VAR_1;
 VAR_8 = VAR_4->divisor;
 VAR_8 = VAR_4->handle;
 VAR_8 = VAR_4->prio;

 VAR_11 = FUNC_1(VAR_7, VAR_2, &VAR_8, VAR_9, 1);
 if (VAR_11 < 0) {
  FUNC_3(VAR_3, VAR_4, ((void*)0));
  return VAR_11;
 } else if (VAR_11 > 0) {
  VAR_10 = 1;
 }

 if (VAR_9 && !VAR_10)
  return -VAR_0;

 return 0;
}
