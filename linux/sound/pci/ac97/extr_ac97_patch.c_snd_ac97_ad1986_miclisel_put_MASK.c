
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_7__ {scalar_t__* value; } ;
struct TYPE_8__ {TYPE_2__ integer; } ;
struct snd_ctl_elem_value {TYPE_3__ value; } ;
struct TYPE_9__ {unsigned char swap_mic_linein; } ;
struct TYPE_10__ {TYPE_4__ ad18xx; } ;
struct snd_ac97 {TYPE_1__* build_ops; TYPE_5__ spec; } ;
struct TYPE_6__ {int (* update_jacks ) (struct snd_ac97*) ;} ;


 struct snd_ac97* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (struct snd_ac97*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_0,
     struct snd_ctl_elem_value *VAR_1)
{
 struct snd_ac97 *VAR_2 = FUNC_0(VAR_0);
 unsigned char VAR_3 = VAR_1->value.integer.value[0] != 0;

 if (VAR_3 != VAR_2->spec.ad18xx.swap_mic_linein) {
  VAR_2->spec.ad18xx.swap_mic_linein = VAR_3;
  if (VAR_2->build_ops->update_jacks)
   VAR_2->build_ops->update_jacks(VAR_2);
  return 1;
 }
 return 0;
}
