
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {size_t id; int dev; struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct rt5670_priv {int* lrck; int* bclk; int sysclk; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 int VAR_13 ;
 unsigned int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int ,char*,int,int,...) ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (int ,int) ;
 struct rt5670_priv* FUNC_5 (struct snd_soc_component*) ;
 int FUNC_6 (struct snd_soc_component*,int ,unsigned int,unsigned int) ;
 int FUNC_7 (struct snd_pcm_hw_params*) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_16,
 struct snd_pcm_hw_params *VAR_17, struct snd_soc_dai *VAR_18)
{
 struct snd_soc_component *VAR_19 = VAR_18->component;
 struct rt5670_priv *VAR_20 = FUNC_5(VAR_19);
 unsigned int VAR_21 = 0, VAR_22, VAR_23;
 int VAR_24, VAR_25, VAR_26;

 VAR_20->lrck[VAR_18->id] = FUNC_2(VAR_17);
 VAR_24 = FUNC_4(VAR_20->sysclk, VAR_20->lrck[VAR_18->id]);
 if (VAR_24 < 0) {
  FUNC_1(VAR_19->dev, "Unsupported clock setting %d for DAI %d\n",
   VAR_20->lrck[VAR_18->id], VAR_18->id);
  return -VAR_0;
 }
 VAR_26 = FUNC_7(VAR_17);
 if (VAR_26 < 0) {
  FUNC_1(VAR_19->dev, "Unsupported frame size: %d\n", VAR_26);
  return -VAR_0;
 }
 VAR_25 = VAR_26 > 32;
 VAR_20->bclk[VAR_18->id] = VAR_20->lrck[VAR_18->id] * (32 << VAR_25);

 FUNC_0(VAR_18->dev, "bclk is %dHz and lrck is %dHz\n",
  VAR_20->bclk[VAR_18->id], VAR_20->lrck[VAR_18->id]);
 FUNC_0(VAR_18->dev, "bclk_ms is %d and pre_div is %d for iis %d\n",
    VAR_25, VAR_24, VAR_18->id);

 switch (FUNC_3(VAR_17)) {
 case 16:
  break;
 case 20:
  VAR_21 |= VAR_8;
  break;
 case 24:
  VAR_21 |= VAR_9;
  break;
 case 8:
  VAR_21 |= VAR_10;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_18->id) {
 case 129:
  VAR_23 = VAR_4 | VAR_12;
  VAR_22 = VAR_25 << VAR_5 |
   VAR_24 << VAR_13;
  FUNC_6(VAR_19, VAR_2,
   VAR_11, VAR_21);
  FUNC_6(VAR_19, VAR_1, VAR_23, VAR_22);
  break;
 case 128:
  VAR_23 = VAR_6 | VAR_14;
  VAR_22 = VAR_25 << VAR_7 |
   VAR_24 << VAR_15;
  FUNC_6(VAR_19, VAR_3,
   VAR_11, VAR_21);
  FUNC_6(VAR_19, VAR_1, VAR_23, VAR_22);
  break;
 default:
  FUNC_1(VAR_19->dev, "Invalid dai->id: %d\n", VAR_18->id);
  return -VAR_0;
 }

 return 0;
}
