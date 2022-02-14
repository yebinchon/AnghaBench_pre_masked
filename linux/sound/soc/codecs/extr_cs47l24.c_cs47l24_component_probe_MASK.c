
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct TYPE_2__ {int * adsp; struct arizona* arizona; } ;
struct cs47l24_priv {TYPE_1__ core; } ;
struct arizona {int regmap; struct snd_soc_dapm_context* dapm; } ;


 int * VAR_0 ;
 int FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,int *,int) ;
 int FUNC_4 (struct snd_soc_component*,char*) ;
 struct snd_soc_dapm_context* FUNC_5 (struct snd_soc_component*) ;
 struct cs47l24_priv* FUNC_6 (struct snd_soc_component*) ;
 int FUNC_7 (struct snd_soc_component*,int ) ;
 int FUNC_8 (int *,struct snd_soc_component*) ;
 int FUNC_9 (int *,struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_10(struct snd_soc_component *VAR_1)
{
 struct snd_soc_dapm_context *VAR_2 = FUNC_5(VAR_1);
 struct cs47l24_priv *VAR_3 = FUNC_6(VAR_1);
 struct arizona *VAR_4 = VAR_3->core.arizona;
 int VAR_5;

 VAR_4->dapm = VAR_2;
 FUNC_7(VAR_1, VAR_4->regmap);

 VAR_5 = FUNC_2(VAR_1);
 if (VAR_5 < 0)
  return VAR_5;

 FUNC_0(VAR_1);
 FUNC_1(VAR_1);

 VAR_5 = FUNC_8(&VAR_3->core.adsp[1], VAR_1);
 if (VAR_5)
  goto err_adsp2_codec_probe;

 VAR_5 = FUNC_8(&VAR_3->core.adsp[2], VAR_1);
 if (VAR_5)
  goto err_adsp2_codec_probe;

 VAR_5 = FUNC_3(VAR_1,
          &VAR_0[1],
          2);
 if (VAR_5)
  goto err_adsp2_codec_probe;

 FUNC_4(VAR_1, "HAPTICS");

 return 0;

err_adsp2_codec_probe:
 FUNC_9(&VAR_3->core.adsp[1], VAR_1);
 FUNC_9(&VAR_3->core.adsp[2], VAR_1);

 return VAR_5;
}
