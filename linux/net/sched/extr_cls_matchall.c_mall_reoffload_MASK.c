
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tcf_proto {TYPE_1__* chain; int root; } ;
struct tcf_block {int dummy; } ;
struct tc_cls_matchall_offload {unsigned long cookie; TYPE_2__* rule; int command; int common; } ;
struct netlink_ext_ack {int dummy; } ;
struct cls_mall_head {int in_hw_count; int flags; int exts; } ;
typedef int flow_setup_cb_t ;
struct TYPE_5__ {int action; } ;
struct TYPE_4__ {struct tcf_block* block; } ;


 int VAR_0 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 struct cls_mall_head* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,struct tcf_proto*,int ,struct netlink_ext_ack*) ;
 int FUNC_6 (struct tcf_block*,struct tcf_proto*,int,int *,int ,struct tc_cls_matchall_offload*,void*,int *,int *) ;
 int FUNC_7 (int *,int *,int) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct tcf_proto *VAR_4, bool VAR_5, flow_setup_cb_t *VAR_6,
     void *VAR_7, struct netlink_ext_ack *VAR_8)
{
 struct cls_mall_head *VAR_9 = FUNC_3(VAR_4->root);
 struct tc_cls_matchall_offload VAR_10 = {};
 struct tcf_block *VAR_11 = VAR_4->chain->block;
 int VAR_12;

 if (FUNC_8(VAR_9->flags))
  return 0;

 VAR_10.rule = FUNC_1(FUNC_10(&VAR_9->exts));
 if (!VAR_10.rule)
  return -VAR_0;

 FUNC_5(&VAR_10.common, VAR_4, VAR_9->flags, VAR_8);
 VAR_10.command = VAR_5 ?
  VAR_2 : VAR_1;
 VAR_10.cookie = (unsigned long)VAR_9;

 VAR_12 = FUNC_7(&VAR_10.rule->action, &VAR_9->exts, 1);
 if (VAR_12) {
  FUNC_2(VAR_10.rule);
  if (VAR_5 && FUNC_9(VAR_9->flags)) {
   FUNC_0(VAR_8, "Failed to setup flow action");
   return VAR_12;
  }
  return 0;
 }

 VAR_12 = FUNC_6(VAR_11, VAR_4, VAR_5, VAR_6, VAR_3,
        &VAR_10, VAR_7, &VAR_9->flags,
        &VAR_9->in_hw_count);
 FUNC_4(&VAR_10.rule->action);
 FUNC_2(VAR_10.rule);

 if (VAR_12)
  return VAR_12;

 return 0;
}
