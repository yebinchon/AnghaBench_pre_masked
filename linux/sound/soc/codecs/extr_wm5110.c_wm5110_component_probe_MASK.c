
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * adsp; struct arizona* arizona; } ;
struct wm5110_priv {TYPE_1__ core; } ;
struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct arizona {int regmap; struct snd_soc_dapm_context* dapm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,int ,int) ;
 int FUNC_4 (struct snd_soc_component*,char*) ;
 struct snd_soc_dapm_context* FUNC_5 (struct snd_soc_component*) ;
 struct wm5110_priv* FUNC_6 (struct snd_soc_component*) ;
 int FUNC_7 (struct snd_soc_component*,int ) ;
 int FUNC_8 (int *,struct snd_soc_component*) ;
 int FUNC_9 (int *,struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_10(struct snd_soc_component *VAR_2)
{
 struct snd_soc_dapm_context *VAR_3 = FUNC_5(VAR_2);
 struct wm5110_priv *VAR_4 = FUNC_6(VAR_2);
 struct arizona *VAR_5 = VAR_4->core.arizona;
 int VAR_6, VAR_7;

 VAR_5->dapm = VAR_3;
 FUNC_7(VAR_2, VAR_5->regmap);

 VAR_7 = FUNC_2(VAR_2);
 if (VAR_7 < 0)
  return VAR_7;

 FUNC_0(VAR_2);
 FUNC_1(VAR_2);

 for (VAR_6 = 0; VAR_6 < VAR_0; ++VAR_6) {
  VAR_7 = FUNC_8(&VAR_4->core.adsp[VAR_6], VAR_2);
  if (VAR_7)
   goto err_adsp2_codec_probe;
 }

 VAR_7 = FUNC_3(VAR_2,
          VAR_1,
          VAR_0);
 if (VAR_7)
  goto err_adsp2_codec_probe;

 FUNC_4(VAR_2, "HAPTICS");

 return 0;

err_adsp2_codec_probe:
 for (--VAR_6; VAR_6 >= 0; --VAR_6)
  FUNC_9(&VAR_4->core.adsp[VAR_6], VAR_2);

 return VAR_7;
}
