
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tcf_proto {TYPE_1__* chain; } ;
struct tcf_block {int dummy; } ;
struct tc_cls_matchall_offload {unsigned long cookie; TYPE_2__* rule; int command; int common; } ;
struct netlink_ext_ack {int dummy; } ;
struct cls_mall_head {int flags; int in_hw_count; int exts; } ;
struct TYPE_5__ {int action; } ;
struct TYPE_4__ {struct tcf_block* block; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct tcf_proto*,struct cls_mall_head*,unsigned long,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,struct tcf_proto*,int,struct netlink_ext_ack*) ;
 int FUNC_6 (struct tcf_block*,struct tcf_proto*,int ,struct tc_cls_matchall_offload*,int,int*,int *,int) ;
 int FUNC_7 (int *,int *,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct tcf_proto *VAR_5,
      struct cls_mall_head *VAR_6,
      unsigned long VAR_7,
      struct netlink_ext_ack *VAR_8)
{
 struct tc_cls_matchall_offload VAR_9 = {};
 struct tcf_block *VAR_10 = VAR_5->chain->block;
 bool VAR_11 = FUNC_8(VAR_6->flags);
 int VAR_12;

 VAR_9.rule = FUNC_1(FUNC_9(&VAR_6->exts));
 if (!VAR_9.rule)
  return -VAR_1;

 FUNC_5(&VAR_9.common, VAR_5, VAR_6->flags, VAR_8);
 VAR_9.command = VAR_3;
 VAR_9.cookie = VAR_7;

 VAR_12 = FUNC_7(&VAR_9.rule->action, &VAR_6->exts, 1);
 if (VAR_12) {
  FUNC_2(VAR_9.rule);
  FUNC_3(VAR_5, VAR_6, VAR_7, ((void*)0));
  if (VAR_11)
   FUNC_0(VAR_8, "Failed to setup flow action");
  else
   VAR_12 = 0;

  return VAR_12;
 }

 VAR_12 = FUNC_6(VAR_10, VAR_5, VAR_4, &VAR_9,
         VAR_11, &VAR_6->flags, &VAR_6->in_hw_count, 1);
 FUNC_4(&VAR_9.rule->action);
 FUNC_2(VAR_9.rule);

 if (VAR_12) {
  FUNC_3(VAR_5, VAR_6, VAR_7, ((void*)0));
  return VAR_12;
 }

 if (VAR_11 && !(VAR_6->flags & VAR_2))
  return -VAR_0;

 return 0;
}
