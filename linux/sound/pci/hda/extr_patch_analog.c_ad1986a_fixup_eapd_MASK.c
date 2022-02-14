
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_fixup {int dummy; } ;
struct hda_codec {scalar_t__ inv_eapd; struct ad198x_spec* spec; } ;
struct TYPE_2__ {int keep_eapd_on; } ;
struct ad198x_spec {int eapd_nid; TYPE_1__ gen; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct hda_codec *VAR_1,
          const struct hda_fixup *VAR_2, int VAR_3)
{
 struct ad198x_spec *VAR_4 = VAR_1->spec;

 if (VAR_3 == VAR_0) {
  VAR_1->inv_eapd = 0;
  VAR_4->gen.keep_eapd_on = 1;
  VAR_4->eapd_nid = 0x1b;
 }
}
