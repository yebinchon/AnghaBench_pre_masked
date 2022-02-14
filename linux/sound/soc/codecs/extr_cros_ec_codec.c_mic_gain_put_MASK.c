
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct cros_ec_codec_data {unsigned int max_dmic_gain; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_soc_component*,int ,int ) ;
 struct cros_ec_codec_data* FUNC_1 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_2 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_1,
   struct snd_ctl_elem_value *VAR_2)
{
 struct snd_soc_component *VAR_3 =
  FUNC_2(VAR_1);
 struct cros_ec_codec_data *VAR_4 =
  FUNC_1(VAR_3);
 int VAR_5 = VAR_2->value.integer.value[0];
 int VAR_6 = VAR_2->value.integer.value[1];
 unsigned int VAR_7 = VAR_4->max_dmic_gain;

 if (VAR_5 > VAR_7 || VAR_6 > VAR_7)
  return -VAR_0;

 return FUNC_0(VAR_3, (u8)VAR_5, (u8)VAR_6);
}
