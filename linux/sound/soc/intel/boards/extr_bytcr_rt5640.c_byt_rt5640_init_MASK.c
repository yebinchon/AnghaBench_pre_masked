
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_1__* codec_dai; struct snd_soc_card* card; } ;
struct snd_soc_dapm_route {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct TYPE_7__ {int idle_bias_off; } ;
struct snd_soc_card {int dev; TYPE_2__ dapm; } ;
struct TYPE_8__ {int jack; } ;
struct byt_rt5640_private {TYPE_4__ jack; int mclk; } ;
struct TYPE_6__ {struct snd_soc_component* component; } ;


 int FUNC_0 (struct snd_soc_dapm_route const*) ;



 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 struct snd_soc_dapm_route const* VAR_19 ;
 struct snd_soc_dapm_route const* VAR_20 ;
 struct snd_soc_dapm_route const* VAR_21 ;
 struct snd_soc_dapm_route const* VAR_22 ;
 struct snd_soc_dapm_route const* VAR_23 ;
 struct snd_soc_dapm_route const* VAR_24 ;
 int VAR_25 ;
 struct snd_soc_dapm_route const* VAR_26 ;
 struct snd_soc_dapm_route const* VAR_27 ;
 struct snd_soc_dapm_route const* VAR_28 ;
 struct snd_soc_dapm_route const* VAR_29 ;
 struct snd_soc_dapm_route const* VAR_30 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,char*,...) ;
 struct snd_soc_dapm_route const* VAR_31 ;
 int FUNC_7 (struct snd_soc_component*,int,int ) ;
 int FUNC_8 (int ,int,int ) ;
 int FUNC_9 (struct snd_soc_card*,struct snd_soc_dapm_route const*,int) ;
 struct byt_rt5640_private* FUNC_10 (struct snd_soc_card*) ;
 int FUNC_11 (struct snd_soc_card*,char*,int,TYPE_4__*,struct snd_soc_dapm_route const*,int) ;
 int FUNC_12 (struct snd_soc_component*,TYPE_4__*,int *) ;
 int FUNC_13 (struct snd_soc_component*,int ,int ,int ) ;
 int FUNC_14 (TYPE_2__*,struct snd_soc_dapm_route const*,int) ;
 int FUNC_15 (TYPE_2__*,char*) ;

__attribute__((used)) static int FUNC_16(struct snd_soc_pcm_runtime *VAR_32)
{
 struct snd_soc_card *VAR_33 = VAR_32->card;
 struct byt_rt5640_private *VAR_34 = FUNC_10(VAR_33);
 struct snd_soc_component *VAR_35 = VAR_32->codec_dai->component;
 const struct snd_soc_dapm_route *VAR_36;
 int VAR_37;
 int VAR_38;

 VAR_33->dapm.idle_bias_off = 1;


 if (VAR_25 & VAR_1)
  FUNC_13(VAR_35, VAR_14,
   VAR_15, VAR_16);

 FUNC_7(VAR_35,
    VAR_13 |
    VAR_11 |
    VAR_12 |
    VAR_9 |
    VAR_7 |
    VAR_8,
    VAR_10);

 VAR_38 = FUNC_9(VAR_33, VAR_19,
     FUNC_0(VAR_19));
 if (VAR_38) {
  FUNC_6(VAR_33->dev, "unable to add card controls\n");
  return VAR_38;
 }

 switch (FUNC_2(VAR_25)) {
 case 129:
  VAR_36 = VAR_22;
  VAR_37 = FUNC_0(VAR_22);
  break;
 case 128:
  VAR_36 = VAR_23;
  VAR_37 = FUNC_0(VAR_23);
  break;
 case 130:
  VAR_36 = VAR_21;
  VAR_37 = FUNC_0(VAR_21);
  break;
 default:
  VAR_36 = VAR_20;
  VAR_37 = FUNC_0(VAR_20);
 }

 VAR_38 = FUNC_14(&VAR_33->dapm, VAR_36, VAR_37);
 if (VAR_38)
  return VAR_38;

 if (VAR_25 & VAR_5) {
  VAR_38 = FUNC_14(&VAR_33->dapm,
     VAR_29,
     FUNC_0(VAR_29));
 } else if (VAR_25 & VAR_3) {
  VAR_38 = FUNC_14(&VAR_33->dapm,
     VAR_26,
     FUNC_0(VAR_26));
 } else if (VAR_25 & VAR_4) {
  VAR_38 = FUNC_14(&VAR_33->dapm,
     VAR_27,
     FUNC_0(VAR_27));
 } else {
  VAR_38 = FUNC_14(&VAR_33->dapm,
     VAR_28,
     FUNC_0(VAR_28));
 }
 if (VAR_38)
  return VAR_38;

 if (VAR_25 & VAR_2) {
  VAR_38 = FUNC_14(&VAR_33->dapm,
     VAR_24,
     FUNC_0(VAR_24));
 } else {
  VAR_38 = FUNC_14(&VAR_33->dapm,
     VAR_30,
     FUNC_0(VAR_30));
 }
 if (VAR_38)
  return VAR_38;

 FUNC_15(&VAR_33->dapm, "Headphone");
 FUNC_15(&VAR_33->dapm, "Speaker");

 if (VAR_25 & VAR_1) {
  VAR_38 = FUNC_4(VAR_34->mclk);
  if (!VAR_38)
   FUNC_3(VAR_34->mclk);

  if (VAR_25 & VAR_0)
   VAR_38 = FUNC_5(VAR_34->mclk, 25000000);
  else
   VAR_38 = FUNC_5(VAR_34->mclk, 19200000);

  if (VAR_38) {
   FUNC_6(VAR_33->dev, "unable to set MCLK rate\n");
   return VAR_38;
  }
 }

 if (FUNC_1(VAR_25)) {
  VAR_38 = FUNC_11(VAR_33, "Headset",
         VAR_18 | VAR_17,
         &VAR_34->jack, VAR_31,
         FUNC_0(VAR_31));
  if (VAR_38) {
   FUNC_6(VAR_33->dev, "Jack creation failed %d\n", VAR_38);
   return VAR_38;
  }
  FUNC_8(VAR_34->jack.jack, VAR_17,
     VAR_6);
  FUNC_12(VAR_35, &VAR_34->jack, ((void*)0));
 }

 return 0;
}
