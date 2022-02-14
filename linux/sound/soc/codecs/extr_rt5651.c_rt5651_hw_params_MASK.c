
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {size_t id; int dev; struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct rt5651_priv {int* lrck; int* bclk; int sysclk; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,char*,int,int,...) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (int ,int) ;
 struct rt5651_priv* FUNC_5 (struct snd_soc_component*) ;
 int FUNC_6 (struct snd_soc_component*,int ,unsigned int,unsigned int) ;
 int FUNC_7 (struct snd_pcm_hw_params*) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_13,
 struct snd_pcm_hw_params *VAR_14, struct snd_soc_dai *VAR_15)
{
 struct snd_soc_component *VAR_16 = VAR_15->component;
 struct rt5651_priv *VAR_17 = FUNC_5(VAR_16);
 unsigned int VAR_18 = 0, VAR_19, VAR_20;
 int VAR_21, VAR_22, VAR_23;

 VAR_17->lrck[VAR_15->id] = FUNC_2(VAR_14);
 VAR_21 = FUNC_4(VAR_17->sysclk, VAR_17->lrck[VAR_15->id]);

 if (VAR_21 < 0) {
  FUNC_1(VAR_16->dev, "Unsupported clock setting\n");
  return -VAR_0;
 }
 VAR_23 = FUNC_7(VAR_14);
 if (VAR_23 < 0) {
  FUNC_1(VAR_16->dev, "Unsupported frame size: %d\n", VAR_23);
  return -VAR_0;
 }
 VAR_22 = VAR_23 > 32 ? 1 : 0;
 VAR_17->bclk[VAR_15->id] = VAR_17->lrck[VAR_15->id] * (32 << VAR_22);

 FUNC_0(VAR_15->dev, "bclk is %dHz and lrck is %dHz\n",
  VAR_17->bclk[VAR_15->id], VAR_17->lrck[VAR_15->id]);
 FUNC_0(VAR_15->dev, "bclk_ms is %d and pre_div is %d for iis %d\n",
    VAR_22, VAR_21, VAR_15->id);

 switch (FUNC_3(VAR_14)) {
 case 16:
  break;
 case 20:
  VAR_18 |= VAR_5;
  break;
 case 24:
  VAR_18 |= VAR_6;
  break;
 case 8:
  VAR_18 |= VAR_7;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_15->id) {
 case 129:
  VAR_20 = VAR_9;
  VAR_19 = VAR_21 << VAR_10;
  FUNC_6(VAR_16, VAR_2,
   VAR_8, VAR_18);
  FUNC_6(VAR_16, VAR_1, VAR_20, VAR_19);
  break;
 case 128:
  VAR_20 = VAR_4 | VAR_11;
  VAR_19 = VAR_21 << VAR_12;
  FUNC_6(VAR_16, VAR_3,
   VAR_8, VAR_18);
  FUNC_6(VAR_16, VAR_1, VAR_20, VAR_19);
  break;
 default:
  FUNC_1(VAR_16->dev, "Wrong dai->id: %d\n", VAR_15->id);
  return -VAR_0;
 }

 return 0;
}
