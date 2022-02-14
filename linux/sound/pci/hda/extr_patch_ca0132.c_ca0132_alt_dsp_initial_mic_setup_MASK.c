
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct ca0132_spec* spec; } ;
struct ca0132_spec {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int FUNC_0 (struct ca0132_spec*) ;
 int FUNC_1 (struct hda_codec*,int ,int ) ;
 int FUNC_2 (struct hda_codec*,int,int) ;
 int FUNC_3 (struct hda_codec*,int,int) ;
 int FUNC_4 (struct hda_codec*,int,int,unsigned int) ;

__attribute__((used)) static void FUNC_5(struct hda_codec *VAR_4)
{
 struct ca0132_spec *VAR_5 = VAR_4->spec;
 unsigned int VAR_6;

 FUNC_2(VAR_4, 0x03, 0);
 FUNC_2(VAR_4, 0x04, 0);

 FUNC_1(VAR_4, VAR_1, VAR_3);
 FUNC_1(VAR_4, VAR_2, VAR_3);

 VAR_6 = VAR_0;
 FUNC_4(VAR_4, 0x80, 0x00, VAR_6);

 FUNC_2(VAR_4, 0x03, 1);
 FUNC_2(VAR_4, 0x04, 1);

 switch (FUNC_0(VAR_5)) {
 case 128:
  FUNC_3(VAR_4, 0x18b098, 0x0000000c);
  FUNC_3(VAR_4, 0x18b09C, 0x0000000c);
  break;
 case 129:
  FUNC_3(VAR_4, 0x18b098, 0x0000000c);
  FUNC_3(VAR_4, 0x18b09c, 0x0000004c);
  break;
 default:
  break;
 }
}
