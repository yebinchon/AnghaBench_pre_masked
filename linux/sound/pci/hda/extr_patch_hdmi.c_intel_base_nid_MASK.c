
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vendor_id; } ;
struct hda_codec {TYPE_1__ core; } ;



__attribute__((used)) static int FUNC_0(struct hda_codec *VAR_0)
{
 switch (VAR_0->core.vendor_id) {
 case 0x80860054:
 case 0x80862804:
 case 0x80862882:
  return 4;
 default:
  return 5;
 }
}
