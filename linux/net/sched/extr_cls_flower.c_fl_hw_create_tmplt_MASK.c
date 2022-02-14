
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tcf_chain {int index; struct tcf_block* block; } ;
struct tcf_block {int dummy; } ;
struct TYPE_5__ {int chain_index; } ;
struct flow_cls_offload {unsigned long cookie; TYPE_3__* rule; int command; TYPE_1__ common; } ;
struct fl_flow_tmplt {int dummy_key; int mask; int dissector; } ;
struct TYPE_6__ {int * key; int * mask; int * dissector; } ;
struct TYPE_7__ {TYPE_2__ match; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (struct tcf_block*,int ,struct flow_cls_offload*,int,int) ;

__attribute__((used)) static int FUNC_3(struct tcf_chain *VAR_3,
         struct fl_flow_tmplt *VAR_4)
{
 struct flow_cls_offload VAR_5 = {};
 struct tcf_block *VAR_6 = VAR_3->block;

 VAR_5.rule = FUNC_0(0);
 if (!VAR_5.rule)
  return -VAR_0;

 VAR_5.common.chain_index = VAR_3->index;
 VAR_5.command = VAR_1;
 VAR_5.cookie = (unsigned long) VAR_4;
 VAR_5.rule->match.dissector = &VAR_4->dissector;
 VAR_5.rule->match.mask = &VAR_4->mask;
 VAR_5.rule->match.key = &VAR_4->dummy_key;




 FUNC_2(VAR_6, VAR_2, &VAR_5, 0, 1);
 FUNC_1(VAR_5.rule);

 return 0;
}
