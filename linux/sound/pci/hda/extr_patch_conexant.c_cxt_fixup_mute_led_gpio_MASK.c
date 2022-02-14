
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hda_verb {int member_0; int member_2; int member_1; } ;
struct hda_fixup {int dummy; } ;
struct hda_codec {struct conexant_spec* spec; } ;
struct TYPE_3__ {int hook; } ;
struct TYPE_4__ {TYPE_1__ vmaster_mute; } ;
struct conexant_spec {int gpio_mute_led_mask; int gpio_mic_led_mask; scalar_t__ gpio_led; scalar_t__ mute_led_polarity; TYPE_2__ gen; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hda_codec*,struct hda_verb const*) ;
 int FUNC_1 (struct hda_codec*,int,int ,int ,scalar_t__) ;
 int FUNC_2 (struct hda_codec*,int ) ;

__attribute__((used)) static void FUNC_3(struct hda_codec *VAR_4,
    const struct hda_fixup *VAR_5, int VAR_6)
{
 struct conexant_spec *VAR_7 = VAR_4->spec;
 static const struct hda_verb VAR_8[] = {
  { 0x01, 128, 0x03 },
  { 0x01, 129, 0x03 },
  {}
 };

 if (VAR_6 == VAR_1) {
  VAR_7->gen.vmaster_mute.hook = VAR_2;
  VAR_7->gpio_led = 0;
  VAR_7->mute_led_polarity = 0;
  VAR_7->gpio_mute_led_mask = 0x01;
  VAR_7->gpio_mic_led_mask = 0x02;
  FUNC_2(VAR_4, VAR_3);
 }
 FUNC_0(VAR_4, VAR_8);
 if (VAR_7->gpio_led)
  FUNC_1(VAR_4, 0x01, 0, VAR_0,
        VAR_7->gpio_led);
}
