
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct snd_soc_pcm_runtime {struct snd_soc_card* card; } ;
struct snd_soc_card {int dev; } ;
struct rx51_audio_pdata {int jack_detection_gpio; } ;
struct TYPE_4__ {int gpio; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct snd_soc_pcm_runtime*,int) ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 struct rx51_audio_pdata* FUNC_5 (struct snd_soc_card*) ;
 int FUNC_6 (struct snd_soc_card*,char*,int,int *,int *,int ) ;
 int FUNC_7 (int *,int ,TYPE_1__*) ;
 int FUNC_8 (struct snd_soc_card*,char*,int) ;

__attribute__((used)) static int FUNC_9(struct snd_soc_pcm_runtime *VAR_4)
{
 struct snd_soc_card *VAR_5 = VAR_4->card;
 struct rx51_audio_pdata *VAR_6 = FUNC_5(VAR_5);
 int VAR_7;

 FUNC_8(VAR_5, "TPA6130A2 Headphone Playback Volume", 42);

 VAR_7 = FUNC_4(VAR_4, 2);
 if (VAR_7 < 0) {
  FUNC_2(VAR_5->dev, "Failed to add MCBSP controls\n");
  return VAR_7;
 }


 VAR_7 = FUNC_6(VAR_4->card, "AV Jack",
        VAR_0 | VAR_1,
        &VAR_2, ((void*)0), 0);
 if (VAR_7) {
  FUNC_2(VAR_5->dev, "Failed to add AV Jack\n");
  return VAR_7;
 }


 VAR_3[0].gpio = FUNC_1(VAR_6->jack_detection_gpio);
 FUNC_3(VAR_5->dev, VAR_6->jack_detection_gpio);

 VAR_7 = FUNC_7(&VAR_2,
         FUNC_0(VAR_3),
         VAR_3);
 if (VAR_7) {
  FUNC_2(VAR_5->dev, "Failed to add GPIOs\n");
  return VAR_7;
 }

 return VAR_7;
}
