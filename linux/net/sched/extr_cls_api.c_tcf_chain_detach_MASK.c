
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcf_chain {int index; int list; struct tcf_block* block; } ;
struct TYPE_2__ {int * chain; } ;
struct tcf_block {int refcnt; int chain_list; TYPE_1__ chain0; } ;


 int FUNC_0 (struct tcf_block*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static bool FUNC_4(struct tcf_chain *VAR_0)
{
 struct tcf_block *VAR_1 = VAR_0->block;

 FUNC_0(VAR_1);

 FUNC_1(&VAR_0->list);
 if (!VAR_0->index)
  VAR_1->chain0.chain = ((void*)0);

 if (FUNC_2(&VAR_1->chain_list) &&
     FUNC_3(&VAR_1->refcnt) == 0)
  return 1;

 return 0;
}
