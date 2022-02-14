
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct soc_mixer_control {unsigned int reg; unsigned int rreg; unsigned int shift; int max; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int FUNC_0 (int) ;
 unsigned int FUNC_1 (struct snd_soc_component*,unsigned int) ;
 struct snd_soc_component* FUNC_2 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_0,
        struct snd_ctl_elem_value *VAR_1)
{
 struct soc_mixer_control *VAR_2 =
  (struct soc_mixer_control *)VAR_0->private_value;
 struct snd_soc_component *VAR_3 = FUNC_2(VAR_0);
 unsigned int VAR_4 = VAR_2->reg;
 unsigned int VAR_5 = VAR_2->rreg;
 unsigned int VAR_6 = VAR_2->shift;
 int VAR_7 = VAR_2->max, VAR_8, VAR_9;
 unsigned int VAR_10 = (1 << FUNC_0(VAR_7)) - 1;

 VAR_8 = FUNC_1(VAR_3, VAR_4) >> VAR_6;
 VAR_9 = FUNC_1(VAR_3, VAR_5) >> VAR_6;
 VAR_1->value.integer.value[0] = (VAR_7 - VAR_8) & VAR_10;
 VAR_1->value.integer.value[1] = (VAR_7 - VAR_9) & VAR_10;

 return 0;
}
