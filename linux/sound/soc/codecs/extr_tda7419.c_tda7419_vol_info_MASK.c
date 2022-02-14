
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tda7419_vol_control {int max; int min; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_4__ {int max; int min; } ;
struct TYPE_3__ {TYPE_2__ integer; } ;
struct snd_ctl_elem_info {int count; TYPE_1__ value; int type; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct tda7419_vol_control*) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_1,
 struct snd_ctl_elem_info *VAR_2)
{
 struct tda7419_vol_control *VAR_3 =
  (struct tda7419_vol_control *)VAR_1->private_value;

 VAR_2->type = VAR_0;
 VAR_2->count = FUNC_0(VAR_3) ? 2 : 1;
 VAR_2->value.integer.min = VAR_3->min;
 VAR_2->value.integer.max = VAR_3->max;

 return 0;
}
