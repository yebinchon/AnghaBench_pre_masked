
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8731_priv {scalar_t__ sysclk_type; } ;
struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct wm8731_priv* FUNC_0 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dapm_widget *VAR_1,
       struct snd_soc_dapm_widget *VAR_2)
{
 struct snd_soc_component *VAR_3 = FUNC_1(VAR_1->dapm);
 struct wm8731_priv *VAR_4 = FUNC_0(VAR_3);

 return VAR_4->sysclk_type == VAR_0;
}
