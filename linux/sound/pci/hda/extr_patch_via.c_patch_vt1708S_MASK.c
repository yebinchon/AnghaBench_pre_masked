
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int mixer_nid; } ;
struct via_spec {TYPE_2__ gen; } ;
struct TYPE_3__ {int vendor_id; } ;
struct hda_codec {TYPE_1__ core; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct hda_codec*) ;
 int FUNC_1 (struct hda_codec*,int,int ,int,int) ;
 int FUNC_2 (struct hda_codec*,int ) ;
 int FUNC_3 (struct hda_codec*,char*) ;
 int FUNC_4 (struct hda_codec*) ;
 struct via_spec* FUNC_5 (struct hda_codec*) ;
 int FUNC_6 (struct hda_codec*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_7(struct hda_codec *VAR_3)
{
 struct via_spec *VAR_4;
 int VAR_5;


 VAR_4 = FUNC_5(VAR_3);
 if (VAR_4 == ((void*)0))
  return -VAR_0;

 VAR_4->gen.mixer_nid = 0x16;
 FUNC_1(VAR_3, 0x1a, 0, 3, 40);
 FUNC_1(VAR_3, 0x1e, 0, 3, 40);


 if (FUNC_0(VAR_3) == VAR_1)
  FUNC_3(VAR_3, "VT1708BCE");

 if (VAR_3->core.vendor_id == 0x11064397)
  FUNC_3(VAR_3, "VT1705");

 VAR_5 = FUNC_2(VAR_3, VAR_2);
 if (VAR_5 < 0)
  goto error;


 VAR_5 = FUNC_6(VAR_3);
 if (VAR_5 < 0)
  goto error;

 return 0;

 error:
 FUNC_4(VAR_3);
 return VAR_5;
}
