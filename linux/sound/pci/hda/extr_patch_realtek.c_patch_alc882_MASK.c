
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int vendor_id; } ;
struct hda_codec {TYPE_1__ core; struct alc_spec* spec; } ;
struct TYPE_4__ {int beep_nid; int no_analog; } ;
struct alc_spec {TYPE_2__ gen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct hda_codec*) ;
 int FUNC_1 (struct hda_codec*,int) ;
 int FUNC_2 (struct hda_codec*) ;
 int FUNC_3 (struct hda_codec*,int,int,int) ;
 int FUNC_4 (struct hda_codec*) ;
 int FUNC_5 (struct hda_codec*) ;
 scalar_t__ FUNC_6 (struct hda_codec*) ;
 int FUNC_7 (struct alc_spec*,int,int,int ) ;
 int FUNC_8 (struct hda_codec*,int ) ;
 int FUNC_9 (struct hda_codec*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_10(struct hda_codec *VAR_6)
{
 struct alc_spec *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_6, 0x0b);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_7 = VAR_6->spec;

 switch (VAR_6->core.vendor_id) {
 case 0x10ec0882:
 case 0x10ec0885:
 case 0x10ec0900:
 case 0x10ec1220:
  break;
 default:

  FUNC_3(VAR_6, 0x20, 0x0a, 10);
  break;
 }

 FUNC_5(VAR_6);

 FUNC_9(VAR_6, VAR_3, VAR_4,
         VAR_5);
 FUNC_8(VAR_6, VAR_0);

 FUNC_2(VAR_6);

 if (FUNC_6(VAR_6))
  VAR_7->gen.beep_nid = 0x01;


 VAR_8 = FUNC_0(VAR_6);
 if (VAR_8 < 0)
  goto error;

 if (!VAR_7->gen.no_analog && VAR_7->gen.beep_nid) {
  VAR_8 = FUNC_7(VAR_7, 0x0b, 0x05, VAR_2);
  if (VAR_8 < 0)
   goto error;
 }

 FUNC_8(VAR_6, VAR_1);

 return 0;

 error:
 FUNC_4(VAR_6);
 return VAR_8;
}
