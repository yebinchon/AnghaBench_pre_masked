
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_adfsdm_priv {int iio_active; int lock; int iio_cb; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct stm32_adfsdm_priv* FUNC_3 (struct snd_soc_dai*) ;

__attribute__((used)) static void FUNC_4(struct snd_pcm_substream *VAR_0,
      struct snd_soc_dai *VAR_1)
{
 struct stm32_adfsdm_priv *VAR_2 = FUNC_3(VAR_1);

 FUNC_1(&VAR_2->lock);
 if (VAR_2->iio_active) {
  FUNC_0(VAR_2->iio_cb);
  VAR_2->iio_active = 0;
 }
 FUNC_2(&VAR_2->lock);
}
