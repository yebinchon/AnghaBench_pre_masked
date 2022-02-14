
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int status; } ;
struct stm32_sai_sub_data {int ctrl_lock; TYPE_3__ iec958; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_4__ {int status; } ;
struct TYPE_5__ {TYPE_1__ iec958; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct stm32_sai_sub_data* FUNC_3 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_0,
         struct snd_ctl_elem_value *VAR_1)
{
 struct stm32_sai_sub_data *VAR_2 = FUNC_3(VAR_0);

 FUNC_1(&VAR_2->ctrl_lock);
 FUNC_0(VAR_1->value.iec958.status, VAR_2->iec958.status, 4);
 FUNC_2(&VAR_2->ctrl_lock);

 return 0;
}
