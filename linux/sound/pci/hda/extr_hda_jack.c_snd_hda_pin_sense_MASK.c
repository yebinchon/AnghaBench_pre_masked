
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hda_jack_tbl {int pin_sense; } ;
struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 int FUNC_0 (struct hda_codec*,struct hda_jack_tbl*) ;
 int FUNC_1 (struct hda_codec*,int ) ;
 struct hda_jack_tbl* FUNC_2 (struct hda_codec*,int ) ;

u32 FUNC_3(struct hda_codec *VAR_0, hda_nid_t VAR_1)
{
 struct hda_jack_tbl *VAR_2 = FUNC_2(VAR_0, VAR_1);
 if (VAR_2) {
  FUNC_0(VAR_0, VAR_2);
  return VAR_2->pin_sense;
 }
 return FUNC_1(VAR_0, VAR_1);
}
