
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_4__ {int * value; } ;
struct TYPE_6__ {int * item; } ;
struct TYPE_5__ {TYPE_1__ integer; TYPE_3__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct rsnd_kctrl_cfg {int size; int * val; scalar_t__ texts; } ;


 struct rsnd_kctrl_cfg* FUNC_0 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_0,
     struct snd_ctl_elem_value *VAR_1)
{
 struct rsnd_kctrl_cfg *VAR_2 = FUNC_0(VAR_0);
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->size; VAR_3++)
  if (VAR_2->texts)
   VAR_1->value.enumerated.item[VAR_3] = VAR_2->val[VAR_3];
  else
   VAR_1->value.integer.value[VAR_3] = VAR_2->val[VAR_3];

 return 0;
}
