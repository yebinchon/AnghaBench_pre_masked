
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hda_fixup {int dummy; } ;
struct hda_codec {struct conexant_spec* spec; } ;
struct TYPE_3__ {int hook; } ;
struct TYPE_4__ {TYPE_1__ vmaster_mute; } ;
struct conexant_spec {int mute_led_eapd; int dynamic_eapd; TYPE_2__ gen; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct hda_codec *VAR_2,
        const struct hda_fixup *VAR_3, int VAR_4)
{
 struct conexant_spec *VAR_5 = VAR_2->spec;

 if (VAR_4 == VAR_0) {
  VAR_5->mute_led_eapd = 0x1b;
  VAR_5->dynamic_eapd = 1;
  VAR_5->gen.vmaster_mute.hook = VAR_1;
 }
}
