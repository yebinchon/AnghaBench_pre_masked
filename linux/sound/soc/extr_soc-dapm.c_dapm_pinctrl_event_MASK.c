
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {struct pinctrl* pinctrl; struct snd_soc_dapm_pinctrl_priv* priv; } ;
struct snd_soc_dapm_pinctrl_priv {int sleep_state; int active_state; } ;
struct snd_kcontrol {int dummy; } ;
struct pinctrl_state {int dummy; } ;
struct pinctrl {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct pinctrl_state*) ;
 int FUNC_1 (struct pinctrl_state*) ;
 scalar_t__ FUNC_2 (int) ;
 struct pinctrl_state* FUNC_3 (struct pinctrl*,int ) ;
 int FUNC_4 (struct pinctrl*,struct pinctrl_state*) ;

int FUNC_5(struct snd_soc_dapm_widget *VAR_1,
         struct snd_kcontrol *VAR_2, int VAR_3)
{
 struct snd_soc_dapm_pinctrl_priv *VAR_4 = VAR_1->priv;
 struct pinctrl *VAR_5 = VAR_1->pinctrl;
 struct pinctrl_state *VAR_6;

 if (!VAR_5 || !VAR_4)
  return -VAR_0;

 if (FUNC_2(VAR_3))
  VAR_6 = FUNC_3(VAR_5, VAR_4->active_state);
 else
  VAR_6 = FUNC_3(VAR_5, VAR_4->sleep_state);

 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 return FUNC_4(VAR_5, VAR_6);
}
