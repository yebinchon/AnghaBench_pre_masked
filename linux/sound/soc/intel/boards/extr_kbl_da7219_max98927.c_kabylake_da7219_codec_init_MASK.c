
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {int dev; struct snd_soc_card* card; TYPE_1__* codec_dai; } ;
struct snd_soc_jack {int jack; } ;
struct snd_soc_component {int dummy; } ;
struct snd_soc_card {int dapm; } ;
struct kbl_codec_private {struct snd_soc_jack kabylake_headset; } ;
struct TYPE_2__ {struct snd_soc_component* component; } ;


 int FUNC_0 (int ) ;
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
 int FUNC_1 (struct snd_soc_component*,struct snd_soc_jack*) ;
 int FUNC_2 (int ,char*,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int ,int,int ) ;
 struct kbl_codec_private* FUNC_4 (struct snd_soc_card*) ;
 int FUNC_5 (int ,char*,int,struct snd_soc_jack*,int *,int ) ;
 int FUNC_6 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct snd_soc_pcm_runtime *VAR_12)
{
 struct kbl_codec_private *VAR_13 = FUNC_4(VAR_12->card);
 struct snd_soc_component *VAR_14 = VAR_12->codec_dai->component;
 struct snd_soc_jack *VAR_15;
 struct snd_soc_card *VAR_16 = VAR_12->card;
 int VAR_17;


 VAR_17 = FUNC_6(&VAR_16->dapm,
   VAR_11,
   FUNC_0(VAR_11));





 VAR_17 = FUNC_5(VAR_10, "Headset Jack",
   VAR_8 | VAR_4 | VAR_5 |
   VAR_6 | VAR_7 | VAR_9,
   &VAR_13->kabylake_headset, ((void*)0), 0);
 if (VAR_17) {
  FUNC_2(VAR_12->dev, "Headset Jack creation failed: %d\n", VAR_17);
  return VAR_17;
 }

 VAR_15 = &VAR_13->kabylake_headset;
 FUNC_3(VAR_15->jack, VAR_4, VAR_0);
 FUNC_3(VAR_15->jack, VAR_5, VAR_3);
 FUNC_3(VAR_15->jack, VAR_6, VAR_2);
 FUNC_3(VAR_15->jack, VAR_7, VAR_1);

 FUNC_1(VAR_14, &VAR_13->kabylake_headset);

 return 0;
}
