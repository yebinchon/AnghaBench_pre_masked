
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {struct isight* private_data; } ;
struct TYPE_3__ {int max; int min; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_info {int count; TYPE_2__ value; int type; } ;
struct isight {int gain_max; int gain_min; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct snd_kcontrol *VAR_1,
       struct snd_ctl_elem_info *VAR_2)
{
 struct isight *VAR_3 = VAR_1->private_data;

 VAR_2->type = VAR_0;
 VAR_2->count = 1;
 VAR_2->value.integer.min = VAR_3->gain_min;
 VAR_2->value.integer.max = VAR_3->gain_max;

 return 0;
}
