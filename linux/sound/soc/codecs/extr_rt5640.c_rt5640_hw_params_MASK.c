
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {size_t id; int dev; struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct rt5640_priv {int* lrck; int* bclk; int sysclk; } ;


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
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int ,char*,int,int,...) ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (struct snd_soc_component*,size_t) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_pcm_hw_params*) ;
 int FUNC_5 (int ,int) ;
 struct rt5640_priv* FUNC_6 (struct snd_soc_component*) ;
 int FUNC_7 (struct snd_soc_component*,int ,unsigned int,unsigned int) ;
 int FUNC_8 (struct snd_pcm_hw_params*) ;

__attribute__((used)) static int FUNC_9(struct snd_pcm_substream *VAR_18,
 struct snd_pcm_hw_params *VAR_19, struct snd_soc_dai *VAR_20)
{
 struct snd_soc_component *VAR_21 = VAR_20->component;
 struct rt5640_priv *VAR_22 = FUNC_6(VAR_21);
 unsigned int VAR_23 = 0, VAR_24, VAR_25;
 int VAR_26, VAR_27, VAR_28, VAR_29;

 VAR_22->lrck[VAR_20->id] = FUNC_3(VAR_19);
 VAR_27 = FUNC_5(VAR_22->sysclk, VAR_22->lrck[VAR_20->id]);
 if (VAR_27 < 0) {
  FUNC_1(VAR_21->dev, "Unsupported clock setting %d for DAI %d\n",
   VAR_22->lrck[VAR_20->id], VAR_20->id);
  return -VAR_0;
 }
 VAR_29 = FUNC_8(VAR_19);
 if (VAR_29 < 0) {
  FUNC_1(VAR_21->dev, "Unsupported frame size: %d\n", VAR_29);
  return VAR_29;
 }
 if (VAR_29 > 32)
  VAR_28 = 1;
 else
  VAR_28 = 0;
 VAR_22->bclk[VAR_20->id] = VAR_22->lrck[VAR_20->id] * (32 << VAR_28);

 FUNC_0(VAR_20->dev, "bclk is %dHz and lrck is %dHz\n",
  VAR_22->bclk[VAR_20->id], VAR_22->lrck[VAR_20->id]);
 FUNC_0(VAR_20->dev, "bclk_ms is %d and pre_div is %d for iis %d\n",
    VAR_28, VAR_27, VAR_20->id);

 switch (FUNC_4(VAR_19)) {
 case 16:
  break;
 case 20:
  VAR_23 |= VAR_8;
  break;
 case 24:
  VAR_23 |= VAR_9;
  break;
 case 8:
  VAR_23 |= VAR_10;
  break;
 default:
  return -VAR_0;
 }

 VAR_26 = FUNC_2(VAR_21, VAR_20->id);
 if (VAR_26 < 0) {
  FUNC_1(VAR_21->dev, "Failed to get sdp info: %d\n", VAR_26);
  return -VAR_0;
 }
 if (VAR_26 & VAR_16) {
  VAR_25 = VAR_4 | VAR_12;
  VAR_24 = VAR_28 << VAR_5 |
   VAR_27 << VAR_13;
  FUNC_7(VAR_21, VAR_2,
   VAR_11, VAR_23);
  FUNC_7(VAR_21, VAR_1, VAR_25, VAR_24);
 }
 if (VAR_26 & VAR_17) {
  VAR_25 = VAR_6 | VAR_14;
  VAR_24 = VAR_28 << VAR_7 |
   VAR_27 << VAR_15;
  FUNC_7(VAR_21, VAR_3,
   VAR_11, VAR_23);
  FUNC_7(VAR_21, VAR_1, VAR_25, VAR_24);
 }

 return 0;
}
