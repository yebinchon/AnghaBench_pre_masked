
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ led_value; } ;
struct TYPE_4__ {TYPE_1__ micmute_led; } ;
struct sigmatel_spec {int gpio_data; int gpio_dir; int gpio_mask; int mic_mute_led_gpio; TYPE_2__ gen; } ;
struct hda_codec {struct sigmatel_spec* spec; } ;


 int FUNC_0 (struct hda_codec*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct hda_codec *VAR_0)
{
 struct sigmatel_spec *VAR_1 = VAR_0->spec;

 if (VAR_1->gen.micmute_led.led_value)
  VAR_1->gpio_data |= VAR_1->mic_mute_led_gpio;
 else
  VAR_1->gpio_data &= ~VAR_1->mic_mute_led_gpio;
 FUNC_0(VAR_0, VAR_1->gpio_mask, VAR_1->gpio_dir, VAR_1->gpio_data);
}
