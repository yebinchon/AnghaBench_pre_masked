
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct genpool_data_align {int align; } ;
struct gen_pool {int dummy; } ;
typedef int dma_addr_t ;


 void* FUNC_0 (struct gen_pool*,size_t,int *,int ,struct genpool_data_align*) ;
 int VAR_0 ;

void *FUNC_1(struct gen_pool *VAR_1, size_t VAR_2,
  dma_addr_t *VAR_3, int VAR_4)
{
 struct genpool_data_align VAR_5 = { .align = VAR_4 };

 return FUNC_0(VAR_1, VAR_2, VAR_3,
   VAR_0, &VAR_5);
}
