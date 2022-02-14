
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_i2s_data {int dummy; } ;
struct snd_soc_dai {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;


 scalar_t__ FUNC_0 (struct stm32_i2s_data*) ;
 int FUNC_1 (int ,char*,int) ;
 struct stm32_i2s_data* FUNC_2 (struct snd_soc_dai*) ;
 int FUNC_3 (struct snd_soc_dai*,struct snd_pcm_hw_params*,struct snd_pcm_substream*) ;
 int FUNC_4 (struct snd_soc_dai*,struct snd_pcm_hw_params*) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_0,
          struct snd_pcm_hw_params *VAR_1,
          struct snd_soc_dai *VAR_2)
{
 struct stm32_i2s_data *VAR_3 = FUNC_2(VAR_2);
 int VAR_4;

 VAR_4 = FUNC_3(VAR_2, VAR_1, VAR_0);
 if (VAR_4 < 0) {
  FUNC_1(VAR_2->dev, "Configuration returned error %d\n", VAR_4);
  return VAR_4;
 }

 if (FUNC_0(VAR_3))
  VAR_4 = FUNC_4(VAR_2, VAR_1);

 return VAR_4;
}
