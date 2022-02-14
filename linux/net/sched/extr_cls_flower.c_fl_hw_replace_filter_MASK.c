
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct tcf_proto {TYPE_1__* chain; } ;
struct tcf_block {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct flow_cls_offload {unsigned long cookie; TYPE_5__* rule; int classid; int command; int common; } ;
struct TYPE_10__ {int classid; } ;
struct cls_fl_filter {int flags; int in_hw_count; int exts; TYPE_4__ res; int mkey; TYPE_2__* mask; } ;
struct TYPE_9__ {int * key; int * mask; int * dissector; } ;
struct TYPE_11__ {int action; TYPE_3__ match; } ;
struct TYPE_8__ {int key; int dissector; } ;
struct TYPE_7__ {struct tcf_block* block; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct tcf_proto*,struct cls_fl_filter*,int,int *) ;
 TYPE_5__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,struct tcf_proto*,int,struct netlink_ext_ack*) ;
 int FUNC_6 (struct tcf_block*,struct tcf_proto*,int ,struct flow_cls_offload*,int,int*,int *,int) ;
 int FUNC_7 (int *,int *,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct tcf_proto *VAR_5,
    struct cls_fl_filter *VAR_6, bool VAR_7,
    struct netlink_ext_ack *VAR_8)
{
 struct tcf_block *VAR_9 = VAR_5->chain->block;
 struct flow_cls_offload VAR_10 = {};
 bool VAR_11 = FUNC_8(VAR_6->flags);
 int VAR_12 = 0;

 VAR_10.rule = FUNC_2(FUNC_9(&VAR_6->exts));
 if (!VAR_10.rule)
  return -VAR_1;

 FUNC_5(&VAR_10.common, VAR_5, VAR_6->flags, VAR_8);
 VAR_10.command = VAR_2;
 VAR_10.cookie = (unsigned long) VAR_6;
 VAR_10.rule->match.dissector = &VAR_6->mask->dissector;
 VAR_10.rule->match.mask = &VAR_6->mask->key;
 VAR_10.rule->match.key = &VAR_6->mkey;
 VAR_10.classid = VAR_6->res.classid;

 VAR_12 = FUNC_7(&VAR_10.rule->action, &VAR_6->exts,
       VAR_7);
 if (VAR_12) {
  FUNC_3(VAR_10.rule);
  if (VAR_11) {
   FUNC_0(VAR_8, "Failed to setup flow action");
   return VAR_12;
  }
  return 0;
 }

 VAR_12 = FUNC_6(VAR_9, VAR_5, VAR_4, &VAR_10,
         VAR_11, &VAR_6->flags, &VAR_6->in_hw_count, VAR_7);
 FUNC_4(&VAR_10.rule->action);
 FUNC_3(VAR_10.rule);

 if (VAR_12) {
  FUNC_1(VAR_5, VAR_6, VAR_7, ((void*)0));
  return VAR_12;
 }

 if (VAR_11 && !(VAR_6->flags & VAR_3))
  return -VAR_0;

 return 0;
}
