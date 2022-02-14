
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct TYPE_4__ {int max; scalar_t__ min; } ;
struct TYPE_3__ {TYPE_2__ integer; } ;
struct snd_ctl_elem_info {int count; TYPE_1__ value; int type; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct snd_kcontrol *VAR_2,
      struct snd_ctl_elem_info *VAR_3)
{
 int VAR_4 = (VAR_2->private_value >> 24) & 0xff;

 if (VAR_4 == 1)
  VAR_3->type = VAR_0;
 else
  VAR_3->type = VAR_1;

 VAR_3->count = 2;
 VAR_3->value.integer.min = 0;
 VAR_3->value.integer.max = VAR_4;

 return 0;
}
