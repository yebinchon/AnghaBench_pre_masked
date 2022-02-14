
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct rt5640_priv {int asrc_en; } ;


 struct rt5640_priv* FUNC_0 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dapm_widget *VAR_0,
    struct snd_soc_dapm_widget *VAR_1)
{
 struct snd_soc_component *VAR_2 = FUNC_1(VAR_0->dapm);
 struct rt5640_priv *VAR_3 = FUNC_0(VAR_2);

 if (!VAR_3->asrc_en)
  return 0;

 return 1;
}
