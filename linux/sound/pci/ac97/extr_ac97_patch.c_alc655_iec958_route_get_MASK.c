
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_6__ {unsigned short* item; } ;
struct TYPE_4__ {TYPE_3__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_1__ value; } ;
struct TYPE_5__ {scalar_t__ dev_flags; } ;
struct snd_ac97 {unsigned short* regs; TYPE_2__ spec; } ;


 size_t VAR_0 ;
 struct snd_ac97* FUNC_0 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_1, struct snd_ctl_elem_value *VAR_2)
{
 struct snd_ac97 *VAR_3 = FUNC_0(VAR_1);
 unsigned short VAR_4;

 VAR_4 = VAR_3->regs[VAR_0];
 VAR_4 = (VAR_4 >> 12) & 3;
 if (VAR_3->spec.dev_flags && VAR_4 == 3)
  VAR_4 = 0;
 VAR_2->value.enumerated.item[0] = VAR_4;
 return 0;
}
