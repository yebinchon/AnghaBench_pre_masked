
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_adfsdm_priv {int * substream; } ;
struct snd_soc_pcm_runtime {int cpu_dai; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;


 int FUNC_0 (struct snd_pcm_substream*) ;
 struct stm32_adfsdm_priv* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_0)
{
 struct snd_soc_pcm_runtime *VAR_1 = VAR_0->private_data;
 struct stm32_adfsdm_priv *VAR_2 =
  FUNC_1(VAR_1->cpu_dai);

 FUNC_0(VAR_0);
 VAR_2->substream = ((void*)0);

 return 0;
}
