
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct snd_pcm_hw_params {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct snd_pcm_substream*,struct snd_pcm_hw_params*,struct snd_soc_dai*) ;
 int FUNC_1 (struct snd_pcm_substream*,struct snd_pcm_hw_params*,struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_1,
    struct snd_pcm_hw_params *VAR_2,
    struct snd_soc_dai *VAR_3)
{
 if (VAR_1->stream == VAR_0)
  return FUNC_1(VAR_1, VAR_2, VAR_3);
 else
  return FUNC_0(VAR_1, VAR_2, VAR_3);
}
