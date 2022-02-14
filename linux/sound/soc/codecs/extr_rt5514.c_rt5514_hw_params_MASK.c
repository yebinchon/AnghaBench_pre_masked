
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int id; int dev; struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct rt5514_priv {int lrck; int bclk; int regmap; int sysclk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;




 int FUNC_0 (int ,char*,int,int,...) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (int ,int ,int,int) ;
 int FUNC_5 (int ,int) ;
 struct rt5514_priv* FUNC_6 (struct snd_soc_component*) ;
 int FUNC_7 (struct snd_pcm_hw_params*) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_14,
 struct snd_pcm_hw_params *VAR_15, struct snd_soc_dai *VAR_16)
{
 struct snd_soc_component *VAR_17 = VAR_16->component;
 struct rt5514_priv *VAR_18 = FUNC_6(VAR_17);
 int VAR_19, VAR_20, VAR_21;
 unsigned int VAR_22 = 0;

 VAR_18->lrck = FUNC_3(VAR_15);
 VAR_19 = FUNC_5(VAR_18->sysclk, VAR_18->lrck);
 if (VAR_19 < 0) {
  FUNC_1(VAR_17->dev, "Unsupported clock setting\n");
  return -VAR_0;
 }

 VAR_21 = FUNC_7(VAR_15);
 if (VAR_21 < 0) {
  FUNC_1(VAR_17->dev, "Unsupported frame size: %d\n", VAR_21);
  return -VAR_0;
 }

 VAR_20 = VAR_21 > 32;
 VAR_18->bclk = VAR_18->lrck * (32 << VAR_20);

 FUNC_0(VAR_16->dev, "bclk is %dHz and lrck is %dHz\n",
  VAR_18->bclk, VAR_18->lrck);
 FUNC_0(VAR_16->dev, "bclk_ms is %d and pre_div is %d for iis %d\n",
    VAR_20, VAR_19, VAR_16->id);

 switch (FUNC_2(VAR_15)) {
 case 131:
  break;
 case 130:
  VAR_22 = VAR_8;
  break;
 case 129:
  VAR_22 = VAR_9;
  break;
 case 128:
  VAR_22 = VAR_10;
  break;
 default:
  return -VAR_0;
 }

 FUNC_4(VAR_18->regmap, VAR_7, VAR_11,
  VAR_22);
 FUNC_4(VAR_18->regmap, VAR_3,
  VAR_1,
  (VAR_19 + 1) << VAR_2);
 FUNC_4(VAR_18->regmap, VAR_4,
  VAR_5 | VAR_12,
  VAR_19 << VAR_6 |
  VAR_19 << VAR_13);

 return 0;
}
