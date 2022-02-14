
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct ca0132_spec* spec; } ;
struct ca0132_spec {int dummy; } ;






 int FUNC_0 (struct ca0132_spec*) ;
 int FUNC_1 (struct hda_codec*,int,int,unsigned int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct hda_codec *VAR_0)
{
 struct ca0132_spec *VAR_1 = VAR_0->spec;
 unsigned int VAR_2, VAR_3;





 for (VAR_3 = 0; VAR_3 < 2; VAR_3++) {
  switch (FUNC_0(VAR_1)) {
  case 128:
  case 131:
   VAR_2 = 0x00000003;
   FUNC_1(VAR_0, 0x80, 0x0C, VAR_2);
   VAR_2 = 0x00000000;
   FUNC_1(VAR_0, 0x80, 0x0A, VAR_2);
   VAR_2 = 0x00000001;
   FUNC_1(VAR_0, 0x80, 0x0B, VAR_2);
   VAR_2 = 0x00000004;
   FUNC_1(VAR_0, 0x80, 0x0C, VAR_2);
   VAR_2 = 0x00000005;
   FUNC_1(VAR_0, 0x80, 0x0C, VAR_2);
   VAR_2 = 0x00000000;
   FUNC_1(VAR_0, 0x80, 0x0C, VAR_2);
   break;
  case 130:
  case 129:
   VAR_2 = 0x00000000;
   FUNC_1(VAR_0, 0x80, 0x0A, VAR_2);
   VAR_2 = 0x00000001;
   FUNC_1(VAR_0, 0x80, 0x0B, VAR_2);
   VAR_2 = 0x00000004;
   FUNC_1(VAR_0, 0x80, 0x0C, VAR_2);
   VAR_2 = 0x00000005;
   FUNC_1(VAR_0, 0x80, 0x0C, VAR_2);
   VAR_2 = 0x00000000;
   FUNC_1(VAR_0, 0x80, 0x0C, VAR_2);
   break;
  default:
   break;
  }
  FUNC_2(100);
 }
}
