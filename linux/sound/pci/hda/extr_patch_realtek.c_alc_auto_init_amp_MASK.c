
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vendor_id; } ;
struct hda_codec {TYPE_1__ core; } ;



 int FUNC_0 (struct hda_codec*) ;
 int FUNC_1 (struct hda_codec*,int) ;
 int FUNC_2 (struct hda_codec*,int,int ,int) ;
 int FUNC_3 (struct hda_codec*,int,int,int ,int) ;
 int FUNC_4 (struct hda_codec*) ;

__attribute__((used)) static void FUNC_5(struct hda_codec *VAR_0, int VAR_1)
{
 FUNC_1(VAR_0, 1);
 FUNC_4(VAR_0);
 switch (VAR_1) {
 case 128:
  switch (VAR_0->core.vendor_id) {
  case 0x10ec0260:
   FUNC_3(VAR_0, 0x1a, 7, 0, 0x2010);
   break;
  case 0x10ec0880:
  case 0x10ec0882:
  case 0x10ec0883:
  case 0x10ec0885:
   FUNC_2(VAR_0, 7, 0, 0x2030);
   break;
  case 0x10ec0888:
   FUNC_0(VAR_0);
   break;
  }
  break;
 }
}
