
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct wm8523_priv {int sysclk; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct TYPE_4__ {int ratio; int value; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__* VAR_8 ;
 int FUNC_1 (int ,char*,int) ;
 TYPE_1__* VAR_9 ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 struct wm8523_priv* FUNC_4 (struct snd_soc_component*) ;
 int FUNC_5 (struct snd_soc_component*,int ) ;
 int FUNC_6 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_10,
       struct snd_pcm_hw_params *VAR_11,
       struct snd_soc_dai *VAR_12)
{
 struct snd_soc_component *VAR_13 = VAR_12->component;
 struct wm8523_priv *VAR_14 = FUNC_4(VAR_13);
 int VAR_15;
 u16 VAR_16 = FUNC_5(VAR_13, VAR_1);
 u16 VAR_17 = FUNC_5(VAR_13, VAR_2);


 for (VAR_15 = 0; VAR_15 < FUNC_0(VAR_9); VAR_15++) {
  if (VAR_14->sysclk / FUNC_2(VAR_11) ==
      VAR_9[VAR_15].ratio)
   break;
 }


 if (VAR_15 == FUNC_0(VAR_9)) {
  FUNC_1(VAR_13->dev, "MCLK/fs ratio %d unsupported\n",
   VAR_14->sysclk / FUNC_2(VAR_11));
  return -VAR_0;
 }

 VAR_17 &= ~VAR_6;
 VAR_17 |= VAR_9[VAR_15].value;

 if (VAR_16 & VAR_3) {

  for (VAR_15 = 0; VAR_15 < FUNC_0(VAR_8); VAR_15++)
   if (FUNC_3(VAR_11) * 2 <= VAR_8[VAR_15].ratio)
    break;

  if (VAR_15 == FUNC_0(VAR_8)) {
   FUNC_1(VAR_13->dev,
    "No matching BCLK/fs ratio for word length %d\n",
    FUNC_3(VAR_11));
   return -VAR_0;
  }

  VAR_17 &= ~VAR_4;
  VAR_17 |= VAR_8[VAR_15].value << VAR_5;
 }

 VAR_16 &= ~VAR_7;
 switch (FUNC_3(VAR_11)) {
 case 16:
  break;
 case 20:
  VAR_16 |= 0x8;
  break;
 case 24:
  VAR_16 |= 0x10;
  break;
 case 32:
  VAR_16 |= 0x18;
  break;
 }

 FUNC_6(VAR_13, VAR_1, VAR_16);
 FUNC_6(VAR_13, VAR_2, VAR_17);

 return 0;
}
