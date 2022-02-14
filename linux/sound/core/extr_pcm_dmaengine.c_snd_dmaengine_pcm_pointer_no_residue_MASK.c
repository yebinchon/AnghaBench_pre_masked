
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int runtime; } ;
struct dmaengine_pcm_runtime_data {int pos; } ;
typedef int snd_pcm_uframes_t ;


 int FUNC_0 (int ,int ) ;
 struct dmaengine_pcm_runtime_data* FUNC_1 (struct snd_pcm_substream*) ;

snd_pcm_uframes_t FUNC_2(struct snd_pcm_substream *VAR_0)
{
 struct dmaengine_pcm_runtime_data *VAR_1 = FUNC_1(VAR_0);
 return FUNC_0(VAR_0->runtime, VAR_1->pos);
}
