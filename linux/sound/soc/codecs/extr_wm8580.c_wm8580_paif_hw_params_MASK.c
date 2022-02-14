
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct wm8580_priv {int* sysclk; } ;
struct snd_soc_dai {TYPE_1__* driver; struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct TYPE_2__ {size_t id; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*,int,int) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_pcm_hw_params*) ;
 struct wm8580_priv* FUNC_5 (struct snd_soc_component*) ;
 int FUNC_6 (struct snd_soc_component*,scalar_t__,int,int) ;
 int* VAR_11 ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_12,
     struct snd_pcm_hw_params *VAR_13,
     struct snd_soc_dai *VAR_14)
{
 struct snd_soc_component *VAR_15 = VAR_14->component;
 struct wm8580_priv *VAR_16 = FUNC_5(VAR_15);
 u16 VAR_17 = 0;
 u16 VAR_18 = 0;
 int VAR_19, VAR_20, VAR_21;


 switch (FUNC_4(VAR_13)) {
 case 16:
  VAR_17 |= 0x8;
  break;
 case 20:
  VAR_17 |= 0x0;
  VAR_18 |= VAR_3;
  break;
 case 24:
  VAR_17 |= 0x0;
  VAR_18 |= VAR_4;
  break;
 case 32:
  VAR_17 |= 0x0;
  VAR_18 |= VAR_5;
  break;
 default:
  return -VAR_0;
 }


 VAR_20 = VAR_16->sysclk[VAR_14->driver->id] / FUNC_3(VAR_13);
 for (VAR_19 = 0; VAR_19 < FUNC_0(VAR_11); VAR_19++)
  if (VAR_20 == VAR_11[VAR_19])
   break;
 if (VAR_19 == FUNC_0(VAR_11)) {
  FUNC_2(VAR_15->dev, "Invalid clock ratio %d/%d\n",
   VAR_16->sysclk[VAR_14->driver->id], FUNC_3(VAR_13));
  return -VAR_0;
 }
 VAR_17 |= VAR_19;
 FUNC_1(VAR_15->dev, "Running at %dfs with %dHz clock\n",
  VAR_11[VAR_19], VAR_16->sysclk[VAR_14->driver->id]);

 if (VAR_12->stream == VAR_1) {
  switch (VAR_20) {
  case 128:
  case 192:
   VAR_21 = VAR_8;
   FUNC_1(VAR_15->dev, "Selecting 64x OSR\n");
   break;
  default:
   VAR_21 = 0;
   FUNC_1(VAR_15->dev, "Selecting 128x OSR\n");
   break;
  }

  FUNC_6(VAR_15, VAR_10, VAR_8, VAR_21);
 }

 FUNC_6(VAR_15, VAR_9 + VAR_14->driver->id,
       VAR_7 | VAR_2,
       VAR_17);
 FUNC_6(VAR_15, VAR_10 + VAR_14->driver->id,
       VAR_6, VAR_18);
 return 0;
}
