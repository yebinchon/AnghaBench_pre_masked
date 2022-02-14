
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcf_proto {TYPE_1__* chain; } ;
struct tcf_block {int dummy; } ;
struct tc_cls_bpf_offload {int exts_integrated; int name; int * oldprog; int * prog; int * exts; int command; int common; } ;
struct netlink_ext_ack {int dummy; } ;
struct cls_bpf_prog {int gen_flags; int in_hw_count; int exts_integrated; int bpf_name; int * filter; int exts; } ;
struct TYPE_2__ {struct tcf_block* block; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,struct tcf_proto*,int,struct netlink_ext_ack*) ;
 int FUNC_1 (struct tcf_block*,struct tcf_proto*,int ,struct tc_cls_bpf_offload*,int,int*,int *,int) ;
 int FUNC_2 (struct tcf_block*,struct tcf_proto*,int ,struct tc_cls_bpf_offload*,int,int*,int *,int) ;
 int FUNC_3 (struct tcf_block*,struct tcf_proto*,int ,struct tc_cls_bpf_offload*,int,int*,int *,int*,int *,int) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct tcf_proto *VAR_4, struct cls_bpf_prog *VAR_5,
          struct cls_bpf_prog *VAR_6,
          struct netlink_ext_ack *VAR_7)
{
 struct tcf_block *VAR_8 = VAR_4->chain->block;
 struct tc_cls_bpf_offload VAR_9 = {};
 struct cls_bpf_prog *VAR_10;
 bool VAR_11;
 int VAR_12;

 VAR_11 = VAR_5 && FUNC_4(VAR_5->gen_flags);
 VAR_10 = VAR_5 ?: VAR_6;

 FUNC_0(&VAR_9.common, VAR_4, VAR_10->gen_flags, VAR_7);
 VAR_9.command = VAR_2;
 VAR_9.exts = &VAR_10->exts;
 VAR_9.prog = VAR_5 ? VAR_5->filter : ((void*)0);
 VAR_9.oldprog = VAR_6 ? VAR_6->filter : ((void*)0);
 VAR_9.name = VAR_10->bpf_name;
 VAR_9.exts_integrated = VAR_10->exts_integrated;

 if (VAR_6 && VAR_5)
  VAR_12 = FUNC_3(VAR_8, VAR_4, VAR_3, &VAR_9,
       VAR_11, &VAR_6->gen_flags,
       &VAR_6->in_hw_count,
       &VAR_5->gen_flags, &VAR_5->in_hw_count,
       1);
 else if (VAR_5)
  VAR_12 = FUNC_1(VAR_8, VAR_4, VAR_3, &VAR_9,
          VAR_11, &VAR_5->gen_flags,
          &VAR_5->in_hw_count, 1);
 else
  VAR_12 = FUNC_2(VAR_8, VAR_4, VAR_3, &VAR_9,
       VAR_11, &VAR_6->gen_flags,
       &VAR_6->in_hw_count, 1);

 if (VAR_5 && VAR_12) {
  FUNC_5(VAR_4, VAR_6, VAR_5, VAR_7);
  return VAR_12;
 }

 if (VAR_5 && VAR_11 && !(VAR_5->gen_flags & VAR_1))
  return -VAR_0;

 return 0;
}
