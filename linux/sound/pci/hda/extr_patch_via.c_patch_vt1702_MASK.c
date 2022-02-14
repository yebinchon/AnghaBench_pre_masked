
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mixer_nid; } ;
struct via_spec {TYPE_1__ gen; } ;
struct hda_codec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct hda_codec*,int ) ;
 int FUNC_1 (struct hda_codec*,int,int ,int) ;
 int FUNC_2 (struct hda_codec*) ;
 struct via_spec* FUNC_3 (struct hda_codec*) ;
 int FUNC_4 (struct hda_codec*) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_5(struct hda_codec *VAR_7)
{
 struct via_spec *VAR_8;
 int VAR_9;


 VAR_8 = FUNC_3(VAR_7);
 if (VAR_8 == ((void*)0))
  return -VAR_4;

 VAR_8->gen.mixer_nid = 0x1a;


 FUNC_1(VAR_7, 0x1A, VAR_5,
      (0x17 << VAR_2) |
      (0x17 << VAR_1) |
      (0x5 << VAR_3) |
      (1 << VAR_0));

 VAR_9 = FUNC_0(VAR_7, VAR_6);
 if (VAR_9 < 0)
  goto error;


 VAR_9 = FUNC_4(VAR_7);
 if (VAR_9 < 0)
  goto error;

 return 0;

 error:
 FUNC_2(VAR_7);
 return VAR_9;
}
