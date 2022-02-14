
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct TYPE_7__ {int * value; } ;
struct TYPE_8__ {TYPE_3__ integer; } ;
struct snd_ctl_elem_value {TYPE_4__ value; } ;
struct lola {TYPE_2__* pin; } ;
struct TYPE_6__ {int num_pins; TYPE_1__* pins; } ;
struct TYPE_5__ {int cur_gain_step; } ;


 struct lola* FUNC_0 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_0,
          struct snd_ctl_elem_value *VAR_1)
{
 struct lola *VAR_2 = FUNC_0(VAR_0);
 int VAR_3 = VAR_0->private_value;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2->pin[VAR_3].num_pins; VAR_4++)
  VAR_1->value.integer.value[VAR_4] =
   VAR_2->pin[VAR_3].pins[VAR_4].cur_gain_step;
 return 0;
}
