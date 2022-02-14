
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_soc_pcm_runtime {int card; TYPE_1__* codec_dai; } ;
struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dev; } ;
struct kbl_codec_private {int gpio_lo_mute; } ;
struct TYPE_6__ {int gpiod_dev; } ;
struct TYPE_5__ {struct snd_soc_component* component; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,char*,int ) ;
 int VAR_4 ;
 TYPE_2__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__ VAR_8 ;
 int VAR_9 ;
 struct kbl_codec_private* FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,int ,int *,int *,int) ;
 struct snd_soc_dapm_context* FUNC_8 (struct snd_soc_component*) ;
 int FUNC_9 (struct snd_soc_dapm_context*,char*) ;
 int FUNC_10 (int *,int,TYPE_2__*) ;

__attribute__((used)) static int FUNC_11(struct snd_soc_pcm_runtime *VAR_10)
{
 int VAR_11;
 struct kbl_codec_private *VAR_12 = FUNC_6(VAR_10->card);
 struct snd_soc_component *VAR_13 = VAR_10->codec_dai->component;
 struct snd_soc_dapm_context *VAR_14 = FUNC_8(VAR_13);

 VAR_11 = FUNC_4(VAR_13->dev, VAR_3);
 if (VAR_11)
  FUNC_3(VAR_13->dev, "Failed to add driver gpios\n");


 VAR_12->gpio_lo_mute = FUNC_5(VAR_13->dev, "lineout-mute",
        VAR_0);
 if (FUNC_0(VAR_12->gpio_lo_mute)) {
  FUNC_2(VAR_13->dev, "Can't find GPIO_MUTE# gpio\n");
  return FUNC_1(VAR_12->gpio_lo_mute);
 }


 VAR_11 = FUNC_7(VAR_10->card, "Lineout Jack",
        VAR_1, &VAR_4,
        &VAR_6, 1);
 if (VAR_11)
  FUNC_3(VAR_13->dev, "Can't create Lineout jack\n");
 else {
  VAR_5.gpiod_dev = VAR_13->dev;
  VAR_11 = FUNC_10(&VAR_4, 1,
          &VAR_5);
  if (VAR_11)
   FUNC_3(VAR_13->dev, "Can't add Lineout jack gpio\n");
 }


 VAR_11 = FUNC_7(VAR_10->card, "Mic Jack",
        VAR_2, &VAR_7,
        &VAR_9, 1);
 if (VAR_11)
  FUNC_3(VAR_13->dev, "Can't create mic jack\n");
 else {
  VAR_8.gpiod_dev = VAR_13->dev;
  VAR_11 = FUNC_10(&VAR_7, 1, &VAR_8);
  if (VAR_11)
   FUNC_3(VAR_13->dev, "Can't add mic jack gpio\n");
 }


 FUNC_9(VAR_14, "MICBIAS1");
 FUNC_9(VAR_14, "BST1");
 FUNC_9(VAR_14, "BST2");

 return 0;
}
