
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_codec {int patch_ops; } ;
struct TYPE_2__ {unsigned long long out_vol_mask; int automute_hook; } ;
struct cs_spec {TYPE_1__ gen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hda_codec*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct cs_spec* FUNC_1 (struct hda_codec*,int ) ;
 int VAR_8 ;
 int FUNC_2 (struct hda_codec*) ;
 int FUNC_3 (struct hda_codec*) ;
 int VAR_9 ;
 int FUNC_4 (struct hda_codec*,int) ;
 int FUNC_5 (struct hda_codec*,int ) ;
 int FUNC_6 (struct hda_codec*,int,int) ;
 int FUNC_7 (struct hda_codec*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct hda_codec *VAR_10)
{
 struct cs_spec *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_1(VAR_10, VAR_1);
 if (!VAR_11)
  return -VAR_2;

 VAR_10->patch_ops = VAR_9;
 VAR_11->gen.automute_hook = VAR_8;

 VAR_11->gen.out_vol_mask = 1ULL << 0x10;

 FUNC_7(VAR_10, VAR_7, VAR_5,
      VAR_6);
 FUNC_5(VAR_10, VAR_3);

 FUNC_6(VAR_10, 0x18,
          FUNC_4(VAR_10, 0x18) | VAR_0);
 FUNC_0(VAR_10, 0x18);
 FUNC_0(VAR_10, 0x1b);
 FUNC_0(VAR_10, 0x1c);

 VAR_12 = FUNC_3(VAR_10);
 if (VAR_12 < 0)
  goto error;

 FUNC_5(VAR_10, VAR_4);

 return 0;

 error:
 FUNC_2(VAR_10);
 return VAR_12;
}
