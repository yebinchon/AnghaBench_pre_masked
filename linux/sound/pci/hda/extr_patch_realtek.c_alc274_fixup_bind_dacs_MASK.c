
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_fixup {int dummy; } ;
struct hda_codec {scalar_t__ power_save_node; struct alc_spec* spec; } ;
struct TYPE_2__ {int* preferred_dacs; int auto_mute_via_amp; } ;
struct alc_spec {TYPE_1__ gen; } ;
typedef int hda_nid_t ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct hda_codec *VAR_1,
        const struct hda_fixup *VAR_2, int VAR_3)
{
 struct alc_spec *VAR_4 = VAR_1->spec;
 static hda_nid_t VAR_5[] = {
  0x21, 0x03, 0x1b, 0x03, 0x16, 0x02,
  0
 };

 if (VAR_3 != VAR_0)
  return;

 VAR_4->gen.preferred_dacs = VAR_5;
 VAR_4->gen.auto_mute_via_amp = 1;
 VAR_1->power_save_node = 0;
}
