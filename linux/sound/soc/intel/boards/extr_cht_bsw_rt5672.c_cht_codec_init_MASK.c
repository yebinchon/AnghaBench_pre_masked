
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_pcm_runtime {int dev; int card; struct snd_soc_dai* codec_dai; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct TYPE_3__ {int jack; } ;
struct cht_mc_private {scalar_t__ mclk; TYPE_1__ headset; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,char*) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (struct snd_soc_component*,int,int ) ;
 int FUNC_8 (struct snd_soc_component*,TYPE_1__*) ;
 int FUNC_9 (int ,int,int ) ;
 struct cht_mc_private* FUNC_10 (int ) ;
 int FUNC_11 (int ,char*,int,TYPE_1__*,int ,int ) ;

__attribute__((used)) static int FUNC_12(struct snd_soc_pcm_runtime *VAR_17)
{
 int VAR_18;
 struct snd_soc_dai *VAR_19 = VAR_17->codec_dai;
 struct snd_soc_component *VAR_20 = VAR_19->component;
 struct cht_mc_private *VAR_21 = FUNC_10(VAR_17->card);

 if (FUNC_6(VAR_20->dev, VAR_16))
  FUNC_5(VAR_17->dev, "Unable to add GPIO mapping table\n");






 FUNC_7(VAR_20,
    VAR_10
    | VAR_8
    | VAR_9
    | VAR_6
    | VAR_4
    | VAR_5,
    VAR_7);

        VAR_18 = FUNC_11(VAR_17->card, "Headset",
        VAR_14 | VAR_11 |
        VAR_12 | VAR_13,
        &VAR_21->headset,
        VAR_15,
        FUNC_0(VAR_15));
        if (VAR_18)
                return VAR_18;

 FUNC_9(VAR_21->headset.jack, VAR_11, VAR_1);
 FUNC_9(VAR_21->headset.jack, VAR_12, VAR_3);
 FUNC_9(VAR_21->headset.jack, VAR_13, VAR_2);

 FUNC_8(VAR_20, &VAR_21->headset);
 if (VAR_21->mclk) {
  VAR_18 = FUNC_2(VAR_21->mclk);
  if (!VAR_18)
   FUNC_1(VAR_21->mclk);

  VAR_18 = FUNC_3(VAR_21->mclk, VAR_0);

  if (VAR_18) {
   FUNC_4(VAR_17->dev, "unable to set MCLK rate\n");
   return VAR_18;
  }
 }
 return 0;
}
