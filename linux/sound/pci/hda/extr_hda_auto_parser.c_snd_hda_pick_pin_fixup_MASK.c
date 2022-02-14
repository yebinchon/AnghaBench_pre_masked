
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_hda_pin_quirk {int subvendor; scalar_t__ codec; int name; int value; int pins; } ;
struct hda_fixup {int dummy; } ;
struct TYPE_2__ {int subsystem_id; scalar_t__ vendor_id; int chip_name; } ;
struct hda_codec {struct hda_fixup const* fixup_list; int fixup_name; TYPE_1__ core; int fixup_id; } ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,char*,int ,int ) ;
 scalar_t__ FUNC_1 (struct hda_codec*,int ,int) ;

void FUNC_2(struct hda_codec *VAR_1,
       const struct snd_hda_pin_quirk *VAR_2,
       const struct hda_fixup *VAR_3,
       bool VAR_4)
{
 const struct snd_hda_pin_quirk *VAR_5;

 if (VAR_1->fixup_id != VAR_0)
  return;

 for (VAR_5 = VAR_2; VAR_5->subvendor; VAR_5++) {
  if ((VAR_1->core.subsystem_id & 0xffff0000) != (VAR_5->subvendor << 16))
   continue;
  if (VAR_1->core.vendor_id != VAR_5->codec)
   continue;
  if (FUNC_1(VAR_1, VAR_5->pins, VAR_4)) {
   VAR_1->fixup_id = VAR_5->value;





   VAR_1->fixup_list = VAR_3;
   return;
  }
 }
}
