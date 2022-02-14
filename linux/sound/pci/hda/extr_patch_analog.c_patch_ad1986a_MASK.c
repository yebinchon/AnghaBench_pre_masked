
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hda_codec {int inv_eapd; struct ad198x_spec* spec; } ;
struct TYPE_3__ {int no_share_stream; } ;
struct TYPE_4__ {int mixer_nid; int beep_nid; int* preferred_dacs; int auto_mute_via_amp; TYPE_1__ multiout; } ;
struct ad198x_spec {TYPE_2__ gen; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct hda_codec*,int) ;
 int FUNC_1 (struct hda_codec*) ;
 int FUNC_2 (struct ad198x_spec*,int,int ,int ) ;
 int FUNC_3 (struct hda_codec*,int ) ;
 int FUNC_4 (struct hda_codec*) ;
 int FUNC_5 (struct hda_codec*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct hda_codec *VAR_6)
{
 int VAR_7;
 struct ad198x_spec *VAR_8;
 static hda_nid_t VAR_9[] = {
  0x1a, 0x03,
  0x1b, 0x03,
  0x1c, 0x04,
  0x1d, 0x05,
  0x1e, 0x03,
  0
 };

 VAR_7 = FUNC_1(VAR_6);
 if (VAR_7 < 0)
  return VAR_7;
 VAR_8 = VAR_6->spec;


 VAR_6->inv_eapd = 1;

 VAR_8->gen.mixer_nid = 0x07;
 VAR_8->gen.beep_nid = 0x19;
 FUNC_2(VAR_8, 0x18, 0, VAR_2);







 VAR_8->gen.multiout.no_share_stream = 1;

 VAR_8->gen.preferred_dacs = VAR_9;


 VAR_8->gen.auto_mute_via_amp = 1;

 FUNC_5(VAR_6, VAR_3, VAR_4,
      VAR_5);
 FUNC_3(VAR_6, VAR_0);

 VAR_7 = FUNC_0(VAR_6, 0);
 if (VAR_7 < 0) {
  FUNC_4(VAR_6);
  return VAR_7;
 }

 FUNC_3(VAR_6, VAR_1);

 return 0;
}
