
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_pintbl {int member_0; int member_1; } ;
struct hda_fixup {int dummy; } ;
struct hda_codec {int inv_jack_detect; } ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,struct hda_pintbl const*) ;

__attribute__((used)) static void FUNC_1(struct hda_codec *VAR_1,
     const struct hda_fixup *VAR_2, int VAR_3)
{
 static const struct hda_pintbl VAR_4[] = {
  { 0x18, 0x00ab9150 },
  { 0x21, 0x004be140 },
  { }
 };

 if (VAR_3 == VAR_0) {

  VAR_1->inv_jack_detect = 1;

  FUNC_0(VAR_1, VAR_4);
 }
}
