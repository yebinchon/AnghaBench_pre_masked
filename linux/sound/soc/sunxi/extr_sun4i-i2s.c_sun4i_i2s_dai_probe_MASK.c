
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4i_i2s {int capture_dma_data; int playback_dma_data; } ;
struct snd_soc_dai {int dummy; } ;


 struct sun4i_i2s* FUNC_0 (struct snd_soc_dai*) ;
 int FUNC_1 (struct snd_soc_dai*,int *,int *) ;
 int FUNC_2 (struct snd_soc_dai*,struct sun4i_i2s*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_0)
{
 struct sun4i_i2s *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_0,
      &VAR_1->playback_dma_data,
      &VAR_1->capture_dma_data);

 FUNC_2(VAR_0, VAR_1);

 return 0;
}
