
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct max98373_priv {int ch_size; int regmap; scalar_t__ interleave_mode; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 unsigned int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct snd_soc_component*,struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_pcm_hw_params*) ;
 int FUNC_5 (int ,int ,int ,unsigned int) ;
 int FUNC_6 (int) ;
 struct max98373_priv* FUNC_7 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_23,
 struct snd_pcm_hw_params *VAR_24,
 struct snd_soc_dai *VAR_25)
{
 struct snd_soc_component *VAR_26 = VAR_25->component;
 struct max98373_priv *VAR_27 = FUNC_7(VAR_26);
 unsigned int VAR_28 = 0;
 unsigned int VAR_29 = 0;


 switch (FUNC_6(FUNC_3(VAR_24))) {
 case 16:
  VAR_29 = VAR_1;
  break;
 case 24:
  VAR_29 = VAR_2;
  break;
 case 32:
  VAR_29 = VAR_3;
  break;
 default:
  FUNC_1(VAR_26->dev, "format unsupported %d\n",
   FUNC_3(VAR_24));
  goto err;
 }

 VAR_27->ch_size = FUNC_6(FUNC_3(VAR_24));

 FUNC_5(VAR_27->regmap,
  VAR_20,
  VAR_4, VAR_29);

 FUNC_0(VAR_26->dev, "format supported %d",
  FUNC_3(VAR_24));


 switch (FUNC_4(VAR_24)) {
 case 8000:
  VAR_28 = VAR_13;
  break;
 case 11025:
  VAR_28 = VAR_5;
  break;
 case 12000:
  VAR_28 = VAR_6;
  break;
 case 16000:
  VAR_28 = VAR_7;
  break;
 case 22050:
  VAR_28 = VAR_8;
  break;
 case 24000:
  VAR_28 = VAR_9;
  break;
 case 32000:
  VAR_28 = VAR_10;
  break;
 case 44100:
  VAR_28 = VAR_11;
  break;
 case 48000:
  VAR_28 = VAR_12;
  break;
 case 88200:
  VAR_28 = VAR_14;
  break;
 case 96000:
  VAR_28 = VAR_15;
  break;
 default:
  FUNC_1(VAR_26->dev, "rate %d not supported\n",
   FUNC_4(VAR_24));
  goto err;
 }


 FUNC_5(VAR_27->regmap,
  VAR_21,
  VAR_16,
  VAR_28);
 FUNC_5(VAR_27->regmap,
  VAR_22,
  VAR_18,
  VAR_28 << VAR_19);


 if (VAR_27->interleave_mode &&
     VAR_28 > VAR_7)
  FUNC_5(VAR_27->regmap,
   VAR_22,
   VAR_17,
   VAR_28 - 3);
 else
  FUNC_5(VAR_27->regmap,
   VAR_22,
   VAR_17,
   VAR_28);

 return FUNC_2(VAR_26, VAR_24);
err:
 return -VAR_0;
}
