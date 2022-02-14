
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_emu10k1 {int dma_mask; TYPE_1__* card; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;

__attribute__((used)) static int FUNC_1(struct snd_emu10k1 *VAR_1, dma_addr_t VAR_2)
{
 if (VAR_2 & ~VAR_1->dma_mask) {
  FUNC_0(VAR_1->card->dev,
   "max memory size is 0x%lx (addr = 0x%lx)!!\n",
   VAR_1->dma_mask, (unsigned long)VAR_2);
  return 0;
 }
 if (VAR_2 & (VAR_0-1)) {
  FUNC_0(VAR_1->card->dev, "page is not aligned\n");
  return 0;
 }
 return 1;
}
