
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int id; struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct rt1305_priv {int lrck; int bclk; int sysclk; } ;


 int VAR_0 ;

 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,char*,int,int,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_pcm_hw_params*) ;
 int FUNC_5 (int ,int) ;
 struct rt1305_priv* FUNC_6 (struct snd_soc_component*) ;
 int FUNC_7 (struct snd_soc_component*,int ,unsigned int,unsigned int) ;
 int FUNC_8 (struct snd_soc_dai*,int ,int ,int,int) ;
 int FUNC_9 (struct snd_soc_dai*,int ,int,int ) ;
 int FUNC_10 (struct snd_pcm_hw_params*) ;

__attribute__((used)) static int FUNC_11(struct snd_pcm_substream *VAR_13,
 struct snd_pcm_hw_params *VAR_14, struct snd_soc_dai *VAR_15)
{
 struct snd_soc_component *VAR_16 = VAR_15->component;
 struct rt1305_priv *VAR_17 = FUNC_6(VAR_16);
 unsigned int VAR_18 = 0, VAR_19, VAR_20;
 int VAR_21, VAR_22, VAR_23;

 VAR_17->lrck = FUNC_3(VAR_14);
 VAR_21 = FUNC_5(VAR_17->sysclk, VAR_17->lrck);
 if (VAR_21 < 0) {
  FUNC_2(VAR_16->dev, "Force using PLL ");
  FUNC_8(VAR_15, 0, VAR_11,
   VAR_17->lrck * 64, VAR_17->lrck * 256);
  FUNC_9(VAR_15, VAR_4,
   VAR_17->lrck * 256, VAR_12);
  VAR_21 = 0;
 }
 VAR_23 = FUNC_10(VAR_14);
 if (VAR_23 < 0) {
  FUNC_1(VAR_16->dev, "Unsupported frame size: %d\n",
   VAR_23);
  return -VAR_0;
 }

 VAR_22 = VAR_23 > 32;
 VAR_17->bclk = VAR_17->lrck * (32 << VAR_22);

 FUNC_0(VAR_16->dev, "bclk_ms is %d and pre_div is %d for iis %d\n",
    VAR_22, VAR_21, VAR_15->id);

 FUNC_0(VAR_16->dev, "lrck is %dHz and pre_div is %d for iis %d\n",
    VAR_17->lrck, VAR_21, VAR_15->id);

 switch (FUNC_4(VAR_14)) {
 case 16:
  VAR_18 |= VAR_5;
  break;
 case 20:
  VAR_18 |= VAR_6;
  break;
 case 24:
  VAR_18 |= VAR_7;
  break;
 case 8:
  VAR_18 |= VAR_8;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_15->id) {
 case 128:
  VAR_20 = VAR_2;
  VAR_19 = VAR_21 << VAR_3;
  FUNC_7(VAR_16, VAR_10,
   VAR_9,
   VAR_18);
  break;
 default:
  FUNC_1(VAR_16->dev, "Invalid dai->id: %d\n", VAR_15->id);
  return -VAR_0;
 }

 FUNC_7(VAR_16, VAR_1,
  VAR_20, VAR_19);

 return 0;
}
