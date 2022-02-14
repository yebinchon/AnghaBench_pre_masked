
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct arizona* arizona; } ;
struct wm8998_priv {TYPE_1__ core; } ;
struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct arizona {int regmap; struct snd_soc_dapm_context* dapm; } ;


 int FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*,char*) ;
 struct snd_soc_dapm_context* FUNC_3 (struct snd_soc_component*) ;
 struct wm8998_priv* FUNC_4 (struct snd_soc_component*) ;
 int FUNC_5 (struct snd_soc_component*,int ) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_component *VAR_0)
{
 struct wm8998_priv *VAR_1 = FUNC_4(VAR_0);
 struct snd_soc_dapm_context *VAR_2 = FUNC_3(VAR_0);
 struct arizona *VAR_3 = VAR_1->core.arizona;
 int VAR_4;

 VAR_3->dapm = VAR_2;
 FUNC_5(VAR_0, VAR_3->regmap);

 VAR_4 = FUNC_1(VAR_0);
 if (VAR_4 < 0)
  return VAR_4;

 FUNC_0(VAR_0);

 FUNC_2(VAR_0, "HAPTICS");

 return 0;
}
