
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_adfsdm_priv {int pos; } ;
struct snd_soc_pcm_runtime {int cpu_dai; } ;
struct snd_pcm_substream {int runtime; struct snd_soc_pcm_runtime* private_data; } ;
typedef int snd_pcm_uframes_t ;


 int FUNC_0 (int ,int ) ;
 struct stm32_adfsdm_priv* FUNC_1 (int ) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_2(
         struct snd_pcm_substream *VAR_0)
{
 struct snd_soc_pcm_runtime *VAR_1 = VAR_0->private_data;
 struct stm32_adfsdm_priv *VAR_2 =
  FUNC_1(VAR_1->cpu_dai);

 return FUNC_0(VAR_0->runtime, VAR_2->pos);
}
