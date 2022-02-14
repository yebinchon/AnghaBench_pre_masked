
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct soc_mixer_control {int platform_max; int max; scalar_t__ min; } ;
struct TYPE_4__ {int name; } ;
struct snd_kcontrol {TYPE_1__ id; scalar_t__ private_value; } ;
struct TYPE_5__ {scalar_t__ max; scalar_t__ min; } ;
struct TYPE_6__ {TYPE_2__ integer; } ;
struct snd_ctl_elem_info {int count; TYPE_3__ value; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct soc_mixer_control*) ;
 int FUNC_1 (int ,char*) ;

int FUNC_2(struct snd_kcontrol *VAR_2,
 struct snd_ctl_elem_info *VAR_3)
{
 struct soc_mixer_control *VAR_4 =
  (struct soc_mixer_control *)VAR_2->private_value;
 int VAR_5;

 if (!VAR_4->platform_max)
  VAR_4->platform_max = VAR_4->max;
 VAR_5 = VAR_4->platform_max;

 if (VAR_5 == 1 && !FUNC_1(VAR_2->id.name, " Volume"))
  VAR_3->type = VAR_0;
 else
  VAR_3->type = VAR_1;

 VAR_3->count = FUNC_0(VAR_4) ? 2 : 1;
 VAR_3->value.integer.min = 0;
 VAR_3->value.integer.max = VAR_5 - VAR_4->min;
 return 0;
}
