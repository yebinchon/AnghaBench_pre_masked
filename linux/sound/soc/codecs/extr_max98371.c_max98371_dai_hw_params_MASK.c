
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct max98371_priv {int regmap; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;




 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 struct max98371_priv* FUNC_4 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_22,
  struct snd_pcm_hw_params *VAR_23,
  struct snd_soc_dai *VAR_24)
{
 struct snd_soc_component *VAR_25 = VAR_24->component;
 struct max98371_priv *VAR_26 = FUNC_4(VAR_25);
 int VAR_27, VAR_28, VAR_29 = FUNC_0(VAR_23);
 int VAR_30 = FUNC_2(VAR_23);

 switch (FUNC_1(VAR_23)) {
 case 128:
  FUNC_3(VAR_26->regmap, VAR_10,
    VAR_11, VAR_7);
  VAR_28 = 8;
  break;
 case 131:
  FUNC_3(VAR_26->regmap, VAR_10,
    VAR_11, VAR_7);
  VAR_28 = 16;
  break;
 case 130:
  FUNC_3(VAR_26->regmap, VAR_10,
    VAR_11, VAR_8);
  VAR_28 = 24;
  break;
 case 129:
  FUNC_3(VAR_26->regmap, VAR_10,
    VAR_11, VAR_8);
  VAR_28 = 32;
  break;
 default:
  return -VAR_0;
 }


 VAR_27 = VAR_29 * VAR_28;
 switch (VAR_27) {
 case 32:
  FUNC_3(VAR_26->regmap,
   VAR_9,
   VAR_5, VAR_2);
  break;
 case 48:
  FUNC_3(VAR_26->regmap,
   VAR_9,
   VAR_5, VAR_3);
  break;
 case 64:
  FUNC_3(VAR_26->regmap,
   VAR_9,
   VAR_5, VAR_4);
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_30) {
 case 32000:
  FUNC_3(VAR_26->regmap,
   VAR_14,
   VAR_20, VAR_15);
  break;
 case 44100:
  FUNC_3(VAR_26->regmap,
   VAR_14,
   VAR_20, VAR_16);
  break;
 case 48000:
  FUNC_3(VAR_26->regmap,
   VAR_14,
   VAR_20, VAR_17);
  break;
 case 88200:
  FUNC_3(VAR_26->regmap,
   VAR_14,
   VAR_20, VAR_18);
  break;
 case 96000:
  FUNC_3(VAR_26->regmap,
   VAR_14,
   VAR_20, VAR_19);
  break;
 default:
  return -VAR_0;
 }


 FUNC_3(VAR_26->regmap, VAR_12,
   VAR_13, VAR_21);
 FUNC_3(VAR_26->regmap, VAR_6,
   VAR_1, VAR_1);
 return 0;
}
