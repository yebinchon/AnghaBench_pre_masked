
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hda_fixup {int dummy; } ;
struct hda_codec {int power_filter; struct alc_spec* spec; } ;
struct dmi_device {int name; } ;
struct TYPE_3__ {int hook; } ;
struct TYPE_4__ {int vmaster_mute_enum; TYPE_1__ vmaster_mute; } ;
struct alc_spec {int mute_led_polarity; int mute_led_nid; TYPE_2__ gen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hda_codec*,char*,int,int) ;
 struct dmi_device* FUNC_1 (int ,int *,struct dmi_device const*) ;
 int VAR_3 ;
 int FUNC_2 (int ,char*,int*,int*) ;

__attribute__((used)) static void FUNC_3(struct hda_codec *VAR_4,
         const struct hda_fixup *VAR_5, int VAR_6)
{
 struct alc_spec *VAR_7 = VAR_4->spec;
 const struct dmi_device *VAR_8 = ((void*)0);

 if (VAR_6 != VAR_1)
  return;

 while ((VAR_8 = FUNC_1(VAR_0, ((void*)0), VAR_8))) {
  int VAR_9, VAR_10;
  if (FUNC_2(VAR_8->name, "HP_Mute_LED_%d_%x", &VAR_9, &VAR_10) != 2)
   continue;
  if (VAR_10 < 0x0a || VAR_10 >= 0x10)
   break;
  VAR_7->mute_led_polarity = VAR_9;
  VAR_7->mute_led_nid = VAR_10 - 0x0a + 0x18;
  VAR_7->gen.vmaster_mute.hook = VAR_2;
  VAR_7->gen.vmaster_mute_enum = 1;
  VAR_4->power_filter = VAR_3;
  FUNC_0(VAR_4,
     "Detected mute LED for %x:%d\n", VAR_7->mute_led_nid,
      VAR_7->mute_led_polarity);
  break;
 }
}
