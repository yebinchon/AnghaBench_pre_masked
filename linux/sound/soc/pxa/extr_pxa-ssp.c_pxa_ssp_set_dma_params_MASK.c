
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssp_device {scalar_t__ phys_base; } ;
struct snd_dmaengine_dai_dma_data {int maxburst; scalar_t__ addr; int addr_width; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_0(struct ssp_device *VAR_3, int VAR_4,
   int VAR_5, struct snd_dmaengine_dai_dma_data *VAR_6)
{
 VAR_6->addr_width = VAR_4 ? VAR_1 :
       VAR_0;
 VAR_6->maxburst = 16;
 VAR_6->addr = VAR_3->phys_base + VAR_2;
}
