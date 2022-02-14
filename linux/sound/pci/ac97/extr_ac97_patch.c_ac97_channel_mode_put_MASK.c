
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_kcontrol {unsigned char private_value; } ;
struct TYPE_4__ {unsigned char* item; } ;
struct TYPE_5__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct snd_ac97 {unsigned char channel_mode; TYPE_3__* build_ops; } ;
struct TYPE_6__ {int (* update_jacks ) (struct snd_ac97*) ;} ;


 int VAR_0 ;
 struct snd_ac97* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (struct snd_ac97*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_1, struct snd_ctl_elem_value *VAR_2)
{
 struct snd_ac97 *VAR_3 = FUNC_0(VAR_1);
 unsigned char VAR_4 = VAR_2->value.enumerated.item[0];

 if (VAR_4 >= VAR_1->private_value)
  return -VAR_0;

 if (VAR_4 != VAR_3->channel_mode) {
  VAR_3->channel_mode = VAR_4;
  if (VAR_3->build_ops->update_jacks)
   VAR_3->build_ops->update_jacks(VAR_3);
  return 1;
 }
 return 0;
}
