
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_pintbl {int member_0; int member_1; } ;
struct hda_fixup {int dummy; } ;
struct hda_codec {struct alc_spec* spec; } ;
struct TYPE_2__ {int* preferred_dacs; } ;
struct alc_spec {int parse_flags; TYPE_1__ gen; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hda_codec*,struct hda_pintbl const*) ;
 int FUNC_1 (struct hda_codec*,int,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_4,
      const struct hda_fixup *VAR_5, int VAR_6)
{
 static const struct hda_pintbl VAR_7[] = {
  { 0x17, 0x21211010 },
  { 0x19, 0x21a11010 },
  { }
 };




 static hda_nid_t VAR_8[] = {
  0x14, 0x03, 0x17, 0x02, 0x21, 0x02,
  0
 };
 struct alc_spec *VAR_9 = VAR_4->spec;

 if (VAR_6 == VAR_2) {
  VAR_9->gen.preferred_dacs = VAR_8;
  VAR_9->parse_flags = VAR_3;
  FUNC_0(VAR_4, VAR_7);
 } else if (VAR_6 == VAR_1) {

  FUNC_1(VAR_4, 0x17, 0,
       VAR_0, 0);

  FUNC_1(VAR_4, 0x19, 0,
       VAR_0, 0);
 }
}
