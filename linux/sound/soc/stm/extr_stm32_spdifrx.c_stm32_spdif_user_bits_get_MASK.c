
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stm32_spdifrx_data {int * ub; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int * status; } ;
struct TYPE_4__ {TYPE_1__ iec958; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 struct snd_soc_dai* FUNC_0 (struct snd_kcontrol*) ;
 struct stm32_spdifrx_data* FUNC_1 (struct snd_soc_dai*) ;
 int FUNC_2 (struct stm32_spdifrx_data*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_0,
         struct snd_ctl_elem_value *VAR_1)
{
 struct snd_soc_dai *VAR_2 = FUNC_0(VAR_0);
 struct stm32_spdifrx_data *VAR_3 = FUNC_1(VAR_2);

 FUNC_2(VAR_3);

 VAR_1->value.iec958.status[0] = VAR_3->ub[0];
 VAR_1->value.iec958.status[1] = VAR_3->ub[1];
 VAR_1->value.iec958.status[2] = VAR_3->ub[2];
 VAR_1->value.iec958.status[3] = VAR_3->ub[3];
 VAR_1->value.iec958.status[4] = VAR_3->ub[4];

 return 0;
}
