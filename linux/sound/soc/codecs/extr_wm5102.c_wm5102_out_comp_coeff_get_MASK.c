
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_soc_component {TYPE_1__* dev; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_5__ {int data; } ;
struct TYPE_6__ {TYPE_2__ bytes; } ;
struct snd_ctl_elem_value {TYPE_3__ value; } ;
struct arizona {int dac_comp_lock; int dac_comp_coeff; } ;
struct TYPE_4__ {int parent; } ;


 struct arizona* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 struct snd_soc_component* FUNC_4 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_0,
         struct snd_ctl_elem_value *VAR_1)
{
 struct snd_soc_component *VAR_2 = FUNC_4(VAR_0);
 struct arizona *VAR_3 = FUNC_0(VAR_2->dev->parent);

 FUNC_1(&VAR_3->dac_comp_lock);
 FUNC_3(VAR_3->dac_comp_coeff,
      VAR_1->value.bytes.data);
 FUNC_2(&VAR_3->dac_comp_lock);

 return 0;
}
