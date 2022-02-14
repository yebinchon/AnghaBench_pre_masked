
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_jack {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct pm8916_wcd_analog_priv {struct snd_soc_jack* jack; } ;


 struct pm8916_wcd_analog_priv* FUNC_0 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_component *VAR_0,
          struct snd_soc_jack *VAR_1,
          void *VAR_2)
{
 struct pm8916_wcd_analog_priv *VAR_3 = FUNC_0(VAR_0);

 VAR_3->jack = VAR_1;

 return 0;
}
