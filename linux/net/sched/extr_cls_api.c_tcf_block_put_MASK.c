
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_block_ext_info {int member_0; } ;
struct tcf_block {int q; } ;


 int FUNC_0 (struct tcf_block*,int ,struct tcf_block_ext_info*) ;

void FUNC_1(struct tcf_block *VAR_0)
{
 struct tcf_block_ext_info VAR_1 = {0, };

 if (!VAR_0)
  return;
 FUNC_0(VAR_0, VAR_0->q, &VAR_1);
}
