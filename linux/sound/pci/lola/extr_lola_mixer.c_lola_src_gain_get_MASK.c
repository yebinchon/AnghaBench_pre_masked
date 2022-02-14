
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct TYPE_7__ {unsigned short* value; } ;
struct TYPE_8__ {TYPE_3__ integer; } ;
struct snd_ctl_elem_value {TYPE_4__ value; } ;
struct TYPE_6__ {int src_mask; TYPE_1__* array; } ;
struct lola {TYPE_2__ mixer; } ;
struct TYPE_5__ {int * src_gain; int src_gain_enable; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct lola* FUNC_2 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_1,
        struct snd_ctl_elem_value *VAR_2)
{
 struct lola *VAR_3 = FUNC_2(VAR_1);
 unsigned int VAR_4 = VAR_1->private_value & 0xff;
 unsigned int VAR_5 = (VAR_1->private_value >> 8) & 0xff;
 unsigned int VAR_6, VAR_7;

 VAR_6 = FUNC_0(&VAR_3->mixer.array->src_gain_enable);
 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  unsigned int VAR_8 = VAR_4 + VAR_7;
  unsigned short VAR_9;
  if (!(VAR_3->mixer.src_mask & (1 << VAR_8)))
   return -VAR_0;
  if (VAR_6 & (1 << VAR_8))
   VAR_9 = FUNC_1(&VAR_3->mixer.array->src_gain[VAR_8]) + 1;
  else
   VAR_9 = 0;
  VAR_2->value.integer.value[VAR_7] = VAR_9;
 }
 return 0;
}
