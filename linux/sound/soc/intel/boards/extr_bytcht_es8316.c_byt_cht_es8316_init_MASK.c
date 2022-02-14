
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_2__* codec_dai; struct snd_soc_card* card; } ;
struct snd_soc_dapm_route {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct TYPE_5__ {int idle_bias_off; } ;
struct snd_soc_card {int dev; TYPE_1__ dapm; } ;
struct TYPE_7__ {int jack; } ;
struct byt_cht_es8316_private {TYPE_3__ jack; int mclk; } ;
struct TYPE_6__ {struct snd_soc_component* component; } ;


 int FUNC_0 (struct snd_soc_dapm_route*) ;


 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct snd_soc_dapm_route* VAR_5 ;
 struct snd_soc_dapm_route* VAR_6 ;
 struct snd_soc_dapm_route* VAR_7 ;
 struct snd_soc_dapm_route* VAR_8 ;
 struct snd_soc_dapm_route* VAR_9 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,char*,...) ;
 int VAR_10 ;
 int FUNC_6 (int ,int,int ) ;
 struct byt_cht_es8316_private* FUNC_7 (struct snd_soc_card*) ;
 int FUNC_8 (struct snd_soc_card*,char*,int,TYPE_3__*,struct snd_soc_dapm_route*,int) ;
 int FUNC_9 (struct snd_soc_component*,TYPE_3__*,int *) ;
 int FUNC_10 (TYPE_2__*,int ,int,int ) ;
 int FUNC_11 (TYPE_1__*,struct snd_soc_dapm_route const*,int) ;

__attribute__((used)) static int FUNC_12(struct snd_soc_pcm_runtime *VAR_11)
{
 struct snd_soc_component *VAR_12 = VAR_11->codec_dai->component;
 struct snd_soc_card *VAR_13 = VAR_11->card;
 struct byt_cht_es8316_private *VAR_14 = FUNC_7(VAR_13);
 const struct snd_soc_dapm_route *VAR_15;
 int VAR_16;
 int VAR_17;

 VAR_13->dapm.idle_bias_off = 1;

 switch (FUNC_1(VAR_10)) {
 case 129:
 default:
  VAR_15 = VAR_5;
  VAR_16 = FUNC_0(VAR_5);
  break;
 case 128:
  VAR_15 = VAR_6;
  VAR_16 = FUNC_0(VAR_6);
  break;
 }
 VAR_17 = FUNC_11(&VAR_13->dapm, VAR_15, VAR_16);
 if (VAR_17)
  return VAR_17;

 if (VAR_10 & VAR_0) {
  VAR_15 = VAR_8;
  VAR_16 = FUNC_0(VAR_8);
 } else {
  VAR_15 = VAR_9;
  VAR_16 = FUNC_0(VAR_9);
 }
 VAR_17 = FUNC_11(&VAR_13->dapm, VAR_15, VAR_16);
 if (VAR_17)
  return VAR_17;
 VAR_17 = FUNC_3(VAR_14->mclk);
 if (!VAR_17)
  FUNC_2(VAR_14->mclk);

 VAR_17 = FUNC_4(VAR_14->mclk, 19200000);
 if (VAR_17)
  FUNC_5(VAR_13->dev, "unable to set MCLK rate\n");

 VAR_17 = FUNC_3(VAR_14->mclk);
 if (VAR_17)
  FUNC_5(VAR_13->dev, "unable to enable MCLK\n");

 VAR_17 = FUNC_10(VAR_11->codec_dai, 0, 19200000,
         VAR_4);
 if (VAR_17 < 0) {
  FUNC_5(VAR_13->dev, "can't set codec clock %d\n", VAR_17);
  return VAR_17;
 }

 VAR_17 = FUNC_8(VAR_13, "Headset",
        VAR_3 | VAR_2,
        &VAR_14->jack, VAR_7,
        FUNC_0(VAR_7));
 if (VAR_17) {
  FUNC_5(VAR_13->dev, "jack creation failed %d\n", VAR_17);
  return VAR_17;
 }

 FUNC_6(VAR_14->jack.jack, VAR_2, VAR_1);
 FUNC_9(VAR_12, &VAR_14->jack, ((void*)0));

 return 0;
}
