
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra20_i2s {int regmap; int clk_i2s; } ;
struct snd_soc_dai {struct device* dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;



 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 unsigned int VAR_14 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_pcm_hw_params*) ;
 int FUNC_5 (int ,int ,unsigned int,unsigned int) ;
 int FUNC_6 (int ,int ,unsigned int) ;
 struct tegra20_i2s* FUNC_7 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_15,
     struct snd_pcm_hw_params *VAR_16,
     struct snd_soc_dai *VAR_17)
{
 struct device *VAR_18 = VAR_17->dev;
 struct tegra20_i2s *VAR_19 = FUNC_7(VAR_17);
 unsigned int VAR_20, VAR_21;
 int VAR_22, VAR_23, VAR_24, VAR_25, VAR_26;

 VAR_20 = VAR_5;
 switch (FUNC_3(VAR_16)) {
 case 130:
  VAR_21 = VAR_2;
  VAR_23 = 16;
  break;
 case 129:
  VAR_21 = VAR_3;
  VAR_23 = 24;
  break;
 case 128:
  VAR_21 = VAR_4;
  VAR_23 = 32;
  break;
 default:
  return -VAR_0;
 }

 VAR_20 |= VAR_6;
 VAR_21 |= VAR_7;

 FUNC_5(VAR_19->regmap, VAR_1, VAR_20, VAR_21);

 VAR_24 = FUNC_4(VAR_16);


 VAR_25 = VAR_24 * FUNC_2(VAR_16) * VAR_23 * 2;

 VAR_22 = FUNC_0(VAR_19->clk_i2s, VAR_25);
 if (VAR_22) {
  FUNC_1(VAR_18, "Can't set I2S clock rate: %d\n", VAR_22);
  return VAR_22;
 }

 VAR_26 = (VAR_25 / (2 * VAR_24)) - 1;
 if (VAR_26 < 0 || VAR_26 > VAR_12)
  return -VAR_0;
 VAR_21 = VAR_26 << VAR_13;

 if (VAR_25 % (2 * VAR_24))
  VAR_21 |= VAR_14;

 FUNC_6(VAR_19->regmap, VAR_11, VAR_21);

 FUNC_6(VAR_19->regmap, VAR_8,
       VAR_10 |
       VAR_9);

 return 0;
}
