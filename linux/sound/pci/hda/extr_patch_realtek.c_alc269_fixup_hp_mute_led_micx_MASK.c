
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hda_fixup {int dummy; } ;
struct hda_codec {int power_filter; struct alc_spec* spec; } ;
struct TYPE_3__ {int hook; } ;
struct TYPE_4__ {int vmaster_mute_enum; TYPE_1__ vmaster_mute; } ;
struct alc_spec {TYPE_2__ gen; int mute_led_nid; scalar_t__ mute_led_polarity; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct hda_codec *VAR_3,
       const struct hda_fixup *VAR_4,
       int VAR_5, hda_nid_t VAR_6)
{
 struct alc_spec *VAR_7 = VAR_3->spec;

 if (VAR_5 == VAR_0) {
  VAR_7->mute_led_polarity = 0;
  VAR_7->mute_led_nid = VAR_6;
  VAR_7->gen.vmaster_mute.hook = VAR_1;
  VAR_7->gen.vmaster_mute_enum = 1;
  VAR_3->power_filter = VAR_2;
 }
}
