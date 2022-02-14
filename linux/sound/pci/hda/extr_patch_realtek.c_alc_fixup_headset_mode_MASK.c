
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_fixup {int dummy; } ;
struct hda_codec {struct alc_spec* spec; } ;
struct alc_spec {int parse_flags; int current_headset_type; int current_headset_mode; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hda_codec*) ;
 int FUNC_1 (struct hda_codec*) ;
 int FUNC_2 (struct hda_codec*) ;
 int FUNC_3 (struct hda_codec*) ;

__attribute__((used)) static void FUNC_4(struct hda_codec *VAR_4,
    const struct hda_fixup *VAR_5, int VAR_6)
{
 struct alc_spec *VAR_7 = VAR_4->spec;

 switch (VAR_6) {
 case 129:
  VAR_7->parse_flags |= VAR_3 | VAR_2;
  break;
 case 128:
  FUNC_0(VAR_4);
  break;
 case 130:
  if (FUNC_2(VAR_4) || FUNC_3(VAR_4)) {
   VAR_7->current_headset_mode = VAR_0;
   VAR_7->current_headset_type = VAR_1;
  }
  FUNC_1(VAR_4);
  break;
 }
}
