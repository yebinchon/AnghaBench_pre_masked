
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {size_t id; int dev; struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct rt5677_priv {int* lrck; int* bclk; int regmap; int sysclk; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 int VAR_15 ;
 unsigned int VAR_16 ;
 int VAR_17 ;
 unsigned int VAR_18 ;
 int VAR_19 ;
 unsigned int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (int ,char*,int,int,...) ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (int ,int ,unsigned int,unsigned int) ;
 int FUNC_5 (int ,int) ;
 struct rt5677_priv* FUNC_6 (struct snd_soc_component*) ;
 int FUNC_7 (struct snd_pcm_hw_params*) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_22,
 struct snd_pcm_hw_params *VAR_23, struct snd_soc_dai *VAR_24)
{
 struct snd_soc_component *VAR_25 = VAR_24->component;
 struct rt5677_priv *VAR_26 = FUNC_6(VAR_25);
 unsigned int VAR_27 = 0, VAR_28, VAR_29;
 int VAR_30, VAR_31, VAR_32;

 VAR_26->lrck[VAR_24->id] = FUNC_2(VAR_23);
 VAR_30 = FUNC_5(VAR_26->sysclk, VAR_26->lrck[VAR_24->id]);
 if (VAR_30 < 0) {
  FUNC_1(VAR_25->dev, "Unsupported clock setting: sysclk=%dHz lrck=%dHz\n",
   VAR_26->sysclk, VAR_26->lrck[VAR_24->id]);
  return -VAR_0;
 }
 VAR_32 = FUNC_7(VAR_23);
 if (VAR_32 < 0) {
  FUNC_1(VAR_25->dev, "Unsupported frame size: %d\n", VAR_32);
  return -VAR_0;
 }
 VAR_31 = VAR_32 > 32;
 VAR_26->bclk[VAR_24->id] = VAR_26->lrck[VAR_24->id] * (32 << VAR_31);

 FUNC_0(VAR_24->dev, "bclk is %dHz and lrck is %dHz\n",
  VAR_26->bclk[VAR_24->id], VAR_26->lrck[VAR_24->id]);
 FUNC_0(VAR_24->dev, "bclk_ms is %d and pre_div is %d for iis %d\n",
    VAR_31, VAR_30, VAR_24->id);

 switch (FUNC_3(VAR_23)) {
 case 16:
  break;
 case 20:
  VAR_27 |= VAR_10;
  break;
 case 24:
  VAR_27 |= VAR_11;
  break;
 case 8:
  VAR_27 |= VAR_12;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_24->id) {
 case 131:
  VAR_29 = VAR_14;
  VAR_28 = VAR_30 << VAR_15;
  FUNC_4(VAR_26->regmap, VAR_2,
   VAR_13, VAR_27);
  FUNC_4(VAR_26->regmap, VAR_1,
   VAR_29, VAR_28);
  break;
 case 130:
  VAR_29 = VAR_16;
  VAR_28 = VAR_30 << VAR_17;
  FUNC_4(VAR_26->regmap, VAR_3,
   VAR_13, VAR_27);
  FUNC_4(VAR_26->regmap, VAR_1,
   VAR_29, VAR_28);
  break;
 case 129:
  VAR_29 = VAR_6 | VAR_18;
  VAR_28 = VAR_31 << VAR_7 |
   VAR_30 << VAR_19;
  FUNC_4(VAR_26->regmap, VAR_4,
   VAR_13, VAR_27);
  FUNC_4(VAR_26->regmap, VAR_1,
   VAR_29, VAR_28);
  break;
 case 128:
  VAR_29 = VAR_8 | VAR_20;
  VAR_28 = VAR_31 << VAR_9 |
   VAR_30 << VAR_21;
  FUNC_4(VAR_26->regmap, VAR_5,
   VAR_13, VAR_27);
  FUNC_4(VAR_26->regmap, VAR_1,
   VAR_29, VAR_28);
  break;
 default:
  break;
 }

 return 0;
}
