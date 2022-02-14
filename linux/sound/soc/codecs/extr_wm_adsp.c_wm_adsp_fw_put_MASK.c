
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wm_adsp {scalar_t__ fw; int pwr_lock; int compr_list; scalar_t__ booted; } ;
struct soc_enum {size_t shift_l; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {scalar_t__* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct wm_adsp* FUNC_3 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_4 (struct snd_kcontrol*) ;

int FUNC_5(struct snd_kcontrol *VAR_3,
     struct snd_ctl_elem_value *VAR_4)
{
 struct snd_soc_component *VAR_5 = FUNC_4(VAR_3);
 struct soc_enum *VAR_6 = (struct soc_enum *)VAR_3->private_value;
 struct wm_adsp *VAR_7 = FUNC_3(VAR_5);
 int VAR_8 = 0;

 if (VAR_4->value.enumerated.item[0] == VAR_7[VAR_6->shift_l].fw)
  return 0;

 if (VAR_4->value.enumerated.item[0] >= VAR_2)
  return -VAR_1;

 FUNC_1(&VAR_7[VAR_6->shift_l].pwr_lock);

 if (VAR_7[VAR_6->shift_l].booted || !FUNC_0(&VAR_7[VAR_6->shift_l].compr_list))
  VAR_8 = -VAR_0;
 else
  VAR_7[VAR_6->shift_l].fw = VAR_4->value.enumerated.item[0];

 FUNC_2(&VAR_7[VAR_6->shift_l].pwr_lock);

 return VAR_8;
}
