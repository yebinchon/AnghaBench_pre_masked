
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_stream {int formats; int rates; int channels_max; int channels_min; int rate_max; int rate_min; } ;
struct TYPE_2__ {int formats; int rates; int channels_max; int channels_min; int rate_max; int rate_min; } ;
struct snd_pcm_runtime {TYPE_1__ hw; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct snd_pcm_runtime *VAR_1,
     struct snd_soc_pcm_stream *VAR_2)
{
 VAR_1->hw.rate_min = VAR_2->rate_min;
 VAR_1->hw.rate_max = FUNC_0(VAR_2->rate_max, VAR_0);
 VAR_1->hw.channels_min = VAR_2->channels_min;
 VAR_1->hw.channels_max = VAR_2->channels_max;
 if (VAR_1->hw.formats)
  VAR_1->hw.formats &= VAR_2->formats;
 else
  VAR_1->hw.formats = VAR_2->formats;
 VAR_1->hw.rates = VAR_2->rates;
}
