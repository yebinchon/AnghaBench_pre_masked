
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int led_mode; unsigned int led_value; int (* update ) (struct hda_codec*) ;int capture; } ;
struct hda_gen_spec {TYPE_1__ micmute_led; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;






 int FUNC_0 (struct hda_codec*) ;

__attribute__((used)) static void FUNC_1(struct hda_codec *VAR_0)
{
 struct hda_gen_spec *VAR_1 = VAR_0->spec;
 unsigned int VAR_2;

 switch (VAR_1->micmute_led.led_mode) {
 case 128:
  VAR_2 = 1;
  break;
 case 129:
  VAR_2 = 0;
  break;
 case 131:
  VAR_2 = !!VAR_1->micmute_led.capture;
  break;
 case 130:
 default:
  VAR_2 = !VAR_1->micmute_led.capture;
  break;
 }

 if (VAR_2 == VAR_1->micmute_led.led_value)
  return;
 VAR_1->micmute_led.led_value = VAR_2;
 if (VAR_1->micmute_led.update)
  VAR_1->micmute_led.update(VAR_0);
}
