
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int maxburst; scalar_t__ addr; } ;
struct zx_spdif_info {TYPE_1__ dma_data; scalar_t__ mapbase; } ;
struct snd_soc_dai {int dev; } ;


 scalar_t__ VAR_0 ;
 struct zx_spdif_info* FUNC_0 (int ) ;
 int FUNC_1 (struct snd_soc_dai*,TYPE_1__*,int *) ;
 int FUNC_2 (struct snd_soc_dai*,struct zx_spdif_info*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_1)
{
 struct zx_spdif_info *VAR_2 = FUNC_0(VAR_1->dev);

 FUNC_2(VAR_1, VAR_2);
 VAR_2->dma_data.addr = VAR_2->mapbase + VAR_0;
 VAR_2->dma_data.maxburst = 8;
 FUNC_1(VAR_1, &VAR_2->dma_data, ((void*)0));
 return 0;
}
