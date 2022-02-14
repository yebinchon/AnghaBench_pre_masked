
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {scalar_t__ playback_dma_data; scalar_t__ capture_dma_data; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_0)
{
 if (VAR_0->capture_dma_data)
  FUNC_0(VAR_0->capture_dma_data);

 if (VAR_0->playback_dma_data)
  FUNC_0(VAR_0->playback_dma_data);

 return 0;
}
