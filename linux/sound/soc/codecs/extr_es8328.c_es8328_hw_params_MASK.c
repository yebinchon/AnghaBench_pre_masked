
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct es8328_priv {int* mclk_ratios; scalar_t__ playback_fs; scalar_t__ mclkdiv2; TYPE_1__* sysclk_constraints; scalar_t__ master; } ;
struct TYPE_2__ {int count; scalar_t__* list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct snd_soc_component*) ;
 scalar_t__ FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 struct es8328_priv* FUNC_4 (struct snd_soc_component*) ;
 int FUNC_5 (struct snd_soc_component*,int,int,int) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_13,
 struct snd_pcm_hw_params *VAR_14,
 struct snd_soc_dai *VAR_15)
{
 struct snd_soc_component *VAR_16 = VAR_15->component;
 struct es8328_priv *VAR_17 = FUNC_4(VAR_16);
 int VAR_18;
 int VAR_19;
 int VAR_20;
 int VAR_21;

 if (VAR_13->stream == VAR_12)
  VAR_19 = VAR_8;
 else
  VAR_19 = VAR_4;

 if (VAR_17->master) {
  if (!VAR_17->sysclk_constraints) {
   FUNC_0(VAR_16->dev, "No MCLK configured\n");
   return -VAR_0;
  }

  for (VAR_18 = 0; VAR_18 < VAR_17->sysclk_constraints->count; VAR_18++)
   if (VAR_17->sysclk_constraints->list[VAR_18] ==
       FUNC_2(VAR_14))
    break;

  if (VAR_18 == VAR_17->sysclk_constraints->count) {
   FUNC_0(VAR_16->dev,
    "LRCLK %d unsupported with current clock\n",
    FUNC_2(VAR_14));
   return -VAR_0;
  }
  VAR_21 = VAR_17->mclk_ratios[VAR_18];
 } else {
  VAR_21 = 0;
  VAR_17->mclkdiv2 = 0;
 }

 FUNC_5(VAR_16, VAR_9,
   VAR_10,
   VAR_17->mclkdiv2 ? VAR_10 : 0);

 switch (FUNC_3(VAR_14)) {
 case 16:
  VAR_20 = 3;
  break;
 case 18:
  VAR_20 = 2;
  break;
 case 20:
  VAR_20 = 1;
  break;
 case 24:
  VAR_20 = 0;
  break;
 case 32:
  VAR_20 = 4;
  break;
 default:
  return -VAR_0;
 }

 if (VAR_13->stream == VAR_12) {
  FUNC_5(VAR_16, VAR_5,
    VAR_6,
    VAR_20 << VAR_7);

  VAR_17->playback_fs = FUNC_2(VAR_14);
  FUNC_1(VAR_16);
 } else
  FUNC_5(VAR_16, VAR_1,
    VAR_2,
    VAR_20 << VAR_3);

 return FUNC_5(VAR_16, VAR_19, VAR_11, VAR_21);
}
