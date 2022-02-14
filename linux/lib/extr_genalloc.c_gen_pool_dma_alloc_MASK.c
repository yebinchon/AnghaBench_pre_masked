
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gen_pool {int data; int algo; } ;
typedef int dma_addr_t ;


 void* FUNC_0 (struct gen_pool*,size_t,int *,int ,int ) ;

void *FUNC_1(struct gen_pool *VAR_0, size_t VAR_1, dma_addr_t *VAR_2)
{
 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_0->algo, VAR_0->data);
}
