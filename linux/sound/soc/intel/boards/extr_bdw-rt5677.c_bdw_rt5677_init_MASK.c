
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_soc_pcm_runtime {int card; TYPE_1__* codec_dai; } ;
struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dev; } ;
struct bdw_rt5677_priv {struct snd_soc_component* component; int gpio_hp_en; } ;
struct TYPE_6__ {int gpiod_dev; } ;
struct TYPE_5__ {struct snd_soc_component* component; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,char*,int ) ;
 int VAR_8 ;
 TYPE_2__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_2__ VAR_12 ;
 int VAR_13 ;
 int FUNC_6 (struct snd_soc_component*,int,int ) ;
 struct bdw_rt5677_priv* FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,int ,int *,int *,int) ;
 struct snd_soc_dapm_context* FUNC_9 (struct snd_soc_component*) ;
 int FUNC_10 (struct snd_soc_dapm_context*,char*) ;
 scalar_t__ FUNC_11 (int *,int,TYPE_2__*) ;

__attribute__((used)) static int FUNC_12(struct snd_soc_pcm_runtime *VAR_14)
{
 struct bdw_rt5677_priv *VAR_15 =
   FUNC_7(VAR_14->card);
 struct snd_soc_component *VAR_16 = VAR_14->codec_dai->component;
 struct snd_soc_dapm_context *VAR_17 = FUNC_9(VAR_16);
 int VAR_18;

 VAR_18 = FUNC_4(VAR_16->dev, VAR_7);
 if (VAR_18)
  FUNC_3(VAR_16->dev, "Failed to add driver gpios\n");




 FUNC_6(VAR_16, VAR_3 |
   VAR_1 | VAR_4,
   VAR_2);


 VAR_15->gpio_hp_en = FUNC_5(VAR_16->dev, "headphone-enable",
      VAR_0);
 if (FUNC_0(VAR_15->gpio_hp_en)) {
  FUNC_2(VAR_16->dev, "Can't find HP_AMP_SHDN_L gpio\n");
  return FUNC_1(VAR_15->gpio_hp_en);
 }


 if (!FUNC_8(VAR_14->card, "Headphone Jack",
   VAR_5, &VAR_8,
   &VAR_10, 1)) {
  VAR_9.gpiod_dev = VAR_16->dev;
  if (FUNC_11(&VAR_8, 1,
    &VAR_9))
   FUNC_2(VAR_16->dev, "Can't add headphone jack gpio\n");
 } else {
  FUNC_2(VAR_16->dev, "Can't create headphone jack\n");
 }


 if (!FUNC_8(VAR_14->card, "Mic Jack",
   VAR_6, &VAR_11,
   &VAR_13, 1)) {
  VAR_12.gpiod_dev = VAR_16->dev;
  if (FUNC_11(&VAR_11, 1, &VAR_12))
   FUNC_2(VAR_16->dev, "Can't add mic jack gpio\n");
 } else {
  FUNC_2(VAR_16->dev, "Can't create mic jack\n");
 }
 VAR_15->component = VAR_16;

 FUNC_10(VAR_17, "MICBIAS1");
 return 0;
}
