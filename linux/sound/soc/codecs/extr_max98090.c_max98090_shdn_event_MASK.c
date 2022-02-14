
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct max98090_priv {int shdn_pending; } ;


 int VAR_0 ;
 struct max98090_priv* FUNC_0 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dapm_widget *VAR_1,
     struct snd_kcontrol *VAR_2, int VAR_3)
{
 struct snd_soc_component *VAR_4 = FUNC_1(VAR_1->dapm);
 struct max98090_priv *VAR_5 = FUNC_0(VAR_4);

 if (VAR_3 & VAR_0)
  VAR_5->shdn_pending = 1;

 return 0;

}
