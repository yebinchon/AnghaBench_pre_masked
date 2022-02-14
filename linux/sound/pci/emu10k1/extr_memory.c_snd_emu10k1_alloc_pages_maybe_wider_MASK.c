
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_emu10k1 {int pci; scalar_t__ iommu_workaround; } ;
struct snd_dma_buffer {int dummy; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,size_t,struct snd_dma_buffer*) ;
 int FUNC_1 (int ) ;

int FUNC_2(struct snd_emu10k1 *VAR_2, size_t VAR_3,
     struct snd_dma_buffer *VAR_4)
{
 if (VAR_2->iommu_workaround) {
  size_t VAR_5 = (VAR_3 + VAR_0 - 1) / VAR_0;
  size_t VAR_6 = VAR_5 * VAR_0;





  if (VAR_6 < VAR_3 + 1024)
   VAR_3 += VAR_0;
 }

 return FUNC_0(VAR_1,
       FUNC_1(VAR_2->pci), VAR_3, VAR_4);
}
