
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hda_fixup {int dummy; } ;
struct hda_codec {struct ad198x_spec* spec; } ;
struct TYPE_5__ {int * speaker_pins; int * line_out_pins; int line_out_type; } ;
struct TYPE_4__ {int hook; } ;
struct TYPE_6__ {int own_eapd_ctl; TYPE_2__ autocfg; TYPE_1__ vmaster_mute; } ;
struct ad198x_spec {TYPE_3__ gen; int eapd_nid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int FUNC_0 (struct hda_codec*,int,int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct hda_codec *VAR_5,
     const struct hda_fixup *VAR_6, int VAR_7)
{
 struct ad198x_spec *VAR_8 = VAR_5->spec;

 switch (VAR_7) {
 case 129:
  VAR_8->gen.vmaster_mute.hook = VAR_4;
  VAR_8->gen.own_eapd_ctl = 1;
  FUNC_0(VAR_5, 0x01, 0,
       VAR_2, 0x02);
  FUNC_0(VAR_5, 0x01, 0,
       VAR_1, 0x02);
  FUNC_0(VAR_5, 0x01, 0,
       VAR_0, 0x02);
  break;
 case 128:
  if (VAR_8->gen.autocfg.line_out_type == VAR_3)
   VAR_8->eapd_nid = VAR_8->gen.autocfg.line_out_pins[0];
  else
   VAR_8->eapd_nid = VAR_8->gen.autocfg.speaker_pins[0];
  break;
 }
}
