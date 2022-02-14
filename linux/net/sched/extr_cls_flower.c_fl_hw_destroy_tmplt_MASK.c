
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcf_chain {int index; struct tcf_block* block; } ;
struct tcf_block {int dummy; } ;
struct TYPE_2__ {int chain_index; } ;
struct flow_cls_offload {unsigned long cookie; int command; TYPE_1__ common; } ;
struct fl_flow_tmplt {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tcf_block*,int ,struct flow_cls_offload*,int,int) ;

__attribute__((used)) static void FUNC_1(struct tcf_chain *VAR_2,
    struct fl_flow_tmplt *VAR_3)
{
 struct flow_cls_offload VAR_4 = {};
 struct tcf_block *VAR_5 = VAR_2->block;

 VAR_4.common.chain_index = VAR_2->index;
 VAR_4.command = VAR_0;
 VAR_4.cookie = (unsigned long) VAR_3;

 FUNC_0(VAR_5, VAR_1, &VAR_4, 0, 1);
}
