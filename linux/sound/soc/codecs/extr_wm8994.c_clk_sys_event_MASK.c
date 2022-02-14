
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8994_priv {int clk_has_run; int jackdet_bootstrap; int jackdet; } ;
struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;





 int FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int *,int ) ;
 struct wm8994_priv* FUNC_3 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_4 (int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_5(struct snd_soc_dapm_widget *VAR_1,
    struct snd_kcontrol *VAR_2, int VAR_3)
{
 struct snd_soc_component *VAR_4 = FUNC_4(VAR_1->dapm);
 struct wm8994_priv *VAR_5 = FUNC_3(VAR_4);

 switch (VAR_3) {
 case 128:
  return FUNC_0(VAR_4);

 case 129:







  if (VAR_5->jackdet && !VAR_5->clk_has_run) {
   FUNC_2(VAR_0,
        &VAR_5->jackdet_bootstrap,
        FUNC_1(1000));
   VAR_5->clk_has_run = 1;
  }
  break;

 case 130:
  FUNC_0(VAR_4);
  break;
 }

 return 0;
}
