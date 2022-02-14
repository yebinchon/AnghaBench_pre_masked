
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct ca0132_spec* spec; } ;
struct ca0132_spec {int chipio_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hda_codec*,int,int,int) ;
 int FUNC_1 (struct hda_codec*,int,int ) ;
 int FUNC_2 (struct hda_codec*,int ,int) ;
 int FUNC_3 (struct hda_codec*,int,int) ;
 int FUNC_4 (struct hda_codec*,int,int) ;
 int FUNC_5 (struct hda_codec*,int,int,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct hda_codec*,int ,int ,int,int) ;

__attribute__((used)) static void FUNC_9(struct hda_codec *VAR_5)
{
 struct ca0132_spec *VAR_6 = VAR_5->spec;

 FUNC_6(&VAR_6->chipio_mutex);

 FUNC_8(VAR_5, VAR_4, 0, 0x725, 0x81);

 FUNC_1(VAR_5, 0x70, VAR_1);

 FUNC_3(VAR_5, 0x0C, 6);
 FUNC_4(VAR_5, 0x0C, 1);

 FUNC_5(VAR_5, 0x5, 0x43, 0x0);

 FUNC_5(VAR_5, 0x18, 0x9, 0xd0);
 FUNC_1(VAR_5, 0xd0, VAR_1);
 FUNC_3(VAR_5, 0x18, 6);
 FUNC_4(VAR_5, 0x18, 1);

 FUNC_2(VAR_5, VAR_0, 4);

 FUNC_8(VAR_5, VAR_4, 0,
       VAR_2, 0x43);
 FUNC_8(VAR_5, VAR_4, 0,
       VAR_3, 0xc7);

 FUNC_0(VAR_5, 0x48, 0x01, 0x80);

 FUNC_7(&VAR_6->chipio_mutex);
}
