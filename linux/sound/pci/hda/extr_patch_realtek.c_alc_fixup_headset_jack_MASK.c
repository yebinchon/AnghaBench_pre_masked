
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_fixup {int dummy; } ;
struct TYPE_2__ {int vendor_id; } ;
struct hda_codec {TYPE_1__ core; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hda_codec*,int,int,int) ;
 int FUNC_1 (struct hda_codec*,int,int) ;
 int FUNC_2 (struct hda_codec*,int,char*,int,int ,int ) ;
 int FUNC_3 (struct hda_codec*,int,int ) ;

__attribute__((used)) static void FUNC_4(struct hda_codec *VAR_3,
        const struct hda_fixup *VAR_4, int VAR_5)
{

 switch (VAR_5) {
 case 128:
  FUNC_3(VAR_3, 0x55,
          VAR_1);
  FUNC_2(VAR_3, 0x55, "Headset Jack", 0,
          VAR_0, VAR_2);
  break;
 case 129:
  switch (VAR_3->core.vendor_id) {
  case 0x10ec0225:
  case 0x10ec0295:
  case 0x10ec0299:
   FUNC_1(VAR_3, 0x48, 0xd011);
   FUNC_0(VAR_3, 0x49, 0x007f, 0x0045);
   FUNC_0(VAR_3, 0x44, 0x007f << 8, 0x0045 << 8);
   break;
  case 0x10ec0236:
  case 0x10ec0256:
   FUNC_1(VAR_3, 0x48, 0xd011);
   FUNC_0(VAR_3, 0x49, 0x007f, 0x0045);
   break;
  }
  break;
 }
}
