
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cma_mem {int node; } ;
struct cma {int mem_head_lock; int mem_head; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct cma *VAR_0, struct cma_mem *VAR_1)
{
 FUNC_1(&VAR_0->mem_head_lock);
 FUNC_0(&VAR_1->node, &VAR_0->mem_head);
 FUNC_2(&VAR_0->mem_head_lock);
}
