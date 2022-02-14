
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct tcf_proto {TYPE_1__* chain; } ;
struct tcf_block {int dummy; } ;
struct tc_u_knode {int flags; int in_hw_count; scalar_t__ ht_down; int exts; int res; int sel; scalar_t__ mask; scalar_t__ val; int fshift; int handle; } ;
struct tc_u_hnode {int handle; } ;
struct TYPE_4__ {int link_handle; int * exts; int * res; int * sel; scalar_t__ mask; scalar_t__ val; int fshift; int handle; } ;
struct tc_cls_u32_offload {TYPE_2__ knode; int command; int common; } ;
struct netlink_ext_ack {int dummy; } ;
struct TYPE_3__ {struct tcf_block* block; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct tc_u_hnode* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,struct tcf_proto*,int ,struct netlink_ext_ack*) ;
 int FUNC_2 (struct tcf_block*,struct tcf_proto*,int ,struct tc_cls_u32_offload*,int,int*,int *,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct tcf_proto*,struct tc_u_knode*,int *) ;

__attribute__((used)) static int FUNC_5(struct tcf_proto *VAR_4, struct tc_u_knode *VAR_5,
    u32 VAR_6, struct netlink_ext_ack *VAR_7)
{
 struct tc_u_hnode *VAR_8 = FUNC_0(VAR_5->ht_down);
 struct tcf_block *VAR_9 = VAR_4->chain->block;
 struct tc_cls_u32_offload VAR_10 = {};
 bool VAR_11 = FUNC_3(VAR_6);
 int VAR_12;

 FUNC_1(&VAR_10, VAR_4, VAR_6, VAR_7);
 VAR_10 = VAR_2;
 VAR_10 = VAR_5->handle;
 VAR_10 = VAR_5->fshift;




 VAR_10 = 0;
 VAR_10 = 0;

 VAR_10 = &VAR_5->sel;
 VAR_10 = &VAR_5->res;
 VAR_10 = &VAR_5->exts;
 if (VAR_5->ht_down)
  VAR_10 = VAR_8->handle;

 VAR_12 = FUNC_2(VAR_9, VAR_4, VAR_3, &VAR_10, VAR_11,
         &VAR_5->flags, &VAR_5->in_hw_count, 1);
 if (VAR_12) {
  FUNC_4(VAR_4, VAR_5, ((void*)0));
  return VAR_12;
 }

 if (VAR_11 && !(VAR_5->flags & VAR_1))
  return -VAR_0;

 return 0;
}
