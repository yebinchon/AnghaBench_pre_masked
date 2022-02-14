
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hda_codec {struct alc_spec* spec; } ;
struct TYPE_3__ {int hook; } ;
struct TYPE_4__ {TYPE_1__ vmaster_mute; } ;
struct alc_spec {unsigned int gpio_mute_led_mask; unsigned int gpio_mic_led_mask; TYPE_2__ gen; } ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,int,unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct hda_codec*,int ) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_3,
      int VAR_4,
      unsigned int VAR_5,
      unsigned int VAR_6)
{
 struct alc_spec *VAR_7 = VAR_3->spec;

 FUNC_0(VAR_3, VAR_4, VAR_5 | VAR_6);

 if (VAR_4 != VAR_0)
  return;
 if (VAR_5) {
  VAR_7->gpio_mute_led_mask = VAR_5;
  VAR_7->gen.vmaster_mute.hook = VAR_1;
 }
 if (VAR_6) {
  VAR_7->gpio_mic_led_mask = VAR_6;
  FUNC_1(VAR_3, VAR_2);
 }
}
