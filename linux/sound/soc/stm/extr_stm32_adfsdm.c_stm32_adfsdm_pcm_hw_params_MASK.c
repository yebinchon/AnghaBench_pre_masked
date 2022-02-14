
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_adfsdm_priv {int iio_cb; int pcm_buff; } ;
struct snd_soc_pcm_runtime {int cpu_dai; } ;
struct snd_pcm_substream {TYPE_1__* runtime; struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct TYPE_2__ {int dma_area; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_substream*,int ) ;
 struct stm32_adfsdm_priv* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_0,
          struct snd_pcm_hw_params *VAR_1)
{
 struct snd_soc_pcm_runtime *VAR_2 = VAR_0->private_data;
 struct stm32_adfsdm_priv *VAR_3 =
  FUNC_4(VAR_2->cpu_dai);
 int VAR_4;

 VAR_4 = FUNC_3(VAR_0, FUNC_1(VAR_1));
 if (VAR_4 < 0)
  return VAR_4;
 VAR_3->pcm_buff = VAR_0->runtime->dma_area;

 return FUNC_0(VAR_3->iio_cb,
         FUNC_2(VAR_1));
}
