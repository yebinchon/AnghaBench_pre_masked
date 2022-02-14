
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_fixup {int dummy; } ;
struct hda_codec {int addr; TYPE_1__* card; } ;
struct TYPE_2__ {int longname; } ;




 int FUNC_0 (struct hda_codec*,struct hda_fixup const*,int) ;
 int FUNC_1 (struct hda_codec*,char*,char*) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static void FUNC_3(struct hda_codec *VAR_0,
      const struct hda_fixup *VAR_1,
      int VAR_2)
{
 FUNC_0(VAR_0, VAR_1, VAR_2);
 switch (VAR_2) {
 case 128:

  FUNC_2(VAR_0->card->longname, "HDAudio-Gigabyte-ALC1220DualCodecs");
  break;
 case 129:

  FUNC_1(VAR_0, "Capture Volume",
      VAR_0->addr == 0 ?
      "Rear-Panel Capture Volume" :
      "Front-Panel Capture Volume");
  FUNC_1(VAR_0, "Capture Switch",
      VAR_0->addr == 0 ?
      "Rear-Panel Capture Switch" :
      "Front-Panel Capture Switch");
  break;
 }
}
