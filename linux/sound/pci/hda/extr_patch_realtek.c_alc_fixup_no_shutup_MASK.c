
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_fixup {int dummy; } ;
struct hda_codec {struct alc_spec* spec; } ;
struct alc_spec {int no_shutup_pins; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct hda_codec *VAR_1,
    const struct hda_fixup *VAR_2, int VAR_3)
{
 if (VAR_3 == VAR_0) {
  struct alc_spec *VAR_4 = VAR_1->spec;
  VAR_4->no_shutup_pins = 1;
 }
}
