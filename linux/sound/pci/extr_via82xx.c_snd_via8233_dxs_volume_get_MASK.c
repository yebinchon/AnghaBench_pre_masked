
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct via82xx {void*** playback_volume; } ;
struct TYPE_4__ {unsigned int subdevice; } ;
struct snd_kcontrol {TYPE_1__ id; } ;
struct TYPE_5__ {void** value; } ;
struct TYPE_6__ {TYPE_2__ integer; } ;
struct snd_ctl_elem_value {TYPE_3__ value; } ;


 void* VAR_0 ;
 struct via82xx* FUNC_0 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_1,
          struct snd_ctl_elem_value *VAR_2)
{
 struct via82xx *VAR_3 = FUNC_0(VAR_1);
 unsigned int VAR_4 = VAR_1->id.subdevice;

 VAR_2->value.integer.value[0] = VAR_0 - VAR_3->playback_volume[VAR_4][0];
 VAR_2->value.integer.value[1] = VAR_0 - VAR_3->playback_volume[VAR_4][1];
 return 0;
}
