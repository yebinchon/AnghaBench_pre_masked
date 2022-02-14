
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_4__ {unsigned int* item; } ;
struct TYPE_5__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct TYPE_6__ {unsigned int led_mode; } ;
struct hda_gen_spec {TYPE_3__ micmute_led; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct hda_codec*) ;
 struct hda_codec* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_1,
    struct snd_ctl_elem_value *VAR_2)
{
 struct hda_codec *VAR_3 = FUNC_1(VAR_1);
 struct hda_gen_spec *VAR_4 = VAR_3->spec;
 unsigned int VAR_5;

 VAR_5 = VAR_2->value.enumerated.item[0];
 if (VAR_5 > VAR_0)
  VAR_5 = VAR_0;
 if (VAR_5 == VAR_4->micmute_led.led_mode)
  return 0;
 VAR_4->micmute_led.led_mode = VAR_5;
 FUNC_0(VAR_3);
 return 1;
}
