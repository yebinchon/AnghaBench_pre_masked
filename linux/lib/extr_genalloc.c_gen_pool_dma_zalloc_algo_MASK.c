
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gen_pool {int dummy; } ;
typedef int genpool_algo_t ;
typedef int dma_addr_t ;


 void* FUNC_0 (struct gen_pool*,size_t,int *,int ,void*) ;
 int FUNC_1 (void*,int ,size_t) ;

void *FUNC_2(struct gen_pool *VAR_0, size_t VAR_1,
  dma_addr_t *VAR_2, genpool_algo_t VAR_3, void *VAR_4)
{
 void *VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);

 if (VAR_5)
  FUNC_1(VAR_5, 0, VAR_1);

 return VAR_5;
}
