
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct pci_dev {int dev; } ;
struct consistent_dma_area {scalar_t__ size; int * pdev; scalar_t__ vaddr; scalar_t__ dma_handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,scalar_t__,...) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *,scalar_t__,scalar_t__*,int ) ;

u16 FUNC_2(struct consistent_dma_area *VAR_3, u32 VAR_4,
 struct pci_dev *VAR_5)
{

 VAR_3->vaddr =
  FUNC_1(&VAR_5->dev, VAR_4, &VAR_3->dma_handle,
  VAR_1);

 if (VAR_3->vaddr) {
  FUNC_0(VAR_0, "allocated %d bytes, dma 0x%x vma %p\n",
   VAR_4, (unsigned int)VAR_3->dma_handle,
   VAR_3->vaddr);
  VAR_3->pdev = &VAR_5->dev;
  VAR_3->size = VAR_4;
  return 0;
 } else {
  FUNC_0(VAR_2,
   "failed to allocate %d bytes locked memory\n", VAR_4);
  VAR_3->size = 0;
  return 1;
 }
}
