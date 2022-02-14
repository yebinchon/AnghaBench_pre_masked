
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_adfsdm_priv {struct snd_pcm_substream* substream; } ;
struct snd_soc_pcm_runtime {int cpu_dai; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;


 struct stm32_adfsdm_priv* FUNC_0 (int ) ;
 int FUNC_1 (struct snd_pcm_substream*,int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_1)
{
 struct snd_soc_pcm_runtime *VAR_2 = VAR_1->private_data;
 struct stm32_adfsdm_priv *VAR_3 = FUNC_0(VAR_2->cpu_dai);
 int VAR_4;

 VAR_4 = FUNC_1(VAR_1, &VAR_0);
 if (!VAR_4)
  VAR_3->substream = VAR_1;

 return VAR_4;
}
