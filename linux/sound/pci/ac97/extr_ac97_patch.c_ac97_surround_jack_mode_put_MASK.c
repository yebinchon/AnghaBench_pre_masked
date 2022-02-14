
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_4__ {int * item; } ;
struct TYPE_5__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct snd_ac97 {unsigned char indep_surround; TYPE_3__* build_ops; } ;
struct TYPE_6__ {int (* update_jacks ) (struct snd_ac97*) ;} ;


 struct snd_ac97* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (struct snd_ac97*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_0, struct snd_ctl_elem_value *VAR_1)
{
 struct snd_ac97 *VAR_2 = FUNC_0(VAR_0);
 unsigned char VAR_3 = !!VAR_1->value.enumerated.item[0];

 if (VAR_3 != VAR_2->indep_surround) {
  VAR_2->indep_surround = VAR_3;
  if (VAR_2->build_ops->update_jacks)
   VAR_2->build_ops->update_jacks(VAR_2);
  return 1;
 }
 return 0;
}
