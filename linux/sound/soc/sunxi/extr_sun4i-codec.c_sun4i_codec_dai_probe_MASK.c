
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4i_codec {int capture_dma_data; int playback_dma_data; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_soc_card {int dummy; } ;


 struct sun4i_codec* FUNC_0 (struct snd_soc_card*) ;
 struct snd_soc_card* FUNC_1 (struct snd_soc_dai*) ;
 int FUNC_2 (struct snd_soc_dai*,int *,int *) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_0)
{
 struct snd_soc_card *VAR_1 = FUNC_1(VAR_0);
 struct sun4i_codec *VAR_2 = FUNC_0(VAR_1);

 FUNC_2(VAR_0, &VAR_2->playback_dma_data,
      &VAR_2->capture_dma_data);

 return 0;
}
