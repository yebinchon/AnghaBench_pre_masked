
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btree_head {int * mempool; int node; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;

void FUNC_2(struct btree_head *VAR_0)
{
 FUNC_1(VAR_0->node, VAR_0->mempool);
 FUNC_0(VAR_0->mempool);
 VAR_0->mempool = ((void*)0);
}
