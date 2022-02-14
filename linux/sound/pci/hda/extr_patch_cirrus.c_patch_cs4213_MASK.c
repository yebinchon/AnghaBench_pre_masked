
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int patch_ops; } ;
struct cs_spec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hda_codec*) ;
 int VAR_2 ;
 struct cs_spec* FUNC_1 (struct hda_codec*,int ) ;
 int FUNC_2 (struct hda_codec*) ;

__attribute__((used)) static int FUNC_3(struct hda_codec *VAR_3)
{
 struct cs_spec *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_1(VAR_3, VAR_0);
 if (!VAR_4)
  return -VAR_1;

 VAR_3->patch_ops = VAR_2;

 VAR_5 = FUNC_0(VAR_3);
 if (VAR_5 < 0)
  goto error;

 return 0;

 error:
 FUNC_2(VAR_3);
 return VAR_5;
}
