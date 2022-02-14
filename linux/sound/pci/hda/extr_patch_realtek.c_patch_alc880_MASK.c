
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int unsol_event; } ;
struct hda_codec {TYPE_1__ patch_ops; struct alc_spec* spec; } ;
struct TYPE_4__ {int need_dac_fix; int beep_nid; int no_analog; } ;
struct alc_spec {TYPE_2__ gen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct hda_codec*) ;
 int VAR_6 ;
 int FUNC_1 (struct hda_codec*,int) ;
 int FUNC_2 (struct hda_codec*) ;
 int FUNC_3 (struct hda_codec*) ;
 int FUNC_4 (struct alc_spec*,int,int,int ) ;
 int FUNC_5 (struct hda_codec*,int ) ;
 int FUNC_6 (struct hda_codec*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct hda_codec *VAR_7)
{
 struct alc_spec *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_7, 0x0b);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_8 = VAR_7->spec;
 VAR_8->gen.need_dac_fix = 1;
 VAR_8->gen.beep_nid = 0x01;

 VAR_7->patch_ops.unsol_event = VAR_6;

 FUNC_3(VAR_7);

 FUNC_6(VAR_7, VAR_3, VAR_4,
         VAR_5);
 FUNC_5(VAR_7, VAR_0);


 VAR_9 = FUNC_0(VAR_7);
 if (VAR_9 < 0)
  goto error;

 if (!VAR_8->gen.no_analog) {
  VAR_9 = FUNC_4(VAR_8, 0x0b, 0x05, VAR_2);
  if (VAR_9 < 0)
   goto error;
 }

 FUNC_5(VAR_7, VAR_1);

 return 0;

 error:
 FUNC_2(VAR_7);
 return VAR_9;
}
