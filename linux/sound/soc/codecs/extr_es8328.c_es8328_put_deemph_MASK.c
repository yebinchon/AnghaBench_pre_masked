
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {unsigned int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct es8328_priv {unsigned int deemph; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_soc_component*) ;
 struct es8328_priv* FUNC_1 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_2 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_1,
        struct snd_ctl_elem_value *VAR_2)
{
 struct snd_soc_component *VAR_3 = FUNC_2(VAR_1);
 struct es8328_priv *VAR_4 = FUNC_1(VAR_3);
 unsigned int VAR_5 = VAR_2->value.integer.value[0];
 int VAR_6;

 if (VAR_5 > 1)
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_3);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_4->deemph = VAR_5;

 return 0;
}
