
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct ca0132_spec* spec; } ;
struct ca0132_spec {int dummy; } ;





 int FUNC_0 (struct ca0132_spec*) ;
 int FUNC_1 (struct hda_codec*,int,int ,int,int) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_0)
{
 struct ca0132_spec *VAR_1 = VAR_0->spec;

 switch (FUNC_0(VAR_1)) {
 case 128:
 case 130:
  FUNC_1(VAR_0, 0x01, 0, 0x793, 0x00);
  FUNC_1(VAR_0, 0x01, 0, 0x794, 0x53);
  FUNC_1(VAR_0, 0x01, 0, 0x790, 0x23);
  break;
 case 129:
  FUNC_1(VAR_0, 0x01, 0, 0x793, 0x00);
  FUNC_1(VAR_0, 0x01, 0, 0x794, 0x5B);
  break;
 default:
  break;
 }

}
