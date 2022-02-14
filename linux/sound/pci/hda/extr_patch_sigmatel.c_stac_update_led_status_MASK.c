
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigmatel_spec {int vref_led; int vref_mute_led_nid; int gpio_data; int gpio_dir; int gpio_mask; int gpio_led; scalar_t__ gpio_led_polarity; } ;
struct hda_codec {struct sigmatel_spec* spec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hda_codec*,int ,int ,int ) ;
 int FUNC_1 (struct hda_codec*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_2, int VAR_3)
{
 struct sigmatel_spec *VAR_4 = VAR_2->spec;
 int VAR_5 = !VAR_3;

 if (!VAR_4->gpio_led)
  return;


 if (VAR_4->gpio_led_polarity)
  VAR_5 = !VAR_5;

 if (!VAR_4->vref_mute_led_nid) {
  if (VAR_5)
   VAR_4->gpio_data |= VAR_4->gpio_led;
  else
   VAR_4->gpio_data &= ~VAR_4->gpio_led;
  FUNC_0(VAR_2, VAR_4->gpio_mask,
    VAR_4->gpio_dir, VAR_4->gpio_data);
 } else {
  VAR_4->vref_led = VAR_5 ? VAR_0 : VAR_1;
  FUNC_1(VAR_2, VAR_4->vref_mute_led_nid,
     VAR_4->vref_led);
 }
}
