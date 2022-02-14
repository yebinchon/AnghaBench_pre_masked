
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {int dev; int card; struct snd_soc_dai* codec_dai; } ;
struct snd_soc_jack {int jack; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct glk_card_private {struct snd_soc_jack geminilake_headset; } ;


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
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int,int ) ;
 struct glk_card_private* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int,struct snd_soc_jack*,int *,int ) ;
 int FUNC_4 (struct snd_soc_component*,struct snd_soc_jack*,int *) ;
 int FUNC_5 (struct snd_soc_dai*,int ,int ,int ,int ) ;
 int FUNC_6 (struct snd_soc_dai*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct snd_soc_pcm_runtime *VAR_15)
{
 struct glk_card_private *VAR_16 = FUNC_2(VAR_15->card);
 struct snd_soc_component *VAR_17 = VAR_15->codec_dai->component;
 struct snd_soc_dai *VAR_18 = VAR_15->codec_dai;
 struct snd_soc_jack *VAR_19;
 int VAR_20;

 VAR_20 = FUNC_5(VAR_18, 0, VAR_5,
     VAR_0, VAR_6);
 if (VAR_20 < 0) {
  FUNC_0(VAR_15->dev, "can't set codec pll: %d\n", VAR_20);
  return VAR_20;
 }


 VAR_20 = FUNC_6(VAR_18, VAR_7,
     VAR_6, VAR_14);
 if (VAR_20 < 0)
  FUNC_0(VAR_15->dev, "snd_soc_dai_set_sysclk err = %d\n", VAR_20);





 VAR_20 = FUNC_3(VAR_15->card, "Headset Jack",
   VAR_12 | VAR_8 | VAR_9 |
   VAR_10 | VAR_11 | VAR_13,
   &VAR_16->geminilake_headset, ((void*)0), 0);
 if (VAR_20) {
  FUNC_0(VAR_15->dev, "Headset Jack creation failed: %d\n", VAR_20);
  return VAR_20;
 }

 VAR_19 = &VAR_16->geminilake_headset;

 FUNC_1(VAR_19->jack, VAR_8, VAR_1);
 FUNC_1(VAR_19->jack, VAR_9, VAR_2);
 FUNC_1(VAR_19->jack, VAR_10, VAR_4);
 FUNC_1(VAR_19->jack, VAR_11, VAR_3);

 VAR_20 = FUNC_4(VAR_17, VAR_19, ((void*)0));

 if (VAR_20) {
  FUNC_0(VAR_15->dev, "Headset Jack call-back failed: %d\n", VAR_20);
  return VAR_20;
 }

 return VAR_20;
}
