
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_2__* codec_dai; int dev; struct snd_soc_card* card; } ;
struct snd_soc_component {int dev; } ;
struct TYPE_4__ {int idle_bias_off; } ;
struct snd_soc_card {TYPE_1__ dapm; } ;
struct TYPE_5__ {struct snd_soc_component* component; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (struct snd_soc_card*,char*,int,int *,int ,int ) ;
 int FUNC_5 (struct snd_soc_component*,int *,int *) ;
 int FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (TYPE_2__*,int ,int,int ) ;

__attribute__((used)) static int FUNC_8(struct snd_soc_pcm_runtime *VAR_7)
{
 struct snd_soc_card *VAR_8 = VAR_7->card;
 struct snd_soc_component *VAR_9 = VAR_7->codec_dai->component;
 int VAR_10;

 if (FUNC_3(VAR_9->dev,
        VAR_4))
  FUNC_2(VAR_7->dev, "Unable to add GPIO mapping table\n");

 VAR_8->dapm.idle_bias_off = 1;


 VAR_10 = FUNC_7(VAR_7->codec_dai, VAR_0,
         19200000, VAR_3);
 if (VAR_10) {
  FUNC_1(VAR_7->dev, "Could not set sysclk\n");
  return VAR_10;
 }

 VAR_10 = FUNC_4(VAR_8, "Headset",
        VAR_2 | VAR_1,
        &VAR_5,
        VAR_6,
        FUNC_0(VAR_6));
 if (VAR_10)
  return VAR_10;

 FUNC_5(VAR_9, &VAR_5, ((void*)0));

 FUNC_6(VAR_7->codec_dai, 50);

 return VAR_10;
}
