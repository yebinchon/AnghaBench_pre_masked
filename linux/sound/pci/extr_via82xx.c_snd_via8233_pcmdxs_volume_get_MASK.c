
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct via82xx {void** playback_volume_c; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {void** value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 void* VAR_0 ;
 struct via82xx* FUNC_0 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_1,
      struct snd_ctl_elem_value *VAR_2)
{
 struct via82xx *VAR_3 = FUNC_0(VAR_1);
 VAR_2->value.integer.value[0] = VAR_0 - VAR_3->playback_volume_c[0];
 VAR_2->value.integer.value[1] = VAR_0 - VAR_3->playback_volume_c[1];
 return 0;
}
