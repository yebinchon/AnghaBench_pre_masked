
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct max98927_priv {int ch_size; int regmap; scalar_t__ interleave_mode; } ;


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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 unsigned int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct max98927_priv*,struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_pcm_hw_params*) ;
 int FUNC_5 (int ,int ,int ,unsigned int) ;
 int FUNC_6 (int) ;
 struct max98927_priv* FUNC_7 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_21,
 struct snd_pcm_hw_params *VAR_22,
 struct snd_soc_dai *VAR_23)
{
 struct snd_soc_component *VAR_24 = VAR_23->component;
 struct max98927_priv *VAR_25 = FUNC_7(VAR_24);
 unsigned int VAR_26 = 0;
 unsigned int VAR_27 = 0;


 switch (FUNC_6(FUNC_3(VAR_22))) {
 case 16:
  VAR_27 = VAR_1;
  break;
 case 24:
  VAR_27 = VAR_2;
  break;
 case 32:
  VAR_27 = VAR_3;
  break;
 default:
  FUNC_1(VAR_24->dev, "format unsupported %d\n",
   FUNC_3(VAR_22));
  goto err;
 }

 VAR_25->ch_size = FUNC_6(FUNC_3(VAR_22));

 FUNC_5(VAR_25->regmap,
  VAR_18,
  VAR_4, VAR_27);

 FUNC_0(VAR_24->dev, "format supported %d",
  FUNC_3(VAR_22));


 switch (FUNC_4(VAR_22)) {
 case 8000:
  VAR_26 = VAR_13;
  break;
 case 11025:
  VAR_26 = VAR_5;
  break;
 case 12000:
  VAR_26 = VAR_6;
  break;
 case 16000:
  VAR_26 = VAR_7;
  break;
 case 22050:
  VAR_26 = VAR_8;
  break;
 case 24000:
  VAR_26 = VAR_9;
  break;
 case 32000:
  VAR_26 = VAR_10;
  break;
 case 44100:
  VAR_26 = VAR_11;
  break;
 case 48000:
  VAR_26 = VAR_12;
  break;
 default:
  FUNC_1(VAR_24->dev, "rate %d not supported\n",
   FUNC_4(VAR_22));
  goto err;
 }

 FUNC_5(VAR_25->regmap,
  VAR_19,
  VAR_14,
  VAR_26);
 FUNC_5(VAR_25->regmap,
  VAR_20,
  VAR_16,
  VAR_26 << VAR_17);


 if (VAR_25->interleave_mode &&
     VAR_26 > VAR_7)
  FUNC_5(VAR_25->regmap,
   VAR_20,
   VAR_15,
   VAR_26 - 3);
 else
  FUNC_5(VAR_25->regmap,
   VAR_20,
   VAR_15,
   VAR_26);
 return FUNC_2(VAR_25, VAR_22);
err:
 return -VAR_0;
}
