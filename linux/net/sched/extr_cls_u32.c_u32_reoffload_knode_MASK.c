
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tcf_proto {TYPE_1__* chain; } ;
struct tcf_block {int dummy; } ;
struct tc_u_knode {int in_hw_count; int flags; scalar_t__ ht_down; int exts; int res; int sel; scalar_t__ mask; scalar_t__ val; int fshift; int handle; } ;
struct tc_u_hnode {int handle; } ;
struct TYPE_4__ {int link_handle; int * exts; int * res; int * sel; scalar_t__ mask; scalar_t__ val; int fshift; int handle; } ;
struct tc_cls_u32_offload {TYPE_2__ knode; int command; int common; } ;
struct netlink_ext_ack {int dummy; } ;
typedef int flow_setup_cb_t ;
struct TYPE_3__ {struct tcf_block* block; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct tc_u_hnode* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,struct tcf_proto*,int ,struct netlink_ext_ack*) ;
 int FUNC_2 (struct tcf_block*,struct tcf_proto*,int,int *,int ,struct tc_cls_u32_offload*,void*,int *,int *) ;

__attribute__((used)) static int FUNC_3(struct tcf_proto *VAR_3, struct tc_u_knode *VAR_4,
          bool VAR_5, flow_setup_cb_t *VAR_6, void *VAR_7,
          struct netlink_ext_ack *VAR_8)
{
 struct tc_u_hnode *VAR_9 = FUNC_0(VAR_4->ht_down);
 struct tcf_block *VAR_10 = VAR_3->chain->block;
 struct tc_cls_u32_offload VAR_11 = {};
 int VAR_12;

 FUNC_1(&VAR_11, VAR_3, VAR_4->flags, VAR_8);
 VAR_11 = VAR_5 ?
  VAR_1 : VAR_0;
 VAR_11 = VAR_4->handle;

 if (VAR_5) {
  VAR_11 = VAR_4->fshift;




  VAR_11 = 0;
  VAR_11 = 0;

  VAR_11 = &VAR_4->sel;
  VAR_11 = &VAR_4->res;
  VAR_11 = &VAR_4->exts;
  if (VAR_4->ht_down)
   VAR_11 = VAR_9->handle;
 }

 VAR_12 = FUNC_2(VAR_10, VAR_3, VAR_5, VAR_6, VAR_2,
        &VAR_11, VAR_7, &VAR_4->flags,
        &VAR_4->in_hw_count);
 if (VAR_12)
  return VAR_12;

 return 0;
}
