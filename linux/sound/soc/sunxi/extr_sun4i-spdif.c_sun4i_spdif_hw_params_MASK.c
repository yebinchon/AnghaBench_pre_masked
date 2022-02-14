
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sun4i_spdif_dev {int regmap; int spdif_clk; struct platform_device* pdev; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (int *,char*,unsigned int) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_pcm_hw_params*) ;
 unsigned long FUNC_5 (struct snd_pcm_hw_params*) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (int ,int ,int) ;
 struct sun4i_spdif_dev* FUNC_8 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_9(struct snd_pcm_substream *VAR_10,
     struct snd_pcm_hw_params *VAR_11,
     struct snd_soc_dai *VAR_12)
{
 int VAR_13 = 0;
 int VAR_14;
 unsigned long VAR_15 = FUNC_5(VAR_11);
 u32 VAR_16 = 0;
 unsigned int VAR_17 = 0;
 u32 VAR_18;
 struct sun4i_spdif_dev *VAR_19 = FUNC_8(VAR_12);
 struct platform_device *VAR_20 = VAR_19->pdev;


 switch (FUNC_3(VAR_11)) {
 case 1:
 case 2:
  VAR_14 = 0;
  break;
 case 4:
  VAR_14 = VAR_9;
  break;
 default:
  return -VAR_0;
 }

 switch (FUNC_4(VAR_11)) {
 case 130:
  VAR_14 |= VAR_6;
  break;
 case 129:
  VAR_14 |= VAR_7;
  break;
 case 128:
  VAR_14 |= VAR_8;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_15) {
 case 22050:
 case 44100:
 case 88200:
 case 176400:
  VAR_17 = 22579200;
  break;
 case 24000:
 case 32000:
 case 48000:
 case 96000:
 case 192000:
  VAR_17 = 24576000;
  break;
 default:
  return -VAR_0;
 }

 VAR_13 = FUNC_1(VAR_19->spdif_clk, VAR_17);
 if (VAR_13 < 0) {
  FUNC_2(&VAR_20->dev,
   "Setting SPDIF clock rate for %d Hz failed!\n", VAR_17);
  return VAR_13;
 }

 FUNC_6(VAR_19->regmap, VAR_1,
      VAR_2, VAR_2);

 switch (VAR_15) {
 case 22050:
 case 24000:
  VAR_16 = 8;
  break;
 case 32000:
  VAR_16 = 6;
  break;
 case 44100:
 case 48000:
  VAR_16 = 4;
  break;
 case 88200:
 case 96000:
  VAR_16 = 2;
  break;
 case 176400:
 case 192000:
  VAR_16 = 1;
  break;
 default:
  return -VAR_0;
 }

 VAR_18 = 0;
 VAR_18 |= VAR_4;
 VAR_18 |= VAR_14;
 VAR_18 |= VAR_5;
 VAR_18 |= FUNC_0(VAR_16 - 1);
 FUNC_7(VAR_19->regmap, VAR_3, VAR_18);

 return 0;
}
