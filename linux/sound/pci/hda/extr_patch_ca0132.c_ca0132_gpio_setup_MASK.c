
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct ca0132_spec* spec; } ;
struct ca0132_spec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (struct ca0132_spec*) ;
 int FUNC_1 (struct hda_codec*,int,int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_3)
{
 struct ca0132_spec *VAR_4 = VAR_3->spec;

 switch (FUNC_0(VAR_4)) {
 case 128:
  FUNC_1(VAR_3, 0x01, 0,
    VAR_1, 0x07);
  FUNC_1(VAR_3, 0x01, 0,
    VAR_2, 0x07);
  FUNC_1(VAR_3, 0x01, 0,
    VAR_0, 0x04);
  FUNC_1(VAR_3, 0x01, 0,
    VAR_0, 0x06);
  break;
 case 129:
  FUNC_1(VAR_3, 0x01, 0,
    VAR_1, 0x1E);
  FUNC_1(VAR_3, 0x01, 0,
    VAR_2, 0x1F);
  FUNC_1(VAR_3, 0x01, 0,
    VAR_0, 0x0C);
  break;
 default:
  break;
 }
}
