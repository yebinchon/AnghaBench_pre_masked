
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct snd_ac97 {unsigned short* regs; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 size_t VAR_2 ;
 struct snd_ac97* FUNC_0 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_3,
           struct snd_ctl_elem_value *VAR_4)
{
 static const int VAR_5[4] = {2, 0, 1, 3};
 struct snd_ac97 *VAR_6 = FUNC_0(VAR_3);
 unsigned short VAR_7;
 VAR_7 = (VAR_6->regs[VAR_2] & VAR_0)
       >> VAR_1;
 VAR_4->value.enumerated.item[0] = VAR_5[VAR_7];
 return 0;
}
