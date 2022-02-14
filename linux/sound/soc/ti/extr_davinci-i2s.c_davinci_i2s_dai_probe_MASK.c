
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int * capture_dma_data; int * playback_dma_data; } ;
struct davinci_mcbsp_dev {int * dma_data; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 struct davinci_mcbsp_dev* FUNC_0 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_2)
{
 struct davinci_mcbsp_dev *VAR_3 = FUNC_0(VAR_2);

 VAR_2->playback_dma_data = &VAR_3->dma_data[VAR_1];
 VAR_2->capture_dma_data = &VAR_3->dma_data[VAR_0];

 return 0;
}
