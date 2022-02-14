
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_sai_sub_data {scalar_t__ master; int data_size; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct TYPE_2__ {int rate; } ;


 scalar_t__ FUNC_0 (struct stm32_sai_sub_data*) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 struct stm32_sai_sub_data* FUNC_3 (struct snd_soc_dai*) ;
 int FUNC_4 (struct snd_soc_dai*,struct snd_pcm_hw_params*) ;
 int FUNC_5 (struct snd_soc_dai*,struct snd_pcm_substream*,struct snd_pcm_hw_params*) ;
 int FUNC_6 (struct snd_soc_dai*) ;
 int FUNC_7 (struct stm32_sai_sub_data*,TYPE_1__*) ;
 int FUNC_8 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_9(struct snd_pcm_substream *VAR_0,
          struct snd_pcm_hw_params *VAR_1,
          struct snd_soc_dai *VAR_2)
{
 struct stm32_sai_sub_data *VAR_3 = FUNC_3(VAR_2);
 int VAR_4;

 VAR_3->data_size = FUNC_2(VAR_1);

 if (FUNC_0(VAR_3)) {

  VAR_0->runtime->rate = FUNC_1(VAR_1);
  FUNC_7(VAR_3, VAR_0->runtime);
 } else {
  VAR_4 = FUNC_8(VAR_2);
  if (VAR_4 < 0)
   return VAR_4;
  FUNC_6(VAR_2);
 }

 VAR_4 = FUNC_5(VAR_2, VAR_0, VAR_1);
 if (VAR_4)
  return VAR_4;

 if (VAR_3->master)
  VAR_4 = FUNC_4(VAR_2, VAR_1);

 return VAR_4;
}
