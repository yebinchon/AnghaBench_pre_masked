
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct snd_soc_pcm_runtime {int dev; struct snd_soc_card* card; TYPE_1__* codec_dai; } ;
struct snd_soc_dapm_route {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct TYPE_7__ {int idle_bias_off; } ;
struct snd_soc_card {int dev; TYPE_2__ dapm; } ;
struct TYPE_8__ {int jack; } ;
struct byt_rt5651_private {scalar_t__ hp_detect; TYPE_4__ jack; int mclk; } ;
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
 struct snd_soc_dapm_route const* VAR_11 ;
 struct snd_soc_dapm_route const* VAR_12 ;
 struct snd_soc_dapm_route const* VAR_13 ;
 struct snd_soc_dapm_route const* VAR_14 ;
 struct snd_soc_dapm_route const* VAR_15 ;
 int VAR_16 ;
 struct snd_soc_dapm_route const* VAR_17 ;
 struct snd_soc_dapm_route const* VAR_18 ;
 struct snd_soc_dapm_route const* VAR_19 ;
 struct snd_soc_dapm_route const* VAR_20 ;
 struct snd_soc_dapm_route const* VAR_21 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (int ,int,int ) ;
 int FUNC_8 (struct snd_soc_card*,struct snd_soc_dapm_route const*,int) ;
 struct byt_rt5651_private* FUNC_9 (struct snd_soc_card*) ;
 int FUNC_10 (struct snd_soc_card*,char*,int,TYPE_4__*,struct snd_soc_dapm_route const*,int) ;
 int FUNC_11 (struct snd_soc_component*,TYPE_4__*,scalar_t__) ;
 int FUNC_12 (struct snd_soc_component*,int ,int ,int ) ;
 int FUNC_13 (TYPE_2__*,struct snd_soc_dapm_route const*,int) ;
 int FUNC_14 (TYPE_2__*,char*) ;

__attribute__((used)) static int FUNC_15(struct snd_soc_pcm_runtime *VAR_22)
{
 struct snd_soc_card *VAR_23 = VAR_22->card;
 struct snd_soc_component *VAR_24 = VAR_22->codec_dai->component;
 struct byt_rt5651_private *VAR_25 = FUNC_9(VAR_23);
 const struct snd_soc_dapm_route *VAR_26;
 int VAR_27;
 int VAR_28;
 int VAR_29;

 VAR_23->dapm.idle_bias_off = 1;


 if (VAR_16 & VAR_1)
  FUNC_12(VAR_24, VAR_6,
   VAR_7, VAR_8);

 switch (FUNC_2(VAR_16)) {
 case 129:
  VAR_26 = VAR_14;
  VAR_27 = FUNC_0(VAR_14);
  break;
 case 128:
  VAR_26 = VAR_15;
  VAR_27 = FUNC_0(VAR_15);
  break;
 case 130:
  VAR_26 = VAR_13;
  VAR_27 = FUNC_0(VAR_13);
  break;
 default:
  VAR_26 = VAR_12;
  VAR_27 = FUNC_0(VAR_12);
 }
 VAR_29 = FUNC_13(&VAR_23->dapm, VAR_26, VAR_27);
 if (VAR_29)
  return VAR_29;

 if (VAR_16 & VAR_4) {
  VAR_29 = FUNC_13(&VAR_23->dapm,
     VAR_20,
     FUNC_0(VAR_20));
 } else if (VAR_16 & VAR_2) {
  VAR_29 = FUNC_13(&VAR_23->dapm,
     VAR_17,
     FUNC_0(VAR_17));
 } else if (VAR_16 & VAR_3) {
  VAR_29 = FUNC_13(&VAR_23->dapm,
     VAR_18,
     FUNC_0(VAR_18));
 } else {
  VAR_29 = FUNC_13(&VAR_23->dapm,
     VAR_19,
     FUNC_0(VAR_19));
 }
 if (VAR_29)
  return VAR_29;

 VAR_29 = FUNC_8(VAR_23, VAR_11,
     FUNC_0(VAR_11));
 if (VAR_29) {
  FUNC_6(VAR_23->dev, "unable to add card controls\n");
  return VAR_29;
 }
 FUNC_14(&VAR_23->dapm, "Headphone");
 FUNC_14(&VAR_23->dapm, "Speaker");

 if (VAR_16 & VAR_1) {
  VAR_29 = FUNC_4(VAR_25->mclk);
  if (!VAR_29)
   FUNC_3(VAR_25->mclk);

  if (VAR_16 & VAR_0)
   VAR_29 = FUNC_5(VAR_25->mclk, 25000000);
  else
   VAR_29 = FUNC_5(VAR_25->mclk, 19200000);

  if (VAR_29)
   FUNC_6(VAR_23->dev, "unable to set MCLK rate\n");
 }

 VAR_28 = 0;
 if (FUNC_1(VAR_16))
  VAR_28 = VAR_10 | VAR_9;
 else if (VAR_25->hp_detect)
  VAR_28 = VAR_10;

 if (VAR_28) {
  VAR_29 = FUNC_10(VAR_22->card, "Headset",
        VAR_28, &VAR_25->jack, VAR_21,
        FUNC_0(VAR_21));
  if (VAR_29) {
   FUNC_6(VAR_22->dev, "jack creation failed %d\n", VAR_29);
   return VAR_29;
  }

  if (VAR_28 & VAR_9)
   FUNC_7(VAR_25->jack.jack, VAR_9,
      VAR_5);

  VAR_29 = FUNC_11(VAR_24, &VAR_25->jack,
       VAR_25->hp_detect);
  if (VAR_29)
   return VAR_29;
 }

 return 0;
}
