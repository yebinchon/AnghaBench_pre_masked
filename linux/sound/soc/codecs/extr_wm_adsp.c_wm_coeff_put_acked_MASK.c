
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wm_coeff_ctl {TYPE_2__* dsp; scalar_t__ enabled; } ;
struct soc_bytes_ext {int dummy; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_6__ {unsigned int* value; } ;
struct TYPE_4__ {TYPE_3__ integer; } ;
struct snd_ctl_elem_value {TYPE_1__ value; } ;
struct TYPE_5__ {int pwr_lock; scalar_t__ running; } ;


 int VAR_0 ;
 struct wm_coeff_ctl* FUNC_0 (struct soc_bytes_ext*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct wm_coeff_ctl*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_1,
         struct snd_ctl_elem_value *VAR_2)
{
 struct soc_bytes_ext *VAR_3 =
  (struct soc_bytes_ext *)VAR_1->private_value;
 struct wm_coeff_ctl *VAR_4 = FUNC_0(VAR_3);
 unsigned int VAR_5 = VAR_2->value.integer.value[0];
 int VAR_6;

 if (VAR_5 == 0)
  return 0;

 FUNC_1(&VAR_4->dsp->pwr_lock);

 if (VAR_4->enabled && VAR_4->dsp->running)
  VAR_6 = FUNC_3(VAR_4, VAR_5);
 else
  VAR_6 = -VAR_0;

 FUNC_2(&VAR_4->dsp->pwr_lock);

 return VAR_6;
}
