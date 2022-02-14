
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int maxburst; scalar_t__ addr; } ;
struct stm32_spdifrx_data {TYPE_1__ dma_params; scalar_t__ phys_addr; } ;
struct snd_soc_dai {int dev; } ;
typedef scalar_t__ dma_addr_t ;


 scalar_t__ VAR_0 ;
 struct stm32_spdifrx_data* FUNC_0 (int ) ;
 int FUNC_1 (struct snd_soc_dai*,int *,TYPE_1__*) ;
 int FUNC_2 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_1)
{
 struct stm32_spdifrx_data *VAR_2 = FUNC_0(VAR_1->dev);

 VAR_2->dma_params.addr = (dma_addr_t)(VAR_2->phys_addr +
       VAR_0);
 VAR_2->dma_params.maxburst = 1;

 FUNC_1(VAR_1, ((void*)0), &VAR_2->dma_params);

 return FUNC_2(VAR_1);
}
