
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_fixup {int dummy; } ;
struct hda_codec {struct alc_spec* spec; } ;
struct TYPE_2__ {int hp_mic; } ;
struct alc_spec {TYPE_1__ gen; int parse_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hda_codec*,struct hda_fixup const*,int) ;
 int FUNC_1 (struct hda_codec*,int) ;
 int FUNC_2 (struct hda_codec*,int,int ,int ,int) ;
 int FUNC_3 (struct hda_codec*,int,int) ;

__attribute__((used)) static void FUNC_4(struct hda_codec *VAR_4,
    const struct hda_fixup *VAR_5, int VAR_6)
{
 struct alc_spec *VAR_7 = VAR_4->spec;

 if (VAR_6 == VAR_2) {
  VAR_7->parse_flags |= VAR_3;
  VAR_7->gen.hp_mic = 1;



  FUNC_2(VAR_4, 0x1b, 0, VAR_0, 0x7000);
  FUNC_3(VAR_4, 0x1b, FUNC_1(VAR_4, 0x1b) & ~VAR_1);
 } else
  FUNC_0(VAR_4, VAR_5, VAR_6);
}
