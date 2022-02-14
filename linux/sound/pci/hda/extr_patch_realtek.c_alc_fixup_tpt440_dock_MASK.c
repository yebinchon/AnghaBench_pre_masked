
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_pintbl {int member_0; int member_1; } ;
struct hda_fixup {int dummy; } ;
struct hda_codec {scalar_t__ power_save_node; struct alc_spec* spec; } ;
struct alc_spec {int parse_flags; int reboot_notify; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hda_codec*,struct hda_pintbl const*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1(struct hda_codec *VAR_3,
      const struct hda_fixup *VAR_4, int VAR_5)
{
 static const struct hda_pintbl VAR_6[] = {
  { 0x16, 0x21211010 },
  { 0x19, 0x21a11010 },
  { }
 };
 struct alc_spec *VAR_7 = VAR_3->spec;

 if (VAR_5 == VAR_0) {
  VAR_7->reboot_notify = VAR_2;
  VAR_7->parse_flags = VAR_1;
  VAR_3->power_save_node = 0;
  FUNC_0(VAR_3, VAR_6);
 }
}
