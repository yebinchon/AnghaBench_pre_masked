
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct ca0132_spec* spec; } ;
struct ca0132_spec {int chipio_mutex; } ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,int,int ) ;
 int FUNC_1 (struct hda_codec*,int,int) ;
 int FUNC_2 (struct hda_codec*,int,int) ;
 int FUNC_3 (struct hda_codec*,int,int,int) ;
 int FUNC_4 (struct hda_codec*,int,int) ;
 int FUNC_5 (struct hda_codec*,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct hda_codec *VAR_1)
{
 struct ca0132_spec *VAR_2 = VAR_1->spec;

 FUNC_6(&VAR_2->chipio_mutex);

 FUNC_5(VAR_1, "Connect Streams entered, mutex locked and loaded.\n");

 FUNC_1(VAR_1, 0x0C, 6);
 FUNC_2(VAR_1, 0x0C, 1);


 FUNC_4(VAR_1, 0x18a020, 0x00000043);


 FUNC_3(VAR_1, 0x14, 0x48, 0x91);
 FUNC_0(VAR_1, 0x48, VAR_0);
 FUNC_0(VAR_1, 0x91, VAR_0);
 FUNC_1(VAR_1, 0x14, 2);
 FUNC_2(VAR_1, 0x14, 1);

 FUNC_5(VAR_1, "Connect Streams exited, mutex released.\n");

 FUNC_7(&VAR_2->chipio_mutex);
}
