
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hda_fixup {int dummy; } ;
struct hda_codec {struct ad198x_spec* spec; } ;
struct TYPE_3__ {int hook; } ;
struct TYPE_4__ {int keep_eapd_on; scalar_t__ beep_nid; TYPE_1__ vmaster_mute; } ;
struct ad198x_spec {int eapd_nid; TYPE_2__ gen; int beep_amp; } ;


 int FUNC_0 (int,int,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1(struct hda_codec *VAR_3,
      const struct hda_fixup *VAR_4, int VAR_5)
{
 struct ad198x_spec *VAR_6 = VAR_3->spec;

 if (VAR_5 == VAR_0) {
  VAR_6->gen.keep_eapd_on = 1;
  VAR_6->gen.vmaster_mute.hook = VAR_2;
  VAR_6->eapd_nid = 0x12;

  VAR_6->beep_amp = FUNC_0(0x20, 3, 3, VAR_1);
  VAR_6->gen.beep_nid = 0;
 }
}
