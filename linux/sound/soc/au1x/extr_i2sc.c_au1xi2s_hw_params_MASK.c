
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int msbits; } ;
struct au1xpsc_audio_data {unsigned long cfg; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (int ) ;
 struct au1xpsc_audio_data* FUNC_1 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_2,
        struct snd_pcm_hw_params *VAR_3,
        struct snd_soc_dai *VAR_4)
{
 struct au1xpsc_audio_data *VAR_5 = FUNC_1(VAR_4);
 unsigned long VAR_6;

 VAR_6 = FUNC_0(VAR_3->msbits);
 if (!VAR_6)
  return -VAR_1;

 VAR_5->cfg &= ~VAR_0;
 VAR_5->cfg |= VAR_6;
 return 0;
}
