
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {size_t id; int dev; struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct rt5659_priv {int* lrck; int sysclk; } ;


 int VAR_0 ;
 int VAR_1 ;



 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 int VAR_14 ;
 unsigned int VAR_15 ;
 int VAR_16 ;
 unsigned int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (int ,char*,int,int,size_t) ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (int ,int) ;
 struct rt5659_priv* FUNC_5 (struct snd_soc_component*) ;
 int FUNC_6 (struct snd_soc_component*,int ,unsigned int,unsigned int) ;
 int FUNC_7 (struct snd_pcm_hw_params*) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_19,
 struct snd_pcm_hw_params *VAR_20, struct snd_soc_dai *VAR_21)
{
 struct snd_soc_component *VAR_22 = VAR_21->component;
 struct rt5659_priv *VAR_23 = FUNC_5(VAR_22);
 unsigned int VAR_24 = 0, VAR_25, VAR_26;
 int VAR_27, VAR_28;

 VAR_23->lrck[VAR_21->id] = FUNC_2(VAR_20);
 VAR_27 = FUNC_4(VAR_23->sysclk, VAR_23->lrck[VAR_21->id]);
 if (VAR_27 < 0) {
  FUNC_1(VAR_22->dev, "Unsupported clock setting %d for DAI %d\n",
   VAR_23->lrck[VAR_21->id], VAR_21->id);
  return -VAR_0;
 }
 VAR_28 = FUNC_7(VAR_20);
 if (VAR_28 < 0) {
  FUNC_1(VAR_22->dev, "Unsupported frame size: %d\n", VAR_28);
  return -VAR_0;
 }

 FUNC_0(VAR_21->dev, "lrck is %dHz and pre_div is %d for iis %d\n",
    VAR_23->lrck[VAR_21->id], VAR_27, VAR_21->id);

 switch (FUNC_3(VAR_20)) {
 case 16:
  break;
 case 20:
  VAR_24 |= VAR_9;
  break;
 case 24:
  VAR_24 |= VAR_10;
  break;
 case 8:
  VAR_24 |= VAR_11;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_21->id) {
 case 130:
  VAR_26 = VAR_13;
  VAR_25 = VAR_27 << VAR_14;
  FUNC_6(VAR_22, VAR_6,
   VAR_12, VAR_24);
  break;
 case 129:
  VAR_26 = VAR_15;
  VAR_25 = VAR_27 << VAR_16;
  FUNC_6(VAR_22, VAR_7,
   VAR_12, VAR_24);
  break;
 case 128:
  VAR_26 = VAR_17;
  VAR_25 = VAR_27 << VAR_18;
  FUNC_6(VAR_22, VAR_8,
   VAR_12, VAR_24);
  break;
 default:
  FUNC_1(VAR_22->dev, "Invalid dai->id: %d\n", VAR_21->id);
  return -VAR_0;
 }

 FUNC_6(VAR_22, VAR_1, VAR_26, VAR_25);

 switch (VAR_23->lrck[VAR_21->id]) {
 case 192000:
  FUNC_6(VAR_22, VAR_1,
   VAR_5, VAR_3);
  break;
 case 96000:
  FUNC_6(VAR_22, VAR_1,
   VAR_5, VAR_4);
  break;
 default:
  FUNC_6(VAR_22, VAR_1,
   VAR_5, VAR_2);
  break;
 }

 return 0;
}
