
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct ca0132_spec* spec; } ;
struct ca0132_spec {int desktop_init_verbs; int chip_init_verbs; } ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hda_codec*,int,int,int) ;
 int FUNC_1 (struct hda_codec*) ;
 int FUNC_2 (struct hda_codec*) ;
 int FUNC_3 (struct hda_codec*) ;
 int FUNC_4 (struct ca0132_spec*) ;
 int FUNC_5 (struct hda_codec*,int,int) ;
 int FUNC_6 (struct hda_codec*,char*) ;
 int FUNC_7 (struct hda_codec*) ;
 int FUNC_8 (struct hda_codec*,int ) ;
 int FUNC_9 (struct hda_codec*) ;
 int FUNC_10 (struct hda_codec*) ;
 int FUNC_11 (struct hda_codec*,int ,int ,int,int) ;
 int FUNC_12 (struct hda_codec*,int ) ;

__attribute__((used)) static void FUNC_13(struct hda_codec *VAR_4)
{
 struct ca0132_spec *VAR_5 = VAR_4->spec;

 FUNC_1(VAR_4);

 switch (FUNC_4(VAR_5)) {
 case 129:
  FUNC_6(VAR_4, "SBZ alt_init");
  FUNC_2(VAR_4);
  FUNC_10(VAR_4);
  FUNC_12(VAR_4, VAR_5->chip_init_verbs);
  FUNC_12(VAR_4, VAR_5->desktop_init_verbs);
  break;
 case 130:
  FUNC_6(VAR_4, "R3DI alt_init");
  FUNC_2(VAR_4);
  FUNC_3(VAR_4);
  FUNC_8(VAR_4, VAR_0);
  FUNC_9(VAR_4);
  FUNC_12(VAR_4, VAR_5->chip_init_verbs);
  FUNC_11(VAR_4, VAR_3, 0, 0x6FF, 0xC4);
  break;
 case 131:
  FUNC_7(VAR_4);
  FUNC_12(VAR_4, VAR_5->chip_init_verbs);
  FUNC_12(VAR_4, VAR_5->desktop_init_verbs);
  break;
 case 132:
  FUNC_2(VAR_4);
  FUNC_11(VAR_4, VAR_3, 0,
    VAR_1, 0x49);
  FUNC_11(VAR_4, VAR_3, 0,
    VAR_2, 0x88);
  FUNC_5(VAR_4, 0x18b030, 0x00000020);
  FUNC_12(VAR_4, VAR_5->chip_init_verbs);
  FUNC_12(VAR_4, VAR_5->desktop_init_verbs);
  FUNC_0(VAR_4, 0x30, 0x32, 0x3f);
  break;
 case 128:
  FUNC_12(VAR_4, VAR_5->chip_init_verbs);
  FUNC_12(VAR_4, VAR_5->desktop_init_verbs);
  break;
 default:
  break;
 }
}
