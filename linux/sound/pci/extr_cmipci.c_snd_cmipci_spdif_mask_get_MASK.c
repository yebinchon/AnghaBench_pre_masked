
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_4__ {int* status; } ;
struct TYPE_3__ {TYPE_2__ iec958; } ;
struct snd_ctl_elem_value {TYPE_1__ value; } ;



__attribute__((used)) static int FUNC_0(struct snd_kcontrol *VAR_0,
         struct snd_ctl_elem_value *VAR_1)
{
 VAR_1->value.iec958.status[0] = 0xff;
 VAR_1->value.iec958.status[1] = 0xff;
 VAR_1->value.iec958.status[2] = 0xff;
 VAR_1->value.iec958.status[3] = 0xff;
 return 0;
}
