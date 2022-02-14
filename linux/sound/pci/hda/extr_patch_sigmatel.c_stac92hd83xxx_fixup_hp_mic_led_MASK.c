
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sigmatel_spec {int mic_mute_led_gpio; } ;
struct hda_fixup {int dummy; } ;
struct TYPE_2__ {int power_caps; } ;
struct hda_codec {TYPE_1__ core; struct sigmatel_spec* spec; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct hda_codec *VAR_2,
       const struct hda_fixup *VAR_3, int VAR_4)
{
 struct sigmatel_spec *VAR_5 = VAR_2->spec;

 if (VAR_4 == VAR_1) {
  VAR_5->mic_mute_led_gpio = 0x08;




 }
}
