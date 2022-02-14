
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gen_pool {int dummy; } ;
typedef int genpool_algo_t ;
typedef int dma_addr_t ;


 unsigned long FUNC_0 (struct gen_pool*,size_t,int ,void*) ;
 int FUNC_1 (struct gen_pool*,unsigned long) ;

void *FUNC_2(struct gen_pool *VAR_0, size_t VAR_1,
  dma_addr_t *VAR_2, genpool_algo_t VAR_3, void *VAR_4)
{
 unsigned long VAR_5;

 if (!VAR_0)
  return ((void*)0);

 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_3, VAR_4);
 if (!VAR_5)
  return ((void*)0);

 if (VAR_2)
  *VAR_2 = FUNC_1(VAR_0, VAR_5);

 return (void *)VAR_5;
}
