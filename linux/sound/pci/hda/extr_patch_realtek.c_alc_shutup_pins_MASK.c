
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vendor_id; } ;
struct hda_codec {TYPE_1__ core; struct alc_spec* spec; } ;
struct alc_spec {int no_shutup_pins; } ;


 int FUNC_0 (struct hda_codec*) ;
 int FUNC_1 (struct hda_codec*) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_0)
{
 struct alc_spec *VAR_1 = VAR_0->spec;

 switch (VAR_0->core.vendor_id) {
 case 0x10ec0286:
 case 0x10ec0288:
 case 0x10ec0298:
  FUNC_0(VAR_0);
  break;
 default:
  if (!VAR_1->no_shutup_pins)
   FUNC_1(VAR_0);
  break;
 }
}
