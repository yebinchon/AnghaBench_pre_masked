
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_pool {unsigned int allocation; int lock; int size; int name; scalar_t__ dev; } ;
struct dma_page {void* vaddr; unsigned int dma; unsigned int offset; int in_use; } ;
typedef unsigned int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,char*,int ,unsigned int*,...) ;
 int FUNC_1 (void*,int ,int ) ;
 struct dma_page* FUNC_2 (struct dma_pool*,unsigned int) ;
 int FUNC_3 (char*,int ,unsigned int*,...) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ FUNC_6 () ;

void FUNC_7(struct dma_pool *VAR_1, void *VAR_2, dma_addr_t VAR_3)
{
 struct dma_page *VAR_4;
 unsigned long VAR_5;
 unsigned int VAR_6;

 FUNC_4(&VAR_1->lock, VAR_5);
 VAR_4 = FUNC_2(VAR_1, VAR_3);
 if (!VAR_4) {
  FUNC_5(&VAR_1->lock, VAR_5);
  if (VAR_1->dev)
   FUNC_0(VAR_1->dev,
    "dma_pool_free %s, %p/%lx (bad dma)\n",
    VAR_1->name, VAR_2, (unsigned long)VAR_3);
  else
   FUNC_3("dma_pool_free %s, %p/%lx (bad dma)\n",
          VAR_1->name, VAR_2, (unsigned long)VAR_3);
  return;
 }

 VAR_6 = VAR_2 - VAR_4->vaddr;
 if (FUNC_6())
  FUNC_1(VAR_2, 0, VAR_1->size);
 VAR_4->in_use--;
 *(int *)VAR_2 = VAR_4->offset;
 VAR_4->offset = VAR_6;





 FUNC_5(&VAR_1->lock, VAR_5);
}
