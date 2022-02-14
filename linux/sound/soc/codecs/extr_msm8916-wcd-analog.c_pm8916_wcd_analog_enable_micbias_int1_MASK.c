
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int reg; int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct pm8916_wcd_analog_priv {int micbias1_cap_mode; } ;


 int FUNC_0 (struct snd_soc_component*,int,int ,int ) ;
 struct pm8916_wcd_analog_priv* FUNC_1 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct
        snd_soc_dapm_widget
        *VAR_0, struct snd_kcontrol
        *VAR_1, int VAR_2)
{
 struct snd_soc_component *VAR_3 = FUNC_2(VAR_0->dapm);
 struct pm8916_wcd_analog_priv *VAR_4 = FUNC_1(VAR_3);

 return FUNC_0(VAR_3, VAR_2, VAR_0->reg,
           VAR_4->micbias1_cap_mode);
}
