
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t subdevice; size_t device; } ;
struct snd_kcontrol {TYPE_1__ id; } ;
struct TYPE_6__ {int * value; } ;
struct TYPE_7__ {TYPE_2__ integer; } ;
struct snd_ctl_elem_value {TYPE_3__ value; } ;
struct loopback {int cable_lock; TYPE_4__** setup; } ;
struct TYPE_8__ {int rate; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct loopback* FUNC_2 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_0,
        struct snd_ctl_elem_value *VAR_1)
{
 struct loopback *VAR_2 = FUNC_2(VAR_0);

 FUNC_0(&VAR_2->cable_lock);
 VAR_1->value.integer.value[0] =
  VAR_2->setup[VAR_0->id.subdevice]
          [VAR_0->id.device].rate;
 FUNC_1(&VAR_2->cable_lock);
 return 0;
}
