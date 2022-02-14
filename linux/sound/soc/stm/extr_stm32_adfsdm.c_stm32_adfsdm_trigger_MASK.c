
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_adfsdm_priv {TYPE_1__* iio_ch; int pos; } ;
struct snd_soc_pcm_runtime {int cpu_dai; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct TYPE_2__ {int indio_dev; } ;


 int VAR_0 ;




 struct stm32_adfsdm_priv* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,struct stm32_adfsdm_priv*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_2, int VAR_3)
{
 struct snd_soc_pcm_runtime *VAR_4 = VAR_2->private_data;
 struct stm32_adfsdm_priv *VAR_5 =
  FUNC_0(VAR_4->cpu_dai);

 switch (VAR_3) {
 case 130:
 case 131:
  VAR_5->pos = 0;
  return FUNC_1(VAR_5->iio_ch->indio_dev,
            VAR_1, VAR_5);
 case 128:
 case 129:
  return FUNC_2(VAR_5->iio_ch->indio_dev);
 }

 return -VAR_0;
}
