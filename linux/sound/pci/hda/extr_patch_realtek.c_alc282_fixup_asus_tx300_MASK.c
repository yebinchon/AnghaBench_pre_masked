
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_pintbl {int member_0; int member_1; } ;
struct hda_fixup {int dummy; } ;
struct hda_codec {struct alc_spec* spec; } ;
struct TYPE_2__ {int auto_mute_via_amp; int automute_hook; } ;
struct alc_spec {void* init_amp; TYPE_1__ gen; } ;


 void* VAR_0 ;



 int FUNC_0 (struct hda_codec*,int) ;
 int VAR_1 ;
 int FUNC_1 (struct hda_codec*,char*,char*) ;
 int FUNC_2 (struct hda_codec*,struct hda_pintbl const*) ;
 int VAR_2 ;
 int FUNC_3 (struct hda_codec*,int,int ) ;

__attribute__((used)) static void FUNC_4(struct hda_codec *VAR_3,
        const struct hda_fixup *VAR_4, int VAR_5)
{
 struct alc_spec *VAR_6 = VAR_3->spec;
 static const struct hda_pintbl VAR_7[] = {
  { 0x1b, 0x21114000 },
  {}
 };

 switch (VAR_5) {
 case 129:
  VAR_6->init_amp = VAR_0;

  FUNC_0(VAR_3, 0x04);
  FUNC_2(VAR_3, VAR_7);
  VAR_6->gen.auto_mute_via_amp = 1;
  VAR_6->gen.automute_hook = VAR_1;
  FUNC_3(VAR_3, 0x1b,
          VAR_2);
  break;
 case 128:
  VAR_6->init_amp = VAR_0;
  break;
 case 130:



  FUNC_1(VAR_3, "Speaker Playback Switch",
      "Dock Speaker Playback Switch");
  FUNC_1(VAR_3, "Bass Speaker Playback Switch",
      "Speaker Playback Switch");
  break;
 }
}
