
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8962_priv {int dsp2_ena; } ;
struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;


 int VAR_0 ;


 int FUNC_0 (int,char*,int) ;
 struct wm8962_priv* FUNC_1 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_2 (int ) ;
 int FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_dapm_widget *VAR_1,
        struct snd_kcontrol *VAR_2, int VAR_3)
{
 struct snd_soc_component *VAR_4 = FUNC_2(VAR_1->dapm);
 struct wm8962_priv *VAR_5 = FUNC_1(VAR_4);

 switch (VAR_3) {
 case 129:
  if (VAR_5->dsp2_ena)
   FUNC_3(VAR_4);
  break;

 case 128:
  if (VAR_5->dsp2_ena)
   FUNC_4(VAR_4);
  break;

 default:
  FUNC_0(1, "Invalid event %d\n", VAR_3);
  return -VAR_0;
 }

 return 0;
}
