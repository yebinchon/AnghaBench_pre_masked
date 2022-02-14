
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_5__ {scalar_t__ default_get; } ;
struct TYPE_6__ {TYPE_1__ ops; } ;
struct snd_ice1712 {TYPE_2__ spdif; } ;
struct TYPE_7__ {int* status; } ;
struct TYPE_8__ {TYPE_3__ iec958; } ;
struct snd_ctl_elem_value {TYPE_4__ value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct snd_ice1712* FUNC_0 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_5,
           struct snd_ctl_elem_value *VAR_6)
{
 struct snd_ice1712 *VAR_7 = FUNC_0(VAR_5);
 if (VAR_7->spdif.ops.default_get) {
  VAR_6->value.iec958.status[0] = VAR_0 |
           VAR_1 |
           VAR_3 |
           VAR_2;
  VAR_6->value.iec958.status[1] = VAR_4;
 } else {
  VAR_6->value.iec958.status[0] = 0xff;
  VAR_6->value.iec958.status[1] = 0xff;
  VAR_6->value.iec958.status[2] = 0xff;
  VAR_6->value.iec958.status[3] = 0xff;
  VAR_6->value.iec958.status[4] = 0xff;
 }
 return 0;
}
