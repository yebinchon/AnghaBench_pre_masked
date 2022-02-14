
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_chain {int filter_chain_lock; struct tcf_block* block; } ;
struct tcf_block {int dummy; } ;


 int FUNC_0 (struct tcf_chain*,int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (struct tcf_block*) ;

__attribute__((used)) static void FUNC_3(struct tcf_chain *VAR_1, bool VAR_2)
{
 struct tcf_block *VAR_3 = VAR_1->block;

 FUNC_1(&VAR_1->filter_chain_lock);
 FUNC_0(VAR_1, VAR_0);
 if (VAR_2)
  FUNC_2(VAR_3);
}
