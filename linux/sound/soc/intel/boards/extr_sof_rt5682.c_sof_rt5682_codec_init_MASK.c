
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_jack {int jack; } ;
struct sof_card_private {struct snd_soc_jack sof_headset; int mclk; } ;
struct snd_soc_pcm_runtime {int dev; int card; TYPE_1__* codec_dai; } ;
struct snd_soc_component {int dummy; } ;
struct TYPE_2__ {struct snd_soc_component* component; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (struct snd_soc_component*,int,int ) ;
 int FUNC_5 (int ,int,int ) ;
 struct sof_card_private* FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,int,struct snd_soc_jack*,int *,int ) ;
 int FUNC_8 (struct snd_soc_component*,struct snd_soc_jack*,int *) ;
 int VAR_15 ;

__attribute__((used)) static int FUNC_9(struct snd_soc_pcm_runtime *VAR_16)
{
 struct sof_card_private *VAR_17 = FUNC_6(VAR_16->card);
 struct snd_soc_component *VAR_18 = VAR_16->codec_dai->component;
 struct snd_soc_jack *VAR_19;
 int VAR_20;


 if ((VAR_15 & VAR_14) &&
     (VAR_15 & VAR_12)) {
  FUNC_4(VAR_18, VAR_6 |
     VAR_4,
     VAR_5);
 }

 if (VAR_15 & VAR_13) {
  VAR_20 = FUNC_1(VAR_17->mclk);
  if (!VAR_20)
   FUNC_0(VAR_17->mclk);

  VAR_20 = FUNC_2(VAR_17->mclk, 19200000);

  if (VAR_20)
   FUNC_3(VAR_16->dev, "unable to set MCLK rate\n");
 }





 VAR_20 = FUNC_7(VAR_16->card, "Headset Jack",
        VAR_11 | VAR_7 |
        VAR_8 | VAR_9 |
        VAR_10,
        &VAR_17->sof_headset, ((void*)0), 0);
 if (VAR_20) {
  FUNC_3(VAR_16->dev, "Headset Jack creation failed: %d\n", VAR_20);
  return VAR_20;
 }

 VAR_19 = &VAR_17->sof_headset;

 FUNC_5(VAR_19->jack, VAR_7, VAR_0);
 FUNC_5(VAR_19->jack, VAR_8, VAR_1);
 FUNC_5(VAR_19->jack, VAR_9, VAR_3);
 FUNC_5(VAR_19->jack, VAR_10, VAR_2);
 VAR_20 = FUNC_8(VAR_18, VAR_19, ((void*)0));

 if (VAR_20) {
  FUNC_3(VAR_16->dev, "Headset Jack call-back failed: %d\n", VAR_20);
  return VAR_20;
 }

 return VAR_20;
}
