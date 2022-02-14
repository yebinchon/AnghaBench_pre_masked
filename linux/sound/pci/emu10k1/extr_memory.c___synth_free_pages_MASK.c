
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_emu10k1 {int ** page_ptr_table; scalar_t__* page_addr_table; scalar_t__ iommu_workaround; int pci; } ;
struct TYPE_2__ {int dev; int type; } ;
struct snd_dma_buffer {int bytes; scalar_t__ addr; int * area; TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_dma_buffer*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct snd_emu10k1 *VAR_2, int VAR_3,
          int VAR_4)
{
 struct snd_dma_buffer VAR_5;
 int VAR_6;

 VAR_5.dev.type = VAR_1;
 VAR_5.dev.dev = FUNC_1(VAR_2->pci);

 for (VAR_6 = VAR_3; VAR_6 <= VAR_4; VAR_6++) {
  if (VAR_2->page_ptr_table[VAR_6] == ((void*)0))
   continue;
  VAR_5.area = VAR_2->page_ptr_table[VAR_6];
  VAR_5.addr = VAR_2->page_addr_table[VAR_6];





  VAR_5.bytes = VAR_0;
  if (VAR_2->iommu_workaround)
   VAR_5.bytes *= 2;

  FUNC_0(&VAR_5);
  VAR_2->page_addr_table[VAR_6] = 0;
  VAR_2->page_ptr_table[VAR_6] = ((void*)0);
 }
}
