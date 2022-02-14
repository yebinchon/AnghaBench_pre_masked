
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_fixup {int dummy; } ;
struct hda_codec {int power_filter; struct alc_spec* spec; } ;
struct alc_spec {int mute_led_polarity; } ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,int,int,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct hda_codec *VAR_2,
       const struct hda_fixup *VAR_3, int VAR_4)
{
 struct alc_spec *VAR_5 = VAR_2->spec;

 FUNC_0(VAR_2, VAR_4, 0x01, 0);
 if (VAR_4 == VAR_0) {
  VAR_5->mute_led_polarity = 1;
  VAR_2->power_filter = VAR_1;
 }
}
