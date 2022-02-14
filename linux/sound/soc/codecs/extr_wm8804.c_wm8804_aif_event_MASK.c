
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8804_priv {int aif_pwr; } ;
struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;




 int VAR_0 ;
 struct wm8804_priv* FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,int ,int,int) ;
 struct snd_soc_component* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dapm_widget *VAR_1,
       struct snd_kcontrol *VAR_2, int VAR_3)
{
 struct snd_soc_component *VAR_4 = FUNC_2(VAR_1->dapm);
 struct wm8804_priv *VAR_5 = FUNC_0(VAR_4);

 switch (VAR_3) {
 case 128:

  if (!VAR_5->aif_pwr)
   FUNC_1(VAR_4, VAR_0, 0x10, 0x0);
  VAR_5->aif_pwr++;
  break;
 case 129:

  VAR_5->aif_pwr--;
  if (!VAR_5->aif_pwr)
   FUNC_1(VAR_4, VAR_0, 0x10, 0x10);
  break;
 }

 return 0;
}
