
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gen_pool_chunk {unsigned long start_addr; unsigned long end_addr; int next_chunk; int avail; void* owner; int phys_addr; } ;
struct gen_pool {size_t min_alloc_order; int lock; int chunks; } ;
typedef int phys_addr_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,size_t) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;
 struct gen_pool_chunk* FUNC_6 (int,int) ;

int FUNC_7(struct gen_pool *VAR_1, unsigned long VAR_2, phys_addr_t VAR_3,
   size_t VAR_4, int VAR_5, void *VAR_6)
{
 struct gen_pool_chunk *VAR_7;
 int VAR_8 = VAR_4 >> VAR_1->min_alloc_order;
 int VAR_9 = sizeof(struct gen_pool_chunk) +
    FUNC_0(VAR_8) * sizeof(long);

 VAR_7 = FUNC_6(VAR_9, VAR_5);
 if (FUNC_5(VAR_7 == ((void*)0)))
  return -VAR_0;

 VAR_7->phys_addr = VAR_3;
 VAR_7->start_addr = VAR_2;
 VAR_7->end_addr = VAR_2 + VAR_4 - 1;
 VAR_7->owner = VAR_6;
 FUNC_1(&VAR_7->avail, VAR_4);

 FUNC_3(&VAR_1->lock);
 FUNC_2(&VAR_7->next_chunk, &VAR_1->chunks);
 FUNC_4(&VAR_1->lock);

 return 0;
}
