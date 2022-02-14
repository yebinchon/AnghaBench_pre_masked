
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_sai_sub_data {int spdif_frm_cnt; int regmap; } ;
struct snd_soc_dai {int dev; } ;
struct snd_pcm_substream {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;






 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct stm32_sai_sub_data*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ,unsigned int,unsigned int) ;
 struct stm32_sai_sub_data* FUNC_4 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_6, int VAR_7,
        struct snd_soc_dai *VAR_8)
{
 struct stm32_sai_sub_data *VAR_9 = FUNC_4(VAR_8);
 int VAR_10;

 switch (VAR_7) {
 case 130:
 case 131:
 case 132:
  FUNC_1(VAR_8->dev, "Enable DMA and SAI\n");

  FUNC_3(VAR_9->regmap, VAR_4,
       VAR_1, VAR_1);


  VAR_10 = FUNC_3(VAR_9->regmap, VAR_4,
      VAR_2, VAR_2);
  if (VAR_10 < 0)
   FUNC_2(VAR_8->dev, "Failed to update CR1 register\n");
  break;
 case 128:
 case 133:
 case 129:
  FUNC_1(VAR_8->dev, "Disable DMA and SAI\n");

  FUNC_3(VAR_9->regmap, VAR_5,
       VAR_3, 0);

  FUNC_3(VAR_9->regmap, VAR_4,
       VAR_2,
       (unsigned int)~VAR_2);

  VAR_10 = FUNC_3(VAR_9->regmap, VAR_4,
      VAR_1,
      (unsigned int)~VAR_1);
  if (VAR_10 < 0)
   FUNC_2(VAR_8->dev, "Failed to update CR1 register\n");

  if (FUNC_0(VAR_9))
   VAR_9->spdif_frm_cnt = 0;
  break;
 default:
  return -VAR_0;
 }

 return VAR_10;
}
