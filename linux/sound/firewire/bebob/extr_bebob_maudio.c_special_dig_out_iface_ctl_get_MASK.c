
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct special_params {int dig_out_fmt; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int * item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct snd_bebob {int mutex; struct special_params* maudio_special_quirk; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct snd_bebob* FUNC_2 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_0,
      struct snd_ctl_elem_value *VAR_1)
{
 struct snd_bebob *VAR_2 = FUNC_2(VAR_0);
 struct special_params *VAR_3 = VAR_2->maudio_special_quirk;
 FUNC_0(&VAR_2->mutex);
 VAR_1->value.enumerated.item[0] = VAR_3->dig_out_fmt;
 FUNC_1(&VAR_2->mutex);
 return 0;
}
