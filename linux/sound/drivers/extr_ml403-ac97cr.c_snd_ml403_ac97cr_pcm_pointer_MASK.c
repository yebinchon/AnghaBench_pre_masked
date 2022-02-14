
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_indirect2 {int dummy; } ;
struct snd_ml403_ac97cr {struct snd_pcm_indirect2 capture_ind2_rec; struct snd_pcm_substream* capture_substream; struct snd_pcm_indirect2 ind_rec; struct snd_pcm_substream* playback_substream; } ;
typedef int snd_pcm_uframes_t ;


 int FUNC_0 (struct snd_pcm_substream*,struct snd_pcm_indirect2*) ;
 struct snd_ml403_ac97cr* FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static snd_pcm_uframes_t
FUNC_2(struct snd_pcm_substream *VAR_0)
{
 struct snd_ml403_ac97cr *VAR_1;
 struct snd_pcm_indirect2 *VAR_2 = ((void*)0);

 VAR_1 = FUNC_1(VAR_0);

 if (VAR_0 == VAR_1->playback_substream)
  VAR_2 = &VAR_1->ind_rec;
 if (VAR_0 == VAR_1->capture_substream)
  VAR_2 = &VAR_1->capture_ind2_rec;

 if (VAR_2 != ((void*)0))
  return FUNC_0(VAR_0, VAR_2);
 return (snd_pcm_uframes_t) 0;
}
