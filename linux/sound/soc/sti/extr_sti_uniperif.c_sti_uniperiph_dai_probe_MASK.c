
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int addr_width; int addr; } ;
struct sti_uniperiph_dai {scalar_t__ stream; TYPE_2__ dma_data; TYPE_1__* uni; } ;
struct sti_uniperiph_data {struct sti_uniperiph_dai dai_data; } ;
struct snd_soc_dai {int dummy; } ;
struct TYPE_4__ {int fifo_phys_address; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct sti_uniperiph_data* FUNC_0 (struct snd_soc_dai*) ;
 int FUNC_1 (struct snd_soc_dai*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_2 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_2)
{
 struct sti_uniperiph_data *VAR_3 = FUNC_0(VAR_2);
 struct sti_uniperiph_dai *VAR_4 = &VAR_3->dai_data;


 if (VAR_3->dai_data.stream == VAR_1)
  FUNC_1(VAR_2, &VAR_4->dma_data, ((void*)0));
 else
  FUNC_1(VAR_2, ((void*)0), &VAR_4->dma_data);

 VAR_4->dma_data.addr = VAR_4->uni->fifo_phys_address;
 VAR_4->dma_data.addr_width = VAR_0;

 return FUNC_2(VAR_2);
}
