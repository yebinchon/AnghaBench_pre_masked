
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_fixup {int dummy; } ;
struct hda_codec {struct conexant_spec* spec; } ;
struct conexant_spec {int parse_flags; } ;



 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct hda_codec *VAR_1,
        const struct hda_fixup *VAR_2, int VAR_3)
{
 struct conexant_spec *VAR_4 = VAR_1->spec;

 switch (VAR_3) {
 case 128:
  VAR_4->parse_flags |= VAR_0;
  break;
 }
}
