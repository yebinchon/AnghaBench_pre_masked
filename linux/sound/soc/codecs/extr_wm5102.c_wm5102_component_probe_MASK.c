
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * adsp; struct arizona* arizona; } ;
struct wm5102_priv {TYPE_1__ core; } ;
struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct arizona {struct snd_soc_dapm_context* dapm; int regmap; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*,int ,int) ;
 int FUNC_3 (struct snd_soc_component*,char*) ;
 struct snd_soc_dapm_context* FUNC_4 (struct snd_soc_component*) ;
 struct wm5102_priv* FUNC_5 (struct snd_soc_component*) ;
 int FUNC_6 (struct snd_soc_component*,int ) ;
 int FUNC_7 (int *,struct snd_soc_component*) ;
 int FUNC_8 (int *,struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_9(struct snd_soc_component *VAR_1)
{
 struct snd_soc_dapm_context *VAR_2 = FUNC_4(VAR_1);
 struct wm5102_priv *VAR_3 = FUNC_5(VAR_1);
 struct arizona *VAR_4 = VAR_3->core.arizona;
 int VAR_5;

 FUNC_6(VAR_1, VAR_4->regmap);

 VAR_5 = FUNC_7(&VAR_3->core.adsp[0], VAR_1);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_2(VAR_1,
          VAR_0, 1);
 if (VAR_5)
  goto err_adsp2_codec_probe;

 VAR_5 = FUNC_1(VAR_1);
 if (VAR_5 < 0)
  return VAR_5;

 FUNC_0(VAR_1);

 FUNC_3(VAR_1, "HAPTICS");

 VAR_3->core.arizona->dapm = VAR_2;

 return 0;

err_adsp2_codec_probe:
 FUNC_8(&VAR_3->core.adsp[0], VAR_1);

 return VAR_5;
}
