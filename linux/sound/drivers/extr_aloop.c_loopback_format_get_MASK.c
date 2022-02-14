
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {size_t subdevice; size_t device; } ;
struct snd_kcontrol {TYPE_4__ id; } ;
struct TYPE_5__ {int * value; } ;
struct TYPE_6__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct loopback {TYPE_3__** setup; } ;
struct TYPE_7__ {int format; } ;


 struct loopback* FUNC_0 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_0,
          struct snd_ctl_elem_value *VAR_1)
{
 struct loopback *VAR_2 = FUNC_0(VAR_0);

 VAR_1->value.integer.value[0] =
  VAR_2->setup[VAR_0->id.subdevice]
          [VAR_0->id.device].format;
 return 0;
}
