
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct rt1011_priv {scalar_t__ sysclk_src; } ;


 scalar_t__ VAR_0 ;
 struct rt1011_priv* FUNC_0 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dapm_widget *VAR_1,
    struct snd_soc_dapm_widget *VAR_2)
{
 struct snd_soc_component *VAR_3 =
  FUNC_1(VAR_1->dapm);
 struct rt1011_priv *VAR_4 = FUNC_0(VAR_3);

 if (VAR_4->sysclk_src == VAR_0)
  return 1;
 else
  return 0;
}
