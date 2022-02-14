
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct twl6040_data {int hs_power_mode; int hs_power_mode_locked; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int FUNC_0 (struct snd_soc_component*,int) ;
 struct twl6040_data* FUNC_1 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_2 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_0,
 struct snd_ctl_elem_value *VAR_1)
{
 struct snd_soc_component *VAR_2 = FUNC_2(VAR_0);
 struct twl6040_data *VAR_3 = FUNC_1(VAR_2);
 int VAR_4 = VAR_1->value.enumerated.item[0];
 int VAR_5 = 0;

 if (!VAR_3->hs_power_mode_locked)
  VAR_5 = FUNC_0(VAR_2, VAR_4);

 if (!VAR_5)
  VAR_3->hs_power_mode = VAR_4;

 return VAR_5;
}
