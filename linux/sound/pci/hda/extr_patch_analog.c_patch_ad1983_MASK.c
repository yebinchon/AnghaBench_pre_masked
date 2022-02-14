
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_codec {struct ad198x_spec* spec; } ;
struct TYPE_2__ {int mixer_nid; int beep_nid; } ;
struct ad198x_spec {TYPE_1__ gen; } ;
typedef int hda_nid_t ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int FUNC_1 (struct hda_codec*) ;
 int FUNC_2 (struct hda_codec*,int) ;
 int FUNC_3 (struct hda_codec*) ;
 int FUNC_4 (struct ad198x_spec*,int,int ,int ) ;
 int FUNC_5 (struct hda_codec*) ;
 int FUNC_6 (struct hda_codec*,int,int ,int*) ;

__attribute__((used)) static int FUNC_7(struct hda_codec *VAR_1)
{
 struct ad198x_spec *VAR_2;
 static hda_nid_t VAR_3[] = { 0x08 };
 static hda_nid_t VAR_4[] = { 0x09 };
 int VAR_5;

 VAR_5 = FUNC_3(VAR_1);
 if (VAR_5 < 0)
  return VAR_5;
 VAR_2 = VAR_1->spec;

 VAR_2->gen.mixer_nid = 0x0e;
 VAR_2->gen.beep_nid = 0x10;
 FUNC_4(VAR_2, 0x10, 0, VAR_0);


 FUNC_6(VAR_1, 0x0c, FUNC_0(VAR_3), VAR_3);
 FUNC_6(VAR_1, 0x0d, FUNC_0(VAR_4), VAR_4);

 VAR_5 = FUNC_2(VAR_1, 0);
 if (VAR_5 < 0)
  goto error;
 VAR_5 = FUNC_1(VAR_1);
 if (VAR_5 < 0)
  goto error;
 return 0;

 error:
 FUNC_5(VAR_1);
 return VAR_5;
}
