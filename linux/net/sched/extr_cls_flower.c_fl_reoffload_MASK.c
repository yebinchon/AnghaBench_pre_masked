
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
struct cls_fl_filter {int in_hw_count; int flags; TYPE_4__ res; int exts; int mkey; TYPE_2__* mask; } ;
typedef int flow_setup_cb_t ;
struct TYPE_9__ {int * key; int * mask; int * dissector; } ;
struct TYPE_11__ {int action; TYPE_3__ match; } ;
struct TYPE_8__ {int key; int dissector; } ;
struct TYPE_7__ {struct tcf_block* block; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct netlink_ext_ack*,char*) ;
 int VAR_3 ;
 int FUNC_2 (struct cls_fl_filter*) ;
 struct cls_fl_filter* FUNC_3 (struct tcf_proto*,struct cls_fl_filter*,int) ;
 TYPE_5__* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,struct tcf_proto*,int ,struct netlink_ext_ack*) ;
 int FUNC_8 (struct tcf_block*,struct tcf_proto*,int,int *,int ,struct flow_cls_offload*,void*,int *,int *) ;
 int FUNC_9 (int *,int *,int) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct tcf_proto *VAR_4, bool VAR_5, flow_setup_cb_t *VAR_6,
   void *VAR_7, struct netlink_ext_ack *VAR_8)
{
 struct tcf_block *VAR_9 = VAR_4->chain->block;
 struct flow_cls_offload VAR_10 = {};
 struct cls_fl_filter *VAR_11 = ((void*)0);
 int VAR_12;





 FUNC_0();

 while ((VAR_11 = FUNC_3(VAR_4, VAR_11, VAR_5))) {
  VAR_10.rule =
   FUNC_4(FUNC_11(&VAR_11->exts));
  if (!VAR_10.rule) {
   FUNC_2(VAR_11);
   return -VAR_0;
  }

  FUNC_7(&VAR_10.common, VAR_4, VAR_11->flags,
        VAR_8);
  VAR_10.command = VAR_5 ?
   VAR_2 : VAR_1;
  VAR_10.cookie = (unsigned long)VAR_11;
  VAR_10.rule->match.dissector = &VAR_11->mask->dissector;
  VAR_10.rule->match.mask = &VAR_11->mask->key;
  VAR_10.rule->match.key = &VAR_11->mkey;

  VAR_12 = FUNC_9(&VAR_10.rule->action, &VAR_11->exts,
        1);
  if (VAR_12) {
   FUNC_5(VAR_10.rule);
   if (FUNC_10(VAR_11->flags)) {
    FUNC_1(VAR_8, "Failed to setup flow action");
    FUNC_2(VAR_11);
    return VAR_12;
   }
   goto next_flow;
  }

  VAR_10.classid = VAR_11->res.classid;

  VAR_12 = FUNC_8(VAR_9, VAR_4, VAR_5, VAR_6,
         VAR_3, &VAR_10,
         VAR_7, &VAR_11->flags,
         &VAR_11->in_hw_count);
  FUNC_6(&VAR_10.rule->action);
  FUNC_5(VAR_10.rule);

  if (VAR_12) {
   FUNC_2(VAR_11);
   return VAR_12;
  }
next_flow:
  FUNC_2(VAR_11);
 }

 return 0;
}
