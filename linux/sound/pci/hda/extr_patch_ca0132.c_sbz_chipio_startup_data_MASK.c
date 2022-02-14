
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct ca0132_spec* spec; } ;
struct ca0132_spec {int chipio_mutex; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct ca0132_spec*) ;
 int FUNC_1 (struct hda_codec*,int,int) ;
 int FUNC_2 (struct hda_codec*,int,int) ;
 int FUNC_3 (struct hda_codec*,int,int) ;
 int FUNC_4 (struct hda_codec*,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct hda_codec *VAR_2)
{
 struct ca0132_spec *VAR_3 = VAR_2->spec;

 FUNC_5(&VAR_3->chipio_mutex);
 FUNC_4(VAR_2, "Startup Data entered, mutex locked and loaded.\n");


 FUNC_3(VAR_2, 0x190060, 0x0001f8c0);
 FUNC_3(VAR_2, 0x190064, 0x0001f9c1);
 FUNC_3(VAR_2, 0x190068, 0x0001fac6);
 FUNC_3(VAR_2, 0x19006c, 0x0001fbc7);

 FUNC_3(VAR_2, 0x19042c, 0x00000001);

 FUNC_1(VAR_2, 0x0C, 6);
 FUNC_2(VAR_2, 0x0C, 1);

 if (FUNC_0(VAR_3) == VAR_0) {
  FUNC_3(VAR_2, 0x190030, 0x0001e0c0);
  FUNC_3(VAR_2, 0x190034, 0x0001e1c1);
  FUNC_3(VAR_2, 0x190038, 0x0001e4c2);
  FUNC_3(VAR_2, 0x19003c, 0x0001e5c3);
  FUNC_3(VAR_2, 0x190040, 0x0001e2c4);
  FUNC_3(VAR_2, 0x190044, 0x0001e3c5);
  FUNC_3(VAR_2, 0x190048, 0x0001e8c6);
  FUNC_3(VAR_2, 0x19004c, 0x0001e9c7);
  FUNC_3(VAR_2, 0x190050, 0x0001ecc8);
  FUNC_3(VAR_2, 0x190054, 0x0001edc9);
  FUNC_3(VAR_2, 0x190058, 0x0001eaca);
  FUNC_3(VAR_2, 0x19005c, 0x0001ebcb);
 } else if (FUNC_0(VAR_3) == VAR_1) {
  FUNC_3(VAR_2, 0x190038, 0x000140c2);
  FUNC_3(VAR_2, 0x19003c, 0x000141c3);
  FUNC_3(VAR_2, 0x190040, 0x000150c4);
  FUNC_3(VAR_2, 0x190044, 0x000151c5);
  FUNC_3(VAR_2, 0x190050, 0x000142c8);
  FUNC_3(VAR_2, 0x190054, 0x000143c9);
  FUNC_3(VAR_2, 0x190058, 0x000152ca);
  FUNC_3(VAR_2, 0x19005c, 0x000153cb);
 }
 FUNC_3(VAR_2, 0x19042c, 0x00000001);

 FUNC_4(VAR_2, "Startup Data exited, mutex released.\n");
 FUNC_6(&VAR_3->chipio_mutex);
}
