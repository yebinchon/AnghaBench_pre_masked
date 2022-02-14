
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_soc_component {TYPE_1__* dev; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_5__ {int * value; } ;
struct TYPE_6__ {TYPE_2__ integer; } ;
struct snd_ctl_elem_value {TYPE_3__ value; } ;
struct arizona {int dac_comp_lock; int dac_comp_enabled; } ;
struct TYPE_4__ {int parent; } ;


 struct arizona* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct snd_soc_component* FUNC_3 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_0,
          struct snd_ctl_elem_value *VAR_1)
{
 struct snd_soc_component *VAR_2 = FUNC_3(VAR_0);
 struct arizona *VAR_3 = FUNC_0(VAR_2->dev->parent);

 FUNC_1(&VAR_3->dac_comp_lock);
 VAR_3->dac_comp_enabled = VAR_1->value.integer.value[0];
 FUNC_2(&VAR_3->dac_comp_lock);

 return 0;
}
