
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_pmac {TYPE_3__* beep; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_4__ {int * value; } ;
struct TYPE_5__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct TYPE_6__ {int volume; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 struct snd_pmac* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_1,
        struct snd_ctl_elem_value *VAR_2)
{
 struct snd_pmac *VAR_3 = FUNC_1(VAR_1);
 if (FUNC_0(!VAR_3->beep))
  return -VAR_0;
 VAR_2->value.integer.value[0] = VAR_3->beep->volume;
 return 0;
}
