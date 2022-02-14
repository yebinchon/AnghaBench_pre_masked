
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct madera_priv {int dummy; } ;


 int FUNC_0 (struct madera_priv*) ;
 struct madera_priv* FUNC_1 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_2 (int ) ;

int FUNC_3(struct snd_soc_dapm_widget *VAR_0,
       struct snd_kcontrol *VAR_1, int VAR_2)
{
 struct snd_soc_component *VAR_3 = FUNC_2(VAR_0->dapm);
 struct madera_priv *VAR_4 = FUNC_1(VAR_3);

 FUNC_0(VAR_4);

 return 0;
}
