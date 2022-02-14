
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int id; struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct rt1308_priv {int lrck; int bclk; int sysclk; } ;


 int VAR_0 ;

 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,char*,int,int,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (int ,int) ;
 struct rt1308_priv* FUNC_5 (struct snd_soc_component*) ;
 int FUNC_6 (struct snd_soc_component*,int ,unsigned int,unsigned int) ;
 int FUNC_7 (struct snd_pcm_hw_params*) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_10,
 struct snd_pcm_hw_params *VAR_11, struct snd_soc_dai *VAR_12)
{
 struct snd_soc_component *VAR_13 = VAR_12->component;
 struct rt1308_priv *VAR_14 = FUNC_5(VAR_13);
 unsigned int VAR_15 = 0, VAR_16, VAR_17;
 int VAR_18, VAR_19, VAR_20;

 VAR_14->lrck = FUNC_2(VAR_11);
 VAR_18 = FUNC_4(VAR_14->sysclk, VAR_14->lrck);
 if (VAR_18 < 0) {
  FUNC_1(VAR_13->dev,
   "Unsupported clock setting %d\n", VAR_14->lrck);
  return -VAR_0;
 }

 VAR_20 = FUNC_7(VAR_11);
 if (VAR_20 < 0) {
  FUNC_1(VAR_13->dev, "Unsupported frame size: %d\n",
   VAR_20);
  return -VAR_0;
 }

 VAR_19 = VAR_20 > 32;
 VAR_14->bclk = VAR_14->lrck * (32 << VAR_19);

 FUNC_0(VAR_13->dev, "bclk_ms is %d and pre_div is %d for iis %d\n",
    VAR_19, VAR_18, VAR_12->id);

 FUNC_0(VAR_13->dev, "lrck is %dHz and pre_div is %d for iis %d\n",
    VAR_14->lrck, VAR_18, VAR_12->id);

 switch (FUNC_3(VAR_11)) {
 case 16:
  VAR_15 |= VAR_4;
  break;
 case 20:
  VAR_15 |= VAR_5;
  break;
 case 24:
  VAR_15 |= VAR_6;
  break;
 case 8:
  VAR_15 |= VAR_7;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_12->id) {
 case 128:
  VAR_17 = VAR_2;
  VAR_16 = VAR_18 << VAR_3;
  FUNC_6(VAR_13,
   VAR_9, VAR_8,
   VAR_15);
  break;
 default:
  FUNC_1(VAR_13->dev, "Invalid dai->id: %d\n", VAR_12->id);
  return -VAR_0;
 }

 FUNC_6(VAR_13, VAR_1,
  VAR_17, VAR_16);

 return 0;
}
