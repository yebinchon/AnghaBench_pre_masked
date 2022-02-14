
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_pcm_runtime {struct snd_soc_dai* codec_dai; struct snd_soc_card* card; } ;
struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_dai {TYPE_1__* driver; int component; } ;
struct snd_soc_card {int dev; struct snd_soc_dapm_context dapm; } ;
struct TYPE_4__ {int shutdown; int startup; } ;
struct TYPE_3__ {int * ops; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,int ) ;
 int VAR_11 ;
 int FUNC_4 (struct snd_soc_card*,char*,int ,int *,int *,int ) ;
 int FUNC_5 (struct snd_soc_dapm_context*,char*) ;
 int FUNC_6 (int ,int *,int ,int ) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static int FUNC_8(struct snd_soc_pcm_runtime *VAR_12)
{
 struct snd_soc_dai *VAR_13 = VAR_12->codec_dai;
 struct snd_soc_card *VAR_14 = VAR_12->card;
 struct snd_soc_dapm_context *VAR_15 = &VAR_14->dapm;
 int VAR_16;



 VAR_9 = VAR_12->codec_dai->component;



 VAR_16 = FUNC_4(VAR_14, "hook_switch", VAR_2,
        &VAR_4, ((void*)0), 0);
 if (VAR_16)
  FUNC_2(VAR_14->dev,
    "Failed to allocate resources for hook switch, "
    "will continue without one.\n");
 else {
  VAR_16 = FUNC_6(VAR_14->dev, &VAR_4,
     FUNC_0(VAR_5),
     VAR_5);
  if (VAR_16)
   FUNC_2(VAR_14->dev,
    "Failed to set up hook switch GPIO line, "
    "will continue with hook switch inactive.\n");
 }

 VAR_11 = FUNC_3(VAR_14->dev, "modem_codec",
        VAR_0);
 if (FUNC_1(VAR_11)) {
  FUNC_2(VAR_14->dev, "Failed to obtain modem_codec GPIO\n");
  return 0;
 }


 if (!VAR_13->driver->ops) {
  VAR_13->driver->ops = &VAR_3;
 } else {
  VAR_6.startup = VAR_8;
  VAR_6.shutdown = VAR_7;
 }


 VAR_16 = FUNC_7(VAR_1, &VAR_10);
 if (VAR_16) {
  FUNC_2(VAR_14->dev,
    "Failed to register line discipline, "
    "will continue without any controls.\n");
  return 0;
 }


 FUNC_5(VAR_15, "Mouthpiece");
 FUNC_5(VAR_15, "Speaker");
 FUNC_5(VAR_15, "AGCIN");
 FUNC_5(VAR_15, "AGCOUT");

 return 0;
}
