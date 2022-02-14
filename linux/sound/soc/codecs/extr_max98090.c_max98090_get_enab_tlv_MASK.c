
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct soc_mixer_control {int reg; unsigned int shift; int max; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {unsigned int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct max98090_priv {unsigned int pa1en; unsigned int pa2en; unsigned int sidetone; } ;


 int VAR_0 ;



 int FUNC_0 (int ) ;
 struct max98090_priv* FUNC_1 (struct snd_soc_component*) ;
 unsigned int FUNC_2 (struct snd_soc_component*,int) ;
 struct snd_soc_component* FUNC_3 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_1,
    struct snd_ctl_elem_value *VAR_2)
{
 struct snd_soc_component *VAR_3 = FUNC_3(VAR_1);
 struct max98090_priv *VAR_4 = FUNC_1(VAR_3);
 struct soc_mixer_control *VAR_5 =
  (struct soc_mixer_control *)VAR_1->private_value;
 unsigned int VAR_6 = (1 << FUNC_0(VAR_5->max)) - 1;
 unsigned int VAR_7 = FUNC_2(VAR_3, VAR_5->reg);
 unsigned int *VAR_8;

 switch (VAR_5->reg) {
 case 129:
  VAR_8 = &(VAR_4->pa1en);
  break;
 case 128:
  VAR_8 = &(VAR_4->pa2en);
  break;
 case 130:
  VAR_8 = &(VAR_4->sidetone);
  break;
 default:
  return -VAR_0;
 }

 VAR_7 = (VAR_7 >> VAR_5->shift) & VAR_6;

 if (VAR_7 >= 1) {

  VAR_7 = VAR_7 - 1;
  *VAR_8 = VAR_7;
 } else {

  VAR_7 = *VAR_8;
 }

 VAR_2->value.integer.value[0] = VAR_7;
 return 0;
}
