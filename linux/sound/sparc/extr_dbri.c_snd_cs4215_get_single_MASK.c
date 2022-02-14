
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct TYPE_4__ {int* data; int* ctrl; } ;
struct snd_dbri {TYPE_1__ mm; } ;
struct TYPE_5__ {int* value; } ;
struct TYPE_6__ {TYPE_2__ integer; } ;
struct snd_ctl_elem_value {TYPE_3__ value; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 struct snd_dbri* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_1,
     struct snd_ctl_elem_value *VAR_2)
{
 struct snd_dbri *VAR_3 = FUNC_1(VAR_1);
 int VAR_4 = VAR_1->private_value & 0xff;
 int VAR_5 = (VAR_1->private_value >> 8) & 0xff;
 int VAR_6 = (VAR_1->private_value >> 16) & 0xff;
 int VAR_7 = (VAR_1->private_value >> 24) & 1;

 if (FUNC_0(!VAR_3))
  return -VAR_0;

 if (VAR_4 < 4)
  VAR_2->value.integer.value[0] =
      (VAR_3->mm.data[VAR_4] >> VAR_5) & VAR_6;
 else
  VAR_2->value.integer.value[0] =
      (VAR_3->mm.ctrl[VAR_4 - 4] >> VAR_5) & VAR_6;

 if (VAR_7 == 1)
  VAR_2->value.integer.value[0] =
      VAR_6 - VAR_2->value.integer.value[0];
 return 0;
}
