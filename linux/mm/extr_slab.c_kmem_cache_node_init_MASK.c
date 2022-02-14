
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmem_cache_node {scalar_t__ free_touched; scalar_t__ free_objects; int list_lock; scalar_t__ colour_next; int * alien; int * shared; scalar_t__ free_slabs; scalar_t__ total_slabs; int slabs_free; int slabs_partial; int slabs_full; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct kmem_cache_node *VAR_0)
{
 FUNC_0(&VAR_0->slabs_full);
 FUNC_0(&VAR_0->slabs_partial);
 FUNC_0(&VAR_0->slabs_free);
 VAR_0->total_slabs = 0;
 VAR_0->free_slabs = 0;
 VAR_0->shared = ((void*)0);
 VAR_0->alien = ((void*)0);
 VAR_0->colour_next = 0;
 FUNC_1(&VAR_0->list_lock);
 VAR_0->free_objects = 0;
 VAR_0->free_touched = 0;
}
