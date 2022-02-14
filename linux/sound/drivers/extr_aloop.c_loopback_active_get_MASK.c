
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t subdevice; int device; } ;
struct snd_kcontrol {TYPE_1__ id; } ;
struct TYPE_5__ {unsigned int* value; } ;
struct TYPE_6__ {TYPE_2__ integer; } ;
struct snd_ctl_elem_value {TYPE_3__ value; } ;
struct loopback_cable {unsigned int running; unsigned int pause; } ;
struct loopback {int cable_lock; struct loopback_cable*** cables; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct loopback* FUNC_2 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_1,
          struct snd_ctl_elem_value *VAR_2)
{
 struct loopback *VAR_3 = FUNC_2(VAR_1);
 struct loopback_cable *VAR_4;

 unsigned int VAR_5 = 0;

 FUNC_0(&VAR_3->cable_lock);
 VAR_4 = VAR_3->cables[VAR_1->id.subdevice][VAR_1->id.device ^ 1];
 if (VAR_4 != ((void*)0)) {
  unsigned int VAR_6 = VAR_4->running ^ VAR_4->pause;

  VAR_5 = (VAR_6 & (1 << VAR_0)) ? 1 : 0;
 }
 FUNC_1(&VAR_3->cable_lock);
 VAR_2->value.integer.value[0] = VAR_5;
 return 0;
}
