
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct ca0132_spec* spec; } ;
struct ca0132_spec {int chipio_mutex; } ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,int,int,int) ;
 int FUNC_1 (struct hda_codec*,int,int) ;
 int FUNC_2 (struct hda_codec*,int ,int) ;
 int FUNC_3 (struct hda_codec*,int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct hda_codec *VAR_1)
{
 struct ca0132_spec *VAR_2 = VAR_1->spec;

 FUNC_4(&VAR_2->chipio_mutex);

 FUNC_3(VAR_1, 0x189000, 0x0001f101);
 FUNC_3(VAR_1, 0x189004, 0x0001f101);
 FUNC_3(VAR_1, 0x189024, 0x00014004);
 FUNC_3(VAR_1, 0x189028, 0x0002000f);

 FUNC_0(VAR_1, 0x48, 0x0a, 0x05);
 FUNC_2(VAR_1, VAR_0, 7);
 FUNC_0(VAR_1, 0x48, 0x0b, 0x12);
 FUNC_0(VAR_1, 0x48, 0x04, 0x00);
 FUNC_0(VAR_1, 0x48, 0x06, 0x48);
 FUNC_0(VAR_1, 0x48, 0x0a, 0x05);
 FUNC_0(VAR_1, 0x48, 0x07, 0x83);
 FUNC_0(VAR_1, 0x48, 0x0f, 0x00);
 FUNC_0(VAR_1, 0x48, 0x10, 0x00);
 FUNC_1(VAR_1, 0, 1);
 FUNC_1(VAR_1, 1, 1);
 FUNC_0(VAR_1, 0x48, 0x07, 0x80);

 FUNC_3(VAR_1, 0x18b03c, 0x00000012);

 FUNC_0(VAR_1, 0x48, 0x0f, 0x00);
 FUNC_0(VAR_1, 0x48, 0x10, 0x00);

 FUNC_5(&VAR_2->chipio_mutex);
}
