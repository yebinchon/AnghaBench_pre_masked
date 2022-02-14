
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {size_t id; int dev; struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct rt5660_priv {int* lrck; int* bclk; int sysclk; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,char*,int,int,...) ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (int ,int) ;
 struct rt5660_priv* FUNC_5 (struct snd_soc_component*) ;
 int FUNC_6 (struct snd_soc_component*,int ,unsigned int,unsigned int) ;
 int FUNC_7 (struct snd_pcm_hw_params*) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_11,
 struct snd_pcm_hw_params *VAR_12, struct snd_soc_dai *VAR_13)
{
 struct snd_soc_component *VAR_14 = VAR_13->component;
 struct rt5660_priv *VAR_15 = FUNC_5(VAR_14);
 unsigned int VAR_16 = 0, VAR_17, VAR_18;
 int VAR_19, VAR_20, VAR_21;

 VAR_15->lrck[VAR_13->id] = FUNC_2(VAR_12);
 VAR_19 = FUNC_4(VAR_15->sysclk, VAR_15->lrck[VAR_13->id]);
 if (VAR_19 < 0) {
  FUNC_1(VAR_14->dev, "Unsupported clock setting %d for DAI %d\n",
   VAR_15->lrck[VAR_13->id], VAR_13->id);
  return -VAR_0;
 }

 VAR_21 = FUNC_7(VAR_12);
 if (VAR_21 < 0) {
  FUNC_1(VAR_14->dev, "Unsupported frame size: %d\n", VAR_21);
  return VAR_21;
 }

 if (VAR_21 > 32)
  VAR_20 = 1;
 else
  VAR_20 = 0;

 VAR_15->bclk[VAR_13->id] = VAR_15->lrck[VAR_13->id] * (32 << VAR_20);

 FUNC_0(VAR_13->dev, "bclk is %dHz and lrck is %dHz\n",
  VAR_15->bclk[VAR_13->id], VAR_15->lrck[VAR_13->id]);
 FUNC_0(VAR_13->dev, "bclk_ms is %d and pre_div is %d for iis %d\n",
    VAR_20, VAR_19, VAR_13->id);

 switch (FUNC_3(VAR_12)) {
 case 16:
  break;
 case 20:
  VAR_16 |= VAR_5;
  break;
 case 24:
  VAR_16 |= VAR_6;
  break;
 case 8:
  VAR_16 |= VAR_7;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_13->id) {
 case 128:
  VAR_18 = VAR_3 | VAR_9;
  VAR_17 = VAR_20 << VAR_4 |
   VAR_19 << VAR_10;
  FUNC_6(VAR_14, VAR_2, VAR_8,
   VAR_16);
  FUNC_6(VAR_14, VAR_1, VAR_18, VAR_17);
  break;

 default:
  FUNC_1(VAR_14->dev, "Invalid dai->id: %d\n", VAR_13->id);
  return -VAR_0;
 }

 return 0;
}
