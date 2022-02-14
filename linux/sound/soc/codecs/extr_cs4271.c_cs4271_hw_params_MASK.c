
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {int playback_active; int capture_active; struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct cs4271_private {int rate; unsigned int mclk; scalar_t__ master; int regmap; scalar_t__ enable_soft_reset; } ;
struct TYPE_2__ {scalar_t__ master; unsigned int speed_mode; unsigned int ratio; unsigned int ratio_mask; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 TYPE_1__* VAR_12 ;
 int FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (int ,int ,unsigned int,unsigned int) ;
 struct cs4271_private* FUNC_4 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_13,
       struct snd_pcm_hw_params *VAR_14,
       struct snd_soc_dai *VAR_15)
{
 struct snd_soc_component *VAR_16 = VAR_15->component;
 struct cs4271_private *VAR_17 = FUNC_4(VAR_16);
 int VAR_18, VAR_19;
 unsigned int VAR_20, VAR_21;

 if (VAR_17->enable_soft_reset) {
  if ((VAR_13->stream == VAR_11 &&
       !VAR_15->capture_active) ||
      (VAR_13->stream == VAR_10 &&
       !VAR_15->playback_active)) {
   VAR_19 = FUNC_3(VAR_17->regmap, VAR_6,
       VAR_7,
       VAR_7);
   if (VAR_19 < 0)
    return VAR_19;

   VAR_19 = FUNC_3(VAR_17->regmap, VAR_6,
       VAR_7, 0);
   if (VAR_19 < 0)
    return VAR_19;
  }
 }

 VAR_17->rate = FUNC_2(VAR_14);


 if (VAR_17->rate < 50000)
  VAR_21 = VAR_2;
 else if (VAR_17->rate < 100000)
  VAR_21 = VAR_3;
 else
  VAR_21 = VAR_4;

 VAR_20 = VAR_17->mclk / VAR_17->rate;
 for (VAR_18 = 0; VAR_18 < VAR_8; VAR_18++)
  if ((VAR_12[VAR_18].master == VAR_17->master) &&
      (VAR_12[VAR_18].speed_mode == VAR_21) &&
      (VAR_12[VAR_18].ratio == VAR_20))
   break;

 if (VAR_18 == VAR_8) {
  FUNC_1(VAR_16->dev, "Invalid sample rate\n");
  return -VAR_9;
 }

 VAR_21 |= VAR_12[VAR_18].ratio_mask;

 VAR_19 = FUNC_3(VAR_17->regmap, VAR_0,
  VAR_5 | VAR_1, VAR_21);
 if (VAR_19 < 0)
  return VAR_19;

 return FUNC_0(VAR_16);
}
