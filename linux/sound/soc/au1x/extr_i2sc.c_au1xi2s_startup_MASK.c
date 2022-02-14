
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct au1xpsc_audio_data {int * dmaids; } ;


 struct au1xpsc_audio_data* FUNC_0 (struct snd_soc_dai*) ;
 int FUNC_1 (struct snd_soc_dai*,struct snd_pcm_substream*,int *) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_0,
      struct snd_soc_dai *VAR_1)
{
 struct au1xpsc_audio_data *VAR_2 = FUNC_0(VAR_1);
 FUNC_1(VAR_1, VAR_0, &VAR_2->dmaids[0]);
 return 0;
}
