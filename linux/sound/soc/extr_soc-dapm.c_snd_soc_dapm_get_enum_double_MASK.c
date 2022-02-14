
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct soc_enum {scalar_t__ reg; unsigned int shift_l; unsigned int mask; unsigned int shift_r; } ;
struct snd_soc_dapm_context {struct snd_soc_card* card; } ;
struct snd_soc_card {int dapm_mutex; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {unsigned int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_0 (struct snd_kcontrol*) ;
 scalar_t__ FUNC_1 (struct snd_kcontrol*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 struct snd_soc_dapm_context* FUNC_4 (struct snd_kcontrol*) ;
 void* FUNC_5 (struct soc_enum*,unsigned int) ;
 int FUNC_6 (struct snd_soc_dapm_context*,scalar_t__,unsigned int*) ;

int FUNC_7(struct snd_kcontrol *VAR_2,
 struct snd_ctl_elem_value *VAR_3)
{
 struct snd_soc_dapm_context *VAR_4 = FUNC_4(VAR_2);
 struct snd_soc_card *VAR_5 = VAR_4->card;
 struct soc_enum *VAR_6 = (struct soc_enum *)VAR_2->private_value;
 unsigned int VAR_7, VAR_8;

 FUNC_2(&VAR_5->dapm_mutex, VAR_0);
 if (VAR_6->reg != VAR_1 && FUNC_1(VAR_2)) {
  int VAR_9 = FUNC_6(VAR_4, VAR_6->reg, &VAR_7);
  if (VAR_9) {
   FUNC_3(&VAR_5->dapm_mutex);
   return VAR_9;
  }
 } else {
  VAR_7 = FUNC_0(VAR_2);
 }
 FUNC_3(&VAR_5->dapm_mutex);

 VAR_8 = (VAR_7 >> VAR_6->shift_l) & VAR_6->mask;
 VAR_3->value.enumerated.item[0] = FUNC_5(VAR_6, VAR_8);
 if (VAR_6->shift_l != VAR_6->shift_r) {
  VAR_8 = (VAR_7 >> VAR_6->shift_r) & VAR_6->mask;
  VAR_8 = FUNC_5(VAR_6, VAR_8);
  VAR_3->value.enumerated.item[1] = VAR_8;
 }

 return 0;
}
