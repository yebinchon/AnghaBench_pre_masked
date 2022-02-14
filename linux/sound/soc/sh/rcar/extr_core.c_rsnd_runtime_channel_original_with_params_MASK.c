
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_runtime {int channels; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct rsnd_dai_stream {int dummy; } ;


 int FUNC_0 (struct snd_pcm_hw_params*) ;
 struct snd_pcm_runtime* FUNC_1 (struct rsnd_dai_stream*) ;

int FUNC_2(struct rsnd_dai_stream *VAR_0,
           struct snd_pcm_hw_params *VAR_1)
{
 struct snd_pcm_runtime *VAR_2 = FUNC_1(VAR_0);







 if (VAR_1)
  return FUNC_0(VAR_1);
 else
  return VAR_2->channels;
}
