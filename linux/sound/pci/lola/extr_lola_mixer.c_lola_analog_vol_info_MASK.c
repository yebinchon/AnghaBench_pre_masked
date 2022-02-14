
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct TYPE_5__ {int max; scalar_t__ min; } ;
struct TYPE_6__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_info {TYPE_2__ value; int count; int type; } ;
struct lola {TYPE_4__* pin; } ;
struct TYPE_8__ {TYPE_3__* pins; int num_pins; } ;
struct TYPE_7__ {int amp_num_steps; } ;


 int VAR_0 ;
 struct lola* FUNC_0 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_1,
    struct snd_ctl_elem_info *VAR_2)
{
 struct lola *VAR_3 = FUNC_0(VAR_1);
 int VAR_4 = VAR_1->private_value;

 VAR_2->type = VAR_0;
 VAR_2->count = VAR_3->pin[VAR_4].num_pins;
 VAR_2->value.integer.min = 0;
 VAR_2->value.integer.max = VAR_3->pin[VAR_4].pins[0].amp_num_steps;
 return 0;
}
