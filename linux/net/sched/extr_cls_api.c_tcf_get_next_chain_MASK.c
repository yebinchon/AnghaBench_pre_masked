
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_chain {int dummy; } ;
struct tcf_block {int dummy; } ;


 struct tcf_chain* FUNC_0 (struct tcf_block*,struct tcf_chain*) ;
 int FUNC_1 (struct tcf_chain*) ;

struct tcf_chain *
FUNC_2(struct tcf_block *VAR_0, struct tcf_chain *VAR_1)
{
 struct tcf_chain *VAR_2 = FUNC_0(VAR_0, VAR_1);

 if (VAR_1)
  FUNC_1(VAR_1);

 return VAR_2;
}
