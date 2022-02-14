
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tcf_proto {TYPE_3__* chain; } ;
struct tcf_block {int dummy; } ;
struct TYPE_5__ {int lastused; int pkts; int bytes; } ;
struct flow_cls_offload {unsigned long cookie; TYPE_2__ stats; int classid; int command; int common; } ;
struct TYPE_4__ {int classid; } ;
struct cls_fl_filter {int exts; TYPE_1__ res; int flags; } ;
struct TYPE_6__ {struct tcf_block* block; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct tcf_proto*,int ,int *) ;
 int FUNC_1 (struct tcf_block*,int ,struct flow_cls_offload*,int,int) ;
 int FUNC_2 (int *,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct tcf_proto *VAR_2, struct cls_fl_filter *VAR_3,
          bool VAR_4)
{
 struct tcf_block *VAR_5 = VAR_2->chain->block;
 struct flow_cls_offload VAR_6 = {};

 FUNC_0(&VAR_6.common, VAR_2, VAR_3->flags, ((void*)0));
 VAR_6.command = VAR_0;
 VAR_6.cookie = (unsigned long) VAR_3;
 VAR_6.classid = VAR_3->res.classid;

 FUNC_1(VAR_5, VAR_1, &VAR_6, 0,
    VAR_4);

 FUNC_2(&VAR_3->exts, VAR_6.stats.bytes,
         VAR_6.stats.pkts,
         VAR_6.stats.lastused);
}
