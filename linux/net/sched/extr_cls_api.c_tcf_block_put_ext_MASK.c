
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_block_ext_info {int binder_type; } ;
struct tcf_block {int dummy; } ;
struct Qdisc {int dummy; } ;


 int FUNC_0 (struct tcf_block*,struct Qdisc*,struct tcf_block_ext_info*,int) ;
 int FUNC_1 (struct tcf_block*,struct Qdisc*,int ) ;
 int FUNC_2 (struct tcf_block*,struct tcf_block_ext_info*) ;

void FUNC_3(struct tcf_block *VAR_0, struct Qdisc *VAR_1,
         struct tcf_block_ext_info *VAR_2)
{
 if (!VAR_0)
  return;
 FUNC_2(VAR_0, VAR_2);
 FUNC_1(VAR_0, VAR_1, VAR_2->binder_type);

 FUNC_0(VAR_0, VAR_1, VAR_2, 1);
}
