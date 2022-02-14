
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct adau7002_priv {int wakeup_delay; } ;



 int FUNC_0 (int ) ;
 struct adau7002_priv* FUNC_1 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dapm_widget *VAR_0,
         struct snd_kcontrol *VAR_1, int VAR_2)
{
 struct snd_soc_component *VAR_3 =
   FUNC_2(VAR_0->dapm);
 struct adau7002_priv *VAR_4 =
   FUNC_1(VAR_3);

 switch (VAR_2) {
 case 128:
  if (VAR_4->wakeup_delay)
   FUNC_0(VAR_4->wakeup_delay);
  break;
 }

 return 0;
}
