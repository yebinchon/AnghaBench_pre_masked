
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigmatel_spec {int gpio_mask; int eapd_mask; int gpio_led; int gpio_dir; int gpio_data; int mic_mute_led_gpio; scalar_t__ mic_enabled; int vref_mute_led_nid; } ;
struct hda_codec {int power_filter; struct sigmatel_spec* spec; } ;


 int FUNC_0 (struct hda_codec*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct hda_codec *VAR_2)
{
 struct sigmatel_spec *VAR_3 = VAR_2->spec;

 VAR_3->gpio_mask |= VAR_3->eapd_mask;
 if (VAR_3->gpio_led) {
  if (!VAR_3->vref_mute_led_nid) {
   VAR_3->gpio_mask |= VAR_3->gpio_led;
   VAR_3->gpio_dir |= VAR_3->gpio_led;
   VAR_3->gpio_data |= VAR_3->gpio_led;
  } else {
   VAR_2->power_filter = VAR_1;
  }
 }

 if (VAR_3->mic_mute_led_gpio) {
  VAR_3->gpio_mask |= VAR_3->mic_mute_led_gpio;
  VAR_3->gpio_dir |= VAR_3->mic_mute_led_gpio;
  VAR_3->mic_enabled = 0;
  VAR_3->gpio_data |= VAR_3->mic_mute_led_gpio;
  FUNC_0(VAR_2, VAR_0);
 }
}
