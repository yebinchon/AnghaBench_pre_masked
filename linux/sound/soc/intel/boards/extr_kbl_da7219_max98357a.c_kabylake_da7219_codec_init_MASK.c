
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {int dev; TYPE_1__* card; struct snd_soc_dai* codec_dai; } ;
struct snd_soc_jack {int jack; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct kbl_codec_private {struct snd_soc_jack kabylake_headset; } ;
struct TYPE_2__ {int dapm; } ;


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
 int FUNC_0 (struct snd_soc_component*,struct snd_soc_jack*) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_12 ;
 int FUNC_2 (int ,int,int ) ;
 struct kbl_codec_private* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,char*,int,struct snd_soc_jack*,int *,int ) ;
 int FUNC_5 (struct snd_soc_dai*,int ,int,int ) ;
 int FUNC_6 (int *,char*) ;

__attribute__((used)) static int FUNC_7(struct snd_soc_pcm_runtime *VAR_13)
{
 struct kbl_codec_private *VAR_14 = FUNC_3(VAR_13->card);
 struct snd_soc_component *VAR_15 = VAR_13->codec_dai->component;
 struct snd_soc_dai *VAR_16 = VAR_13->codec_dai;
 struct snd_soc_jack *VAR_17;
 int VAR_18;


 VAR_18 = FUNC_5(VAR_16, VAR_0, 24576000,
      VAR_11);
 if (VAR_18) {
  FUNC_1(VAR_13->dev, "can't set codec sysclk configuration\n");
  return VAR_18;
 }





 VAR_18 = FUNC_4(VAR_12, "Headset Jack",
   VAR_9 | VAR_5 | VAR_6 |
   VAR_7 | VAR_8 | VAR_10,
   &VAR_14->kabylake_headset, ((void*)0), 0);
 if (VAR_18) {
  FUNC_1(VAR_13->dev, "Headset Jack creation failed: %d\n", VAR_18);
  return VAR_18;
 }

 VAR_17 = &VAR_14->kabylake_headset;

 FUNC_2(VAR_17->jack, VAR_5, VAR_1);
 FUNC_2(VAR_17->jack, VAR_6, VAR_4);
 FUNC_2(VAR_17->jack, VAR_7, VAR_3);
 FUNC_2(VAR_17->jack, VAR_8, VAR_2);
 FUNC_0(VAR_15, &VAR_14->kabylake_headset);

 VAR_18 = FUNC_6(&VAR_13->card->dapm, "SoC DMIC");
 if (VAR_18)
  FUNC_1(VAR_13->dev, "SoC DMIC - Ignore suspend failed %d\n", VAR_18);

 return VAR_18;
}
