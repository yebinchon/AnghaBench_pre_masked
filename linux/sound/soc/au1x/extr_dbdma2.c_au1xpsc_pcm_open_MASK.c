
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {int cpu_dai; } ;
struct snd_pcm_substream {int stream; struct snd_soc_pcm_runtime* private_data; } ;
struct au1xpsc_audio_dmadata {int ddma_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int* FUNC_0 (int ,struct snd_pcm_substream*) ;
 int FUNC_1 (struct snd_pcm_substream*,int *) ;
 struct au1xpsc_audio_dmadata* FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_2)
{
 struct au1xpsc_audio_dmadata *VAR_3 = FUNC_2(VAR_2);
 struct snd_soc_pcm_runtime *VAR_4 = VAR_2->private_data;
 int VAR_5 = VAR_2->stream, *VAR_6;

 VAR_6 = FUNC_0(VAR_4->cpu_dai, VAR_2);
 if (!VAR_6)
  return -VAR_0;

 VAR_3->ddma_id = VAR_6[VAR_5];

 FUNC_1(VAR_2, &VAR_1);
 return 0;
}
