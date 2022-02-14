
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_sai_sub_data {int slots; int regmap; scalar_t__ spdif_frm_cnt; } ;
struct snd_soc_dai {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;



 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_2 (struct stm32_sai_sub_data*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct snd_pcm_hw_params*) ;
 int FUNC_5 (struct snd_pcm_hw_params*) ;
 int FUNC_6 (int ,int ,int,int) ;
 int FUNC_7 (int ,int ,int,int) ;
 struct stm32_sai_sub_data* FUNC_8 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_9(struct snd_soc_dai *VAR_11,
    struct snd_pcm_substream *VAR_12,
    struct snd_pcm_hw_params *VAR_13)
{
 struct stm32_sai_sub_data *VAR_14 = FUNC_8(VAR_11);
 int VAR_15, VAR_16, VAR_17;






 FUNC_7(VAR_14->regmap, VAR_9,
     VAR_6 | VAR_7,
     VAR_6 |
     FUNC_1(VAR_10));


 if (FUNC_2(VAR_14)) {
  VAR_14->spdif_frm_cnt = 0;
  return 0;
 }


 VAR_16 = VAR_4;
 switch (FUNC_5(VAR_13)) {
 case 128:
  VAR_15 = FUNC_0(VAR_3);
  break;
 case 130:
  VAR_15 = FUNC_0(VAR_1);
  break;
 case 129:
  VAR_15 = FUNC_0(VAR_2);
  break;
 default:
  FUNC_3(VAR_11->dev, "Data format not supported");
  return -VAR_0;
 }

 VAR_16 |= VAR_5;
 if ((VAR_14->slots == 2) && (FUNC_4(VAR_13) == 1))
  VAR_15 |= VAR_5;

 VAR_17 = FUNC_6(VAR_14->regmap, VAR_8, VAR_16, VAR_15);
 if (VAR_17 < 0) {
  FUNC_3(VAR_11->dev, "Failed to update CR1 register\n");
  return VAR_17;
 }

 return 0;
}
