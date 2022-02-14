
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_fixup {int dummy; } ;
struct TYPE_2__ {int vendor_id; } ;
struct hda_codec {TYPE_1__ core; struct alc_spec* spec; } ;
struct alc_spec {int ultra_low_power; } ;




 int FUNC_0 (struct hda_codec*,int,int,int) ;

__attribute__((used)) static void FUNC_1(struct hda_codec *VAR_0,
        const struct hda_fixup *VAR_1, int VAR_2)
{
 struct alc_spec *VAR_3 = VAR_0->spec;

 switch (VAR_2) {
 case 128:
  VAR_3->ultra_low_power = 1;
  break;
 case 129:
  switch (VAR_0->core.vendor_id) {
  case 0x10ec0295:
   FUNC_0(VAR_0, 0x4a, 0x8000, 1 << 15);
   FUNC_0(VAR_0, 0x4a, 0x8000, 0 << 15);
   break;
  case 0x10ec0236:
   FUNC_0(VAR_0, 0x1b, 0x8000, 1 << 15);
   FUNC_0(VAR_0, 0x1b, 0x8000, 0 << 15);
   break;
  }
  break;
 }
}
