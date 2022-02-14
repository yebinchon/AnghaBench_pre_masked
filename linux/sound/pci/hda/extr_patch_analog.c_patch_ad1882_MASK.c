
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_codec {struct ad198x_spec* spec; } ;
struct TYPE_2__ {int mixer_nid; int mixer_merge_nid; int beep_nid; } ;
struct ad198x_spec {TYPE_1__ gen; } ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*) ;
 int FUNC_1 (struct hda_codec*,int) ;
 int FUNC_2 (struct hda_codec*) ;
 int FUNC_3 (struct ad198x_spec*,int,int ,int ) ;
 int FUNC_4 (struct hda_codec*) ;

__attribute__((used)) static int FUNC_5(struct hda_codec *VAR_1)
{
 struct ad198x_spec *VAR_2;
 int VAR_3;

 VAR_3 = FUNC_2(VAR_1);
 if (VAR_3 < 0)
  return VAR_3;
 VAR_2 = VAR_1->spec;

 VAR_2->gen.mixer_nid = 0x20;
 VAR_2->gen.mixer_merge_nid = 0x21;
 VAR_2->gen.beep_nid = 0x10;
 FUNC_3(VAR_2, 0x10, 0, VAR_0);
 VAR_3 = FUNC_1(VAR_1, 1);
 if (VAR_3 < 0)
  goto error;
 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3 < 0)
  goto error;
 return 0;

 error:
 FUNC_4(VAR_1);
 return VAR_3;
}
