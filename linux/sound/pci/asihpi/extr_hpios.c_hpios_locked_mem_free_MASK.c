
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct consistent_dma_area {scalar_t__ size; int vaddr; scalar_t__ dma_handle; int pdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,unsigned long,unsigned int,int ) ;
 int FUNC_1 (int ,scalar_t__,int ,scalar_t__) ;

u16 FUNC_2(struct consistent_dma_area *VAR_1)
{
 if (VAR_1->size) {
  FUNC_1(VAR_1->pdev, VAR_1->size,
   VAR_1->vaddr, VAR_1->dma_handle);
  FUNC_0(VAR_0, "freed %lu bytes, dma 0x%x vma %p\n",
   (unsigned long)VAR_1->size,
   (unsigned int)VAR_1->dma_handle,
   VAR_1->vaddr);
  VAR_1->size = 0;
  return 0;
 } else {
  return 1;
 }
}
