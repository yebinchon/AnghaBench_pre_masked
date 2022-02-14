
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mixer_nid; } ;
struct via_spec {TYPE_1__ gen; } ;
struct hda_codec {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*) ;
 struct via_spec* FUNC_1 (struct hda_codec*) ;
 int FUNC_2 (struct hda_codec*) ;

__attribute__((used)) static int FUNC_3(struct hda_codec *VAR_1)
{
 struct via_spec *VAR_2;
 int VAR_3;


 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2 == ((void*)0))
  return -VAR_0;

 VAR_2->gen.mixer_nid = 0x18;

 VAR_3 = FUNC_2(VAR_1);
 if (VAR_3 < 0)
  goto error;

 return 0;

 error:
 FUNC_0(VAR_1);
 return VAR_3;
}
