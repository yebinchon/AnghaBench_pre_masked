
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {size_t id; int dev; struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct rt5645_priv {int* lrck; int codec_type; int* bclk; int sysclk; } ;



 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,char*,int,int,...) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (int ,int) ;
 struct rt5645_priv* FUNC_5 (struct snd_soc_component*) ;
 int FUNC_6 (struct snd_soc_component*,int ,unsigned int,unsigned int) ;
 int FUNC_7 (struct snd_pcm_hw_params*) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_10,
 struct snd_pcm_hw_params *VAR_11, struct snd_soc_dai *VAR_12)
{
 struct snd_soc_component *VAR_13 = VAR_12->component;
 struct rt5645_priv *VAR_14 = FUNC_5(VAR_13);
 unsigned int VAR_15 = 0, VAR_16, VAR_17, VAR_18;
 int VAR_19, VAR_20, VAR_21;

 VAR_14->lrck[VAR_12->id] = FUNC_2(VAR_11);
 VAR_19 = FUNC_4(VAR_14->sysclk, VAR_14->lrck[VAR_12->id]);
 if (VAR_19 < 0) {
  FUNC_1(VAR_13->dev, "Unsupported clock setting\n");
  return -VAR_0;
 }
 VAR_21 = FUNC_7(VAR_11);
 if (VAR_21 < 0) {
  FUNC_1(VAR_13->dev, "Unsupported frame size: %d\n", VAR_21);
  return -VAR_0;
 }

 switch (VAR_14->codec_type) {
 case 130:
  VAR_18 = 4;
  break;
 default:
  VAR_18 = 2;
  break;
 }

 VAR_20 = VAR_21 > 32;
 VAR_14->bclk[VAR_12->id] = VAR_14->lrck[VAR_12->id] * (32 << VAR_20);

 FUNC_0(VAR_12->dev, "bclk is %dHz and lrck is %dHz\n",
  VAR_14->bclk[VAR_12->id], VAR_14->lrck[VAR_12->id]);
 FUNC_0(VAR_12->dev, "bclk_ms is %d and pre_div is %d for iis %d\n",
    VAR_20, VAR_19, VAR_12->id);

 switch (FUNC_3(VAR_11)) {
 case 16:
  break;
 case 20:
  VAR_15 = 0x1;
  break;
 case 24:
  VAR_15 = 0x2;
  break;
 case 8:
  VAR_15 = 0x3;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_12->id) {
 case 129:
  VAR_17 = VAR_6;
  VAR_16 = VAR_19 << VAR_7;
  FUNC_6(VAR_13, VAR_2,
   (0x3 << VAR_18), (VAR_15 << VAR_18));
  FUNC_6(VAR_13, VAR_1, VAR_17, VAR_16);
  break;
 case 128:
  VAR_17 = VAR_4 | VAR_8;
  VAR_16 = VAR_20 << VAR_5 |
   VAR_19 << VAR_9;
  FUNC_6(VAR_13, VAR_3,
   (0x3 << VAR_18), (VAR_15 << VAR_18));
  FUNC_6(VAR_13, VAR_1, VAR_17, VAR_16);
  break;
 default:
  FUNC_1(VAR_13->dev, "Invalid dai->id: %d\n", VAR_12->id);
  return -VAR_0;
 }

 return 0;
}
