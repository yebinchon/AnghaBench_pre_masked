
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8994_priv {int aif2clk_enable; int aif2clk_disable; } ;
struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;




 struct wm8994_priv* FUNC_0 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dapm_widget *VAR_0,
      struct snd_kcontrol *VAR_1, int VAR_2)
{
 struct snd_soc_component *VAR_3 = FUNC_1(VAR_0->dapm);
 struct wm8994_priv *VAR_4 = FUNC_0(VAR_3);

 switch (VAR_2) {
 case 128:
  VAR_4->aif2clk_enable = 1;
  break;
 case 129:
  VAR_4->aif2clk_disable = 1;
  break;
 }

 return 0;
}
