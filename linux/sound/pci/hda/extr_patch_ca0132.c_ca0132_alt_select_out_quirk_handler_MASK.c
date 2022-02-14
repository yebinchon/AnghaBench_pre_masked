
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct ca0132_spec* spec; } ;
struct ca0132_spec {int cur_out_type; int ae5_headphone_gain_val; int zxr_gain_set; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;






 int VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (struct hda_codec*,int) ;
 int FUNC_1 (struct hda_codec*) ;
 int FUNC_2 (struct hda_codec*,int,int) ;
 int FUNC_3 (struct ca0132_spec*) ;
 int FUNC_4 (struct hda_codec*,int,int) ;
 int FUNC_5 (struct hda_codec*,int,int) ;
 int FUNC_6 (struct hda_codec*,int,int,unsigned int) ;
 int FUNC_7 (struct hda_codec*,int ) ;
 int FUNC_8 (struct hda_codec*,int ) ;

__attribute__((used)) static void FUNC_9(struct hda_codec *VAR_4)
{
 struct ca0132_spec *VAR_5 = VAR_4->spec;
 unsigned int VAR_6;

 switch (VAR_5->cur_out_type) {
 case 129:
  switch (FUNC_3(VAR_5)) {
  case 131:
   FUNC_2(VAR_4, 7, 0);
   FUNC_2(VAR_4, 4, 1);
   FUNC_2(VAR_4, 1, 1);
   FUNC_4(VAR_4, 0x0d, 0x18);
   break;
  case 130:
   FUNC_2(VAR_4, 2, 1);
   FUNC_2(VAR_4, 3, 1);
   FUNC_2(VAR_4, 5, 0);
   FUNC_8(VAR_4, 0);
   FUNC_4(VAR_4, 0x0d, 0x24);
   break;
  case 132:
   FUNC_4(VAR_4, 0x0d, 0x24);
   FUNC_7(VAR_4, VAR_3);
   break;
  case 133:
   FUNC_4(VAR_4, 0x0d, 0x24);
   FUNC_2(VAR_4, 1, 1);
   break;
  case 134:
   FUNC_1(VAR_4);
   FUNC_0(VAR_4, 2);
   VAR_6 = VAR_1;
   FUNC_6(VAR_4, 0x96, 0x29, VAR_6);
   FUNC_6(VAR_4, 0x96, 0x2a, VAR_6);
   FUNC_4(VAR_4, 0x0d, 0xa4);
   FUNC_5(VAR_4, 0x18b03c, 0x00000012);
   break;
  default:
   break;
  }
  break;
 case 135:
  switch (FUNC_3(VAR_5)) {
  case 131:
   FUNC_2(VAR_4, 7, 1);
   FUNC_2(VAR_4, 4, 1);
   FUNC_2(VAR_4, 1, 0);
   FUNC_4(VAR_4, 0x0d, 0x12);
   break;
  case 130:
   FUNC_2(VAR_4, 2, 0);
   FUNC_2(VAR_4, 3, 0);
   FUNC_2(VAR_4, 5, 1);
   FUNC_8(VAR_4, VAR_5->zxr_gain_set);
   FUNC_4(VAR_4, 0x0d, 0x21);
   break;
  case 132:
   FUNC_4(VAR_4, 0x0d, 0x21);
   FUNC_7(VAR_4, VAR_2);
   break;
  case 133:
   FUNC_4(VAR_4, 0x0d, 0x21);
   FUNC_2(VAR_4, 0x1, 0);
   break;
  case 134:
   FUNC_1(VAR_4);
   FUNC_0(VAR_4,
     VAR_5->ae5_headphone_gain_val);
   VAR_6 = VAR_0;
   FUNC_6(VAR_4, 0x96, 0x29, VAR_6);
   FUNC_6(VAR_4, 0x96, 0x2a, VAR_6);
   FUNC_4(VAR_4, 0x0d, 0xa1);
   FUNC_5(VAR_4, 0x18b03c, 0x00000012);
   break;
  default:
   break;
  }
  break;
 case 128:
  switch (FUNC_3(VAR_5)) {
  case 131:
   FUNC_2(VAR_4, 7, 0);
   FUNC_2(VAR_4, 4, 1);
   FUNC_2(VAR_4, 1, 1);
   FUNC_4(VAR_4, 0x0d, 0x18);
   break;
  case 130:
   FUNC_2(VAR_4, 2, 1);
   FUNC_2(VAR_4, 3, 1);
   FUNC_2(VAR_4, 5, 0);
   FUNC_8(VAR_4, 0);
   FUNC_4(VAR_4, 0x0d, 0x24);
   break;
  case 132:
   FUNC_4(VAR_4, 0x0d, 0x24);
   FUNC_7(VAR_4, VAR_3);
   break;
  case 133:
   FUNC_2(VAR_4, 1, 1);
   FUNC_4(VAR_4, 0x0d, 0x24);
   break;
  case 134:
   FUNC_1(VAR_4);
   FUNC_0(VAR_4, 2);
   VAR_6 = VAR_1;
   FUNC_6(VAR_4, 0x96, 0x29, VAR_6);
   FUNC_6(VAR_4, 0x96, 0x2a, VAR_6);
   FUNC_4(VAR_4, 0x0d, 0xa4);
   FUNC_5(VAR_4, 0x18b03c, 0x00000012);
   break;
  default:
   break;
  }
  break;
 }
}
