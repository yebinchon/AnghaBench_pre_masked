
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_sai_sub_data {int mclk_rate; int fs_length; int regmap; int pdata; int sai_ck; int sai_mclk; } ;
struct snd_soc_dai {int dev; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct stm32_sai_sub_data*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (struct snd_pcm_hw_params*) ;
 int FUNC_5 (int ,int ,int,int) ;
 struct stm32_sai_sub_data* FUNC_6 (struct snd_soc_dai*) ;
 int FUNC_7 (struct stm32_sai_sub_data*,int,int) ;
 int FUNC_8 (struct stm32_sai_sub_data*,int) ;
 int FUNC_9 (struct stm32_sai_sub_data*,unsigned int) ;

__attribute__((used)) static int FUNC_10(struct snd_soc_dai *VAR_3,
         struct snd_pcm_hw_params *VAR_4)
{
 struct stm32_sai_sub_data *VAR_5 = FUNC_6(VAR_3);
 int VAR_6 = 0, VAR_7 = 0;
 int VAR_8, VAR_9, VAR_10;
 unsigned int VAR_11 = FUNC_4(VAR_4);
 int VAR_12;

 if (!VAR_5->sai_mclk) {
  VAR_12 = FUNC_9(VAR_5, VAR_11);
  if (VAR_12)
   return VAR_12;
 }
 VAR_8 = FUNC_2(VAR_5->sai_ck);

 if (FUNC_0(VAR_5->pdata)) {







  if (!VAR_5->mclk_rate)
   return 0;

  if (2 * VAR_8 >= 3 * VAR_5->mclk_rate) {
   VAR_6 = FUNC_7(VAR_5, VAR_8,
          2 * VAR_5->mclk_rate);
   if (VAR_6 < 0)
    return VAR_6;
  }
 } else {
  if (FUNC_1(VAR_5)) {
   VAR_6 = FUNC_7(VAR_5, VAR_8,
          VAR_11 * 128);
   if (VAR_6 < 0)
    return VAR_6;
  } else {
   if (VAR_5->mclk_rate) {
    VAR_9 = VAR_5->mclk_rate / VAR_11;
    if (VAR_9 == 512) {
     VAR_7 = VAR_1;
    } else if (VAR_9 != 256) {
     FUNC_3(VAR_3->dev,
      "Wrong mclk ratio %d\n",
      VAR_9);
     return -VAR_0;
    }

    FUNC_5(VAR_5->regmap,
         VAR_2,
         VAR_1, VAR_7);

    VAR_6 = FUNC_7(VAR_5, VAR_8,
           VAR_5->mclk_rate);
    if (VAR_6 < 0)
     return VAR_6;
   } else {

    VAR_10 = VAR_5->fs_length * FUNC_4(VAR_4);
    VAR_6 = FUNC_7(VAR_5, VAR_8,
           VAR_10);
    if (VAR_6 < 0)
     return VAR_6;
   }
  }
 }

 return FUNC_8(VAR_5, VAR_6);
}
