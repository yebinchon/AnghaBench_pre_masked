
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct madera_priv {struct madera* madera; } ;
struct madera_codec_pdata {int* pdm_fmt; int* pdm_mute; scalar_t__* out_mono; } ;
struct TYPE_2__ {struct madera_codec_pdata codec; } ;
struct madera {int regmap; int dev; TYPE_1__ pdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_0 (int ,char*,int,int,...) ;
 int FUNC_1 (int ,char*,int,int) ;
 int * VAR_9 ;
 int FUNC_2 (int ,scalar_t__,unsigned int,unsigned int) ;
 struct snd_soc_dapm_context* FUNC_3 (struct snd_soc_component*) ;
 struct madera_priv* FUNC_4 (struct snd_soc_component*) ;
 int FUNC_5 (struct snd_soc_dapm_context*,int *,int) ;

int FUNC_6(struct snd_soc_component *VAR_10, int VAR_11)
{
 struct snd_soc_dapm_context *VAR_12 =
  FUNC_3(VAR_10);
 struct madera_priv *VAR_13 = FUNC_4(VAR_10);
 struct madera *VAR_14 = VAR_13->madera;
 const struct madera_codec_pdata *VAR_15 = &VAR_14->pdata.codec;
 unsigned int VAR_16;
 int VAR_17;

 if (VAR_11 > VAR_0) {
  FUNC_1(VAR_14->dev,
    "Requested %d mono outputs, using maximum allowed %d\n",
    VAR_11, VAR_0);
  VAR_11 = VAR_0;
 }

 for (VAR_17 = 0; VAR_17 < VAR_11; VAR_17++) {

  if (VAR_15->out_mono[VAR_17]) {
   VAR_16 = VAR_2;
   FUNC_5(VAR_12,
      &VAR_9[VAR_17], 1);
  } else {
   VAR_16 = 0;
  }

  FUNC_2(VAR_14->regmap,
       VAR_3 + (VAR_17 * 8),
       VAR_2, VAR_16);

  FUNC_0(VAR_14->dev, "OUT%d mono=0x%x\n", VAR_17 + 1, VAR_16);
 }

 for (VAR_17 = 0; VAR_17 < VAR_1; VAR_17++) {
  FUNC_0(VAR_14->dev, "PDM%d fmt=0x%x mute=0x%x\n", VAR_17 + 1,
   VAR_15->pdm_fmt[VAR_17], VAR_15->pdm_mute[VAR_17]);

  if (VAR_15->pdm_mute[VAR_17])
   FUNC_2(VAR_14->regmap,
        VAR_4 + (VAR_17 * 2),
        VAR_7 |
        VAR_8,
        VAR_15->pdm_mute[VAR_17]);

  if (VAR_15->pdm_fmt[VAR_17])
   FUNC_2(VAR_14->regmap,
        VAR_5 + (VAR_17 * 2),
        VAR_6,
        VAR_15->pdm_fmt[VAR_17]);
 }

 return 0;
}
