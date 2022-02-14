
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_fixup {int dummy; } ;
struct hda_codec {struct alc_spec* spec; } ;
struct alc_spec {int cap_mute_led_nid; } ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,struct hda_fixup const*,int,int) ;
 int VAR_1 ;
 int FUNC_1 (struct hda_codec*,int ) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_2,
    const struct hda_fixup *VAR_3, int VAR_4)
{
 struct alc_spec *VAR_5 = VAR_2->spec;

 FUNC_0(VAR_2, VAR_3, VAR_4, 0x1a);
 if (VAR_4 == VAR_0) {
  VAR_5->cap_mute_led_nid = 0x18;
  FUNC_1(VAR_2, VAR_1);
 }
}
