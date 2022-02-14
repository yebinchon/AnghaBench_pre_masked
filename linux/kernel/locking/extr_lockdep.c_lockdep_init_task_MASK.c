
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {scalar_t__ lockdep_recursion; int curr_chain_key; scalar_t__ lockdep_depth; } ;


 int VAR_0 ;

void FUNC_0(struct task_struct *VAR_1)
{
 VAR_1->lockdep_depth = 0;
 VAR_1->curr_chain_key = VAR_0;
 VAR_1->lockdep_recursion = 0;
}
