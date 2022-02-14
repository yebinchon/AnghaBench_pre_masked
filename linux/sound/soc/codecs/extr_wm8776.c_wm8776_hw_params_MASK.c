
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wm8776_priv {int* sysclk; } ;
struct snd_soc_dai {TYPE_1__* driver; struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct TYPE_2__ {int id; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*,int,...) ;
 int* VAR_4 ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_pcm_hw_params*) ;
 struct wm8776_priv* FUNC_5 (struct snd_soc_component*) ;
 int FUNC_6 (struct snd_soc_component*,int) ;
 int FUNC_7 (struct snd_soc_component*,int,int,int) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_5,
       struct snd_pcm_hw_params *VAR_6,
       struct snd_soc_dai *VAR_7)
{
 struct snd_soc_component *VAR_8 = VAR_7->component;
 struct wm8776_priv *VAR_9 = FUNC_5(VAR_8);
 int VAR_10, VAR_11;
 int VAR_12, VAR_13;
 int VAR_14;

 switch (VAR_7->driver->id) {
 case 128:
  VAR_10 = VAR_2;
  VAR_13 = 0x80;
  VAR_12 = 4;
  break;
 case 129:
  VAR_10 = VAR_1;
  VAR_13 = 0x100;
  VAR_12 = 0;
  break;
 default:
  return -VAR_0;
 }


 switch (FUNC_4(VAR_6)) {
 case 16:
  VAR_11 = 0;
  break;
 case 20:
  VAR_11 = 0x10;
  break;
 case 24:
  VAR_11 = 0x20;
  break;
 case 32:
  VAR_11 = 0x30;
  break;
 default:
  FUNC_2(VAR_8->dev, "Unsupported sample size: %i\n",
   FUNC_4(VAR_6));
  return -VAR_0;
 }


 if (FUNC_6(VAR_8, VAR_3) & VAR_13) {
  for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_4); VAR_14++) {
   if (VAR_9->sysclk[VAR_7->driver->id] / FUNC_3(VAR_6)
       == VAR_4[VAR_14])
    break;
  }

  if (VAR_14 == FUNC_0(VAR_4)) {
   FUNC_2(VAR_8->dev,
    "Unable to configure MCLK ratio %d/%d\n",
    VAR_9->sysclk[VAR_7->driver->id], FUNC_3(VAR_6));
   return -VAR_0;
  }

  FUNC_1(VAR_8->dev, "MCLK is %dfs\n", VAR_4[VAR_14]);

  FUNC_7(VAR_8, VAR_3,
        0x7 << VAR_12, VAR_14 << VAR_12);
 } else {
  FUNC_1(VAR_8->dev, "DAI in slave mode\n");
 }

 FUNC_7(VAR_8, VAR_10, 0x30, VAR_11);

 return 0;
}
