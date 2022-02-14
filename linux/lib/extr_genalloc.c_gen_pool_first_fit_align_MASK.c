
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct genpool_data_align {unsigned long align; } ;
struct gen_pool {int min_alloc_order; } ;


 unsigned long FUNC_0 (unsigned long*,unsigned long,unsigned long,unsigned int,unsigned long,unsigned long) ;

unsigned long FUNC_1(unsigned long *VAR_0, unsigned long VAR_1,
  unsigned long VAR_2, unsigned int VAR_3, void *VAR_4,
  struct gen_pool *VAR_5, unsigned long VAR_6)
{
 struct genpool_data_align *VAR_7;
 unsigned long VAR_8, VAR_9;
 int VAR_10;

 VAR_7 = VAR_4;
 VAR_10 = VAR_5->min_alloc_order;
 VAR_8 = ((VAR_7->align + (1UL << VAR_10) - 1) >> VAR_10) - 1;
 VAR_9 = (VAR_6 & (VAR_7->align - 1)) >> VAR_10;

 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3,
           VAR_8, VAR_9);
}
