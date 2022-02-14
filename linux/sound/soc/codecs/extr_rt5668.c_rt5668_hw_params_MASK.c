
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {size_t id; int dev; struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct rt5668_priv {int * master; int * lrck; int sysclk; } ;


 int VAR_0 ;
 int VAR_1 ;


 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_0 (int ,char*,int ,int,size_t) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_pcm_hw_params*) ;
 int FUNC_5 (int ,int ) ;
 struct rt5668_priv* FUNC_6 (struct snd_soc_component*) ;
 int FUNC_7 (struct snd_soc_component*,int ,int ,int) ;
 int FUNC_8 (struct snd_pcm_hw_params*) ;

__attribute__((used)) static int FUNC_9(struct snd_pcm_substream *VAR_23,
 struct snd_pcm_hw_params *VAR_24, struct snd_soc_dai *VAR_25)
{
 struct snd_soc_component *VAR_26 = VAR_25->component;
 struct rt5668_priv *VAR_27 = FUNC_6(VAR_26);
 unsigned int VAR_28 = 0, VAR_29 = 0;
 int VAR_30, VAR_31;

 VAR_27->lrck[VAR_25->id] = FUNC_3(VAR_24);
 VAR_30 = FUNC_5(VAR_27->sysclk, VAR_27->lrck[VAR_25->id]);

 VAR_31 = FUNC_8(VAR_24);
 if (VAR_31 < 0) {
  FUNC_1(VAR_26->dev, "Unsupported frame size: %d\n",
   VAR_31);
  return -VAR_0;
 }

 FUNC_0(VAR_25->dev, "lrck is %dHz and pre_div is %d for iis %d\n",
    VAR_27->lrck[VAR_25->id], VAR_30, VAR_25->id);

 switch (FUNC_4(VAR_24)) {
 case 16:
  break;
 case 20:
  VAR_28 |= VAR_2;
  VAR_29 |= VAR_10;
  break;
 case 24:
  VAR_28 |= VAR_3;
  VAR_29 |= VAR_11;
  break;
 case 32:
  VAR_28 |= VAR_4;
  VAR_29 |= VAR_11;
  break;
 case 8:
  VAR_28 |= VAR_12;
  VAR_29 |= VAR_12;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_25->id) {
 case 129:
  FUNC_7(VAR_26, VAR_9,
   VAR_5, VAR_28);
  if (VAR_27->master[129]) {
   FUNC_7(VAR_26,
    VAR_1, VAR_21,
    VAR_30 << VAR_22);
  }
  if (FUNC_2(VAR_24) == 1)
   FUNC_7(VAR_26,
    VAR_9, VAR_8,
    VAR_7);
  else
   FUNC_7(VAR_26,
    VAR_9, VAR_8,
    VAR_6);
  break;
 case 128:
  FUNC_7(VAR_26, VAR_19,
   VAR_13, VAR_29);
  if (VAR_27->master[128]) {
   FUNC_7(VAR_26,
    VAR_20, VAR_17,
    VAR_30 << VAR_18);
  }
  if (FUNC_2(VAR_24) == 1)
   FUNC_7(VAR_26,
    VAR_19, VAR_16,
    VAR_15);
  else
   FUNC_7(VAR_26,
    VAR_19, VAR_16,
    VAR_14);
  break;
 default:
  FUNC_1(VAR_26->dev, "Invalid dai->id: %d\n", VAR_25->id);
  return -VAR_0;
 }

 return 0;
}
