
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_8__ {int* value; } ;
struct TYPE_7__ {TYPE_4__ integer; } ;
struct snd_ctl_elem_value {TYPE_3__ value; } ;
struct TYPE_5__ {scalar_t__ lo_as_master; } ;
struct TYPE_6__ {TYPE_1__ ad18xx; } ;
struct snd_ac97 {unsigned short* regs; TYPE_2__ spec; } ;


 unsigned short VAR_0 ;
 size_t VAR_1 ;
 struct snd_ac97* FUNC_0 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_2, struct snd_ctl_elem_value *VAR_3)
{
 struct snd_ac97 *VAR_4 = FUNC_0(VAR_2);
 unsigned short VAR_5;

 VAR_5 = VAR_4->regs[VAR_1];
 VAR_3->value.integer.value[0] = !(VAR_5 & VAR_0);
 if (VAR_4->spec.ad18xx.lo_as_master)
  VAR_3->value.integer.value[0] =
   !VAR_3->value.integer.value[0];
 return 0;
}
