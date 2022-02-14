
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcf_proto {TYPE_1__* chain; } ;
struct tcf_block {int dummy; } ;
struct tc_cls_bpf_offload {int exts_integrated; int name; int prog; int * exts; int command; int common; } ;
struct cls_bpf_prog {int exts_integrated; int bpf_name; int filter; int exts; int gen_flags; } ;
struct TYPE_2__ {struct tcf_block* block; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct tcf_proto*,int ,int *) ;
 int FUNC_1 (struct tcf_block*,int ,struct tc_cls_bpf_offload*,int,int) ;

__attribute__((used)) static void FUNC_2(struct tcf_proto *VAR_2,
      struct cls_bpf_prog *VAR_3)
{
 struct tcf_block *VAR_4 = VAR_2->chain->block;
 struct tc_cls_bpf_offload VAR_5 = {};

 FUNC_0(&VAR_5.common, VAR_2, VAR_3->gen_flags, ((void*)0));
 VAR_5.command = VAR_0;
 VAR_5.exts = &VAR_3->exts;
 VAR_5.prog = VAR_3->filter;
 VAR_5.name = VAR_3->bpf_name;
 VAR_5.exts_integrated = VAR_3->exts_integrated;

 FUNC_1(VAR_4, VAR_1, &VAR_5, 0, 1);
}
