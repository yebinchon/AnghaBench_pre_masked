
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct rt5670_priv {int sysclk; int* lrck; } ;


 size_t VAR_0 ;
 struct rt5670_priv* FUNC_0 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dapm_widget *VAR_1,
    struct snd_soc_dapm_widget *VAR_2)
{
 struct snd_soc_component *VAR_3 = FUNC_1(VAR_1->dapm);
 struct rt5670_priv *VAR_4 = FUNC_0(VAR_3);

 if (VAR_4->sysclk > VAR_4->lrck[VAR_0] * 384)
  return 1;

 return 0;
}
