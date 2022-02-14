
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct genpool_data_fixed {int offset; } ;
struct gen_pool {int min_alloc_order; } ;


 scalar_t__ FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (unsigned long*,unsigned long,unsigned long,unsigned int,int ) ;

unsigned long FUNC_2(unsigned long *VAR_0, unsigned long VAR_1,
  unsigned long VAR_2, unsigned int VAR_3, void *VAR_4,
  struct gen_pool *VAR_5, unsigned long VAR_6)
{
 struct genpool_data_fixed *VAR_7;
 int VAR_8;
 unsigned long VAR_9;
 unsigned long VAR_10;

 VAR_7 = VAR_4;
 VAR_8 = VAR_5->min_alloc_order;
 VAR_9 = VAR_7->offset >> VAR_8;
 if (FUNC_0(VAR_7->offset & ((1UL << VAR_8) - 1)))
  return VAR_1;

 VAR_10 = FUNC_1(VAR_0, VAR_1,
   VAR_2 + VAR_9, VAR_3, 0);
 if (VAR_10 != VAR_9)
  VAR_10 = VAR_1;
 return VAR_10;
}
