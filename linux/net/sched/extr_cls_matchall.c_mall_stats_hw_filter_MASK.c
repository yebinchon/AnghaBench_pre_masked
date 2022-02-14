
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tcf_proto {TYPE_2__* chain; } ;
struct tcf_block {int dummy; } ;
struct TYPE_3__ {int lastused; int pkts; int bytes; } ;
struct tc_cls_matchall_offload {unsigned long cookie; TYPE_1__ stats; int command; int common; } ;
struct cls_mall_head {int exts; int flags; } ;
struct TYPE_4__ {struct tcf_block* block; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct tcf_proto*,int ,int *) ;
 int FUNC_1 (struct tcf_block*,int ,struct tc_cls_matchall_offload*,int,int) ;
 int FUNC_2 (int *,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct tcf_proto *VAR_2,
     struct cls_mall_head *VAR_3,
     unsigned long VAR_4)
{
 struct tc_cls_matchall_offload VAR_5 = {};
 struct tcf_block *VAR_6 = VAR_2->chain->block;

 FUNC_0(&VAR_5.common, VAR_2, VAR_3->flags, ((void*)0));
 VAR_5.command = VAR_0;
 VAR_5.cookie = VAR_4;

 FUNC_1(VAR_6, VAR_1, &VAR_5, 0, 1);

 FUNC_2(&VAR_3->exts, VAR_5.stats.bytes,
         VAR_5.stats.pkts, VAR_5.stats.lastused);
}
