
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hda_codec {struct conexant_spec* spec; } ;
struct TYPE_3__ {int led_value; } ;
struct TYPE_4__ {TYPE_1__ micmute_led; } ;
struct conexant_spec {TYPE_2__ gen; int gpio_mic_led_mask; } ;


 int FUNC_0 (struct hda_codec*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct hda_codec *VAR_0)
{
 struct conexant_spec *VAR_1 = VAR_0->spec;

 FUNC_0(VAR_0, VAR_1->gpio_mic_led_mask,
       VAR_1->gen.micmute_led.led_value);
}
