
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {struct snd_soc_dai* cpu_dai; } ;
struct snd_soc_dai_driver {int capture; int playback; } ;
struct snd_soc_dai {struct snd_soc_dai_driver* driver; } ;
struct snd_pcm_substream {scalar_t__ stream; struct snd_soc_pcm_runtime* private_data; struct snd_pcm_runtime* runtime; } ;
struct TYPE_2__ {int rate_max; int rate_min; int rates; int channels_max; int channels_min; int formats; } ;
struct snd_pcm_runtime {TYPE_1__ hw; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct snd_pcm_runtime*,int *) ;
 int FUNC_1 (struct snd_pcm_substream*,int *,int *) ;
 int FUNC_2 (struct snd_pcm_substream*,int *) ;
 int FUNC_3 (struct snd_pcm_substream*,int *,int *,int *) ;

__attribute__((used)) static void FUNC_4(struct snd_pcm_substream *VAR_1)
{
 struct snd_pcm_runtime *VAR_2 = VAR_1->runtime;
 struct snd_soc_pcm_runtime *VAR_3 = VAR_1->private_data;
 struct snd_soc_dai *VAR_4 = VAR_3->cpu_dai;
 struct snd_soc_dai_driver *VAR_5 = VAR_4->driver;

 if (VAR_1->stream == VAR_0)
  FUNC_0(VAR_2, &VAR_5->playback);
 else
  FUNC_0(VAR_2, &VAR_5->capture);

 FUNC_2(VAR_1, &VAR_2->hw.formats);
 FUNC_1(VAR_1, &VAR_2->hw.channels_min,
    &VAR_2->hw.channels_max);
 FUNC_3(VAR_1, &VAR_2->hw.rates,
    &VAR_2->hw.rate_min, &VAR_2->hw.rate_max);
}
