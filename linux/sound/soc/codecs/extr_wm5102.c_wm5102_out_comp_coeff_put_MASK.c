
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_soc_component {TYPE_1__* dev; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_6__ {int data; } ;
struct TYPE_5__ {TYPE_3__ bytes; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct arizona {int dac_comp_lock; int dac_comp_coeff; } ;
struct TYPE_4__ {int parent; } ;


 int FUNC_0 (int ) ;
 struct arizona* FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct snd_soc_component* FUNC_5 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_6(struct snd_kcontrol *VAR_0,
         struct snd_ctl_elem_value *VAR_1)
{
 struct snd_soc_component *VAR_2 = FUNC_5(VAR_0);
 struct arizona *VAR_3 = FUNC_1(VAR_2->dev->parent);

 FUNC_3(&VAR_3->dac_comp_lock);
 FUNC_2(&VAR_3->dac_comp_coeff, VAR_1->value.bytes.data,
        sizeof(VAR_3->dac_comp_coeff));
 VAR_3->dac_comp_coeff = FUNC_0(VAR_3->dac_comp_coeff);
 FUNC_4(&VAR_3->dac_comp_lock);

 return 0;
}
