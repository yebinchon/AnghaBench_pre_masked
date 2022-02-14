
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_pcm_runtime {int dev; struct snd_soc_card* card; TYPE_1__* codec_dai; } ;
struct snd_soc_component {int dummy; } ;
struct snd_soc_card {int dapm; } ;
struct cht_mc_private {int mclk; int jack; TYPE_2__* acpi_card; } ;
struct TYPE_4__ {scalar_t__ codec_type; } ;
struct TYPE_3__ {struct snd_soc_component* component; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
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
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (struct snd_soc_component*,int,int ) ;
 int FUNC_6 (struct snd_soc_component*,int *,int *,int *) ;
 struct cht_mc_private* FUNC_7 (struct snd_soc_card*) ;
 int FUNC_8 (struct snd_soc_card*,char*,int,int *,int ,int ) ;
 int FUNC_9 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_10(struct snd_soc_pcm_runtime *VAR_23)
{
 struct snd_soc_card *VAR_24 = VAR_23->card;
 struct cht_mc_private *VAR_25 = FUNC_7(VAR_23->card);
 struct snd_soc_component *VAR_26 = VAR_23->codec_dai->component;
 int VAR_27;
 int VAR_28;

 if ((VAR_18 & VAR_3) ||
     (VAR_18 & VAR_2)) {

  FUNC_5(VAR_26,
     VAR_10 |
     VAR_8 |
     VAR_9 |
     VAR_5,
     VAR_7);
 } else {

  FUNC_5(VAR_26,
     VAR_10 |
     VAR_8 |
     VAR_9 |
     VAR_5,
     VAR_6);
 }

 if (VAR_18 & VAR_3) {
  VAR_28 = FUNC_9(&VAR_24->dapm,
     VAR_22,
     FUNC_0(VAR_22));
 } else if (VAR_18 & VAR_1) {
  VAR_28 = FUNC_9(&VAR_24->dapm,
     VAR_19,
     FUNC_0(VAR_19));
 } else if (VAR_18 & VAR_2) {
  VAR_28 = FUNC_9(&VAR_24->dapm,
     VAR_20,
     FUNC_0(VAR_20));
 } else {
  VAR_28 = FUNC_9(&VAR_24->dapm,
     VAR_21,
     FUNC_0(VAR_21));
 }
 if (VAR_28)
  return VAR_28;

 if (VAR_25->acpi_card->codec_type == VAR_4)
  VAR_27 = VAR_15 | VAR_16 |
     VAR_11 | VAR_12 |
     VAR_13 | VAR_14;
 else
  VAR_27 = VAR_15 | VAR_16;

 VAR_28 = FUNC_8(VAR_23->card, "Headset",
        VAR_27, &VAR_25->jack,
        VAR_17, FUNC_0(VAR_17));
 if (VAR_28) {
  FUNC_4(VAR_23->dev, "Headset jack creation failed %d\n", VAR_28);
  return VAR_28;
 }

 FUNC_6(VAR_26, &VAR_25->jack, &VAR_25->jack, &VAR_25->jack);
 VAR_28 = FUNC_2(VAR_25->mclk);
 if (!VAR_28)
  FUNC_1(VAR_25->mclk);

 VAR_28 = FUNC_3(VAR_25->mclk, VAR_0);

 if (VAR_28)
  FUNC_4(VAR_23->dev, "unable to set MCLK rate\n");

 return VAR_28;
}
