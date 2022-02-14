
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {int max; int min; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_info {TYPE_2__ value; int count; int type; } ;
struct filter_control {int max; int min; int count; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct snd_kcontrol *VAR_1,
   struct snd_ctl_elem_info *VAR_2)
{
 struct filter_control *VAR_3 =
   (struct filter_control *)VAR_1->private_value;

 VAR_2->type = VAR_0;
 VAR_2->count = VAR_3->count;
 VAR_2->value.integer.min = VAR_3->min;
 VAR_2->value.integer.max = VAR_3->max;

 return 0;
}
