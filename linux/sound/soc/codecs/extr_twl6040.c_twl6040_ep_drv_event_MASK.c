
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twl6040_data {int hs_power_mode_locked; int hs_power_mode; } ;
struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct snd_soc_component*,int) ;
 int FUNC_2 (int) ;
 struct twl6040_data* FUNC_3 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_dapm_widget *VAR_0,
   struct snd_kcontrol *VAR_1, int VAR_2)
{
 struct snd_soc_component *VAR_3 = FUNC_4(VAR_0->dapm);
 struct twl6040_data *VAR_4 = FUNC_3(VAR_3);
 int VAR_5 = 0;

 if (FUNC_0(VAR_2)) {

  VAR_4->hs_power_mode_locked = 1;
  VAR_5 = FUNC_1(VAR_3, 1);
 } else {
  VAR_4->hs_power_mode_locked = 0;
  VAR_5 = FUNC_1(VAR_3, VAR_4->hs_power_mode);
 }

 FUNC_2(1);

 return VAR_5;
}
