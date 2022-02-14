
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mixer_nid; } ;
struct via_spec {TYPE_1__ gen; } ;
struct hda_codec {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct hda_codec*) ;
 int FUNC_1 (struct hda_codec*) ;
 int FUNC_2 (struct hda_codec*) ;
 struct via_spec* FUNC_3 (struct hda_codec*) ;
 int FUNC_4 (struct hda_codec*) ;

__attribute__((used)) static int FUNC_5(struct hda_codec *VAR_2)
{
 struct via_spec *VAR_3;
 int VAR_4;

 if (FUNC_0(VAR_2) == VAR_1)
  return FUNC_1(VAR_2);


 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3 == ((void*)0))
  return -VAR_0;

 VAR_3->gen.mixer_nid = 0x16;


 VAR_4 = FUNC_4(VAR_2);
 if (VAR_4 < 0)
  goto error;

 return 0;

 error:
 FUNC_2(VAR_2);
 return VAR_4;
}
