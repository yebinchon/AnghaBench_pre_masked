
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct ca0132_spec* spec; } ;
struct ca0132_spec {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ca0132_spec*) ;
 int FUNC_2 (struct hda_codec*,int ,int) ;
 int FUNC_3 (struct hda_codec*,char*) ;

__attribute__((used)) static void FUNC_4(struct hda_codec *VAR_0)
{
 struct ca0132_spec *VAR_1 = VAR_0->spec;
 FUNC_3(VAR_0, "---- dspload_post_setup ------\n");
 if (!FUNC_1(VAR_1)) {

  FUNC_2(VAR_0, FUNC_0(0x18), 0x08080080);
  FUNC_2(VAR_0, FUNC_0(0x19), 0x3f800000);


  FUNC_2(VAR_0, FUNC_0(0x29), 0x00000002);
 }
}
