
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_i2s_data {int regmap; } ;
struct snd_soc_dai {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_3 (struct stm32_i2s_data*) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (struct snd_pcm_hw_params*) ;
 int FUNC_6 (int ,int ,int,int) ;
 struct stm32_i2s_data* FUNC_7 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_8(struct snd_soc_dai *VAR_14,
          struct snd_pcm_hw_params *VAR_15,
          struct snd_pcm_substream *VAR_16)
{
 struct stm32_i2s_data *VAR_17 = FUNC_7(VAR_14);
 int VAR_18 = FUNC_5(VAR_15);
 u32 VAR_19, VAR_20, VAR_21;
 unsigned int VAR_22;
 int VAR_23;

 switch (VAR_18) {
 case 16:
  VAR_19 = FUNC_1(VAR_7);
  VAR_20 = VAR_3 | VAR_2;
  break;
 case 32:
  VAR_19 = FUNC_1(VAR_8) |
        VAR_2;
  VAR_20 = VAR_3 | VAR_2;
  break;
 default:
  FUNC_4(VAR_14->dev, "Unexpected format %d", VAR_18);
  return -VAR_0;
 }

 if (FUNC_3(VAR_17)) {
  VAR_19 |= FUNC_2(VAR_10);


  VAR_19 |= VAR_4;
  VAR_20 |= VAR_4;
 } else {
  VAR_19 |= FUNC_2(VAR_9);
 }
 VAR_20 |= VAR_5;

 VAR_23 = FUNC_6(VAR_17->regmap, VAR_12,
     VAR_20, VAR_19);
 if (VAR_23 < 0)
  return VAR_23;

 VAR_22 = VAR_13 * VAR_6 / 4;
 VAR_21 = FUNC_0(VAR_22 - 1);

 return FUNC_6(VAR_17->regmap, VAR_11,
      VAR_1, VAR_21);
}
