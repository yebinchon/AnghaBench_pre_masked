
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tcf_chain {int refcnt; int index; struct tcf_block* block; int filter_chain_lock; int list; } ;
struct TYPE_2__ {struct tcf_chain* chain; } ;
struct tcf_block {TYPE_1__ chain0; int chain_list; } ;


 int FUNC_0 (struct tcf_block*) ;
 int VAR_0 ;
 struct tcf_chain* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct tcf_chain *FUNC_4(struct tcf_block *VAR_1,
       u32 VAR_2)
{
 struct tcf_chain *VAR_3;

 FUNC_0(VAR_1);

 VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);
 FUNC_2(&VAR_3->list, &VAR_1->chain_list);
 FUNC_3(&VAR_3->filter_chain_lock);
 VAR_3->block = VAR_1;
 VAR_3->index = VAR_2;
 VAR_3->refcnt = 1;
 if (!VAR_3->index)
  VAR_1->chain0.chain = VAR_3;
 return VAR_3;
}
