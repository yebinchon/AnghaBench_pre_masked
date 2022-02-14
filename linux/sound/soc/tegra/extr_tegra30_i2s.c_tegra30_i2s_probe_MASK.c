
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra30_i2s {int playback_dma_data; int capture_dma_data; } ;
struct snd_soc_dai {int * playback_dma_data; int * capture_dma_data; } ;


 struct tegra30_i2s* FUNC_0 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_0)
{
 struct tegra30_i2s *VAR_1 = FUNC_0(VAR_0);

 VAR_0->capture_dma_data = &VAR_1->capture_dma_data;
 VAR_0->playback_dma_data = &VAR_1->playback_dma_data;

 return 0;
}
