
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mute; } ;
struct spdif_out_dev {TYPE_1__ saved_params; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_5__ {int * value; } ;
struct TYPE_6__ {TYPE_2__ integer; } ;
struct snd_ctl_elem_value {TYPE_3__ value; } ;


 struct snd_soc_dai* FUNC_0 (struct snd_kcontrol*) ;
 struct spdif_out_dev* FUNC_1 (struct snd_soc_dai*) ;
 int FUNC_2 (struct snd_soc_dai*,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_0,
  struct snd_ctl_elem_value *VAR_1)
{
 struct snd_soc_dai *VAR_2 = FUNC_0(VAR_0);
 struct spdif_out_dev *VAR_3 = FUNC_1(VAR_2);

 if (VAR_3->saved_params.mute == VAR_1->value.integer.value[0])
  return 0;

 FUNC_2(VAR_2, VAR_1->value.integer.value[0]);

 return 1;
}
