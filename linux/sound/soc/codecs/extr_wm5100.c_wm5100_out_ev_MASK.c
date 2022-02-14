
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm5100_priv {int* out_ena; } ;
struct snd_soc_dapm_widget {int reg; int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;




 struct wm5100_priv* FUNC_0 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dapm_widget *VAR_0,
    struct snd_kcontrol *VAR_1,
    int VAR_2)
{
 struct snd_soc_component *VAR_3 = FUNC_1(VAR_0->dapm);
 struct wm5100_priv *VAR_4 = FUNC_0(VAR_3);

 switch (VAR_0->reg) {
 case 129:
  VAR_4->out_ena[0] = 1;
  break;
 case 128:
  VAR_4->out_ena[0] = 1;
  break;
 default:
  break;
 }

 return 0;
}
