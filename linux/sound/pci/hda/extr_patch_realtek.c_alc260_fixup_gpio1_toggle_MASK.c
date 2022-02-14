
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hda_fixup {int dummy; } ;
struct hda_codec {struct alc_spec* spec; } ;
struct TYPE_3__ {int* hp_pins; } ;
struct TYPE_4__ {int detect_hp; int automute_speaker; TYPE_1__ autocfg; int automute_hook; } ;
struct alc_spec {TYPE_2__ gen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hda_codec*,int) ;
 int VAR_2 ;
 int FUNC_1 (struct hda_codec*,int,int ) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_3,
          const struct hda_fixup *VAR_4, int VAR_5)
{
 struct alc_spec *VAR_6 = VAR_3->spec;
 if (VAR_5 == VAR_0) {



  VAR_6->gen.automute_hook = VAR_1;
  VAR_6->gen.detect_hp = 1;
  VAR_6->gen.automute_speaker = 1;
  VAR_6->gen.autocfg.hp_pins[0] = 0x0f;
  FUNC_1(VAR_3, 0x0f,
          VAR_2);
  FUNC_0(VAR_3, 0x01);
 }
}
