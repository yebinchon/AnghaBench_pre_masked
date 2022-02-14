
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct alc_spec* spec; } ;
struct alc_spec {int no_shutup_pins; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct alc_spec*) ;
 int FUNC_1 (struct hda_codec*,int,int) ;
 int FUNC_2 (struct hda_codec*,int,int,int) ;
 int FUNC_3 (struct hda_codec*,int,int,int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct hda_codec*,int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_6(struct hda_codec *VAR_3)
{
 struct alc_spec *VAR_4 = VAR_3->spec;
 hda_nid_t VAR_5 = FUNC_0(VAR_4);
 int VAR_6, VAR_7;

 if (!VAR_5)
  return;

 FUNC_5(VAR_3, VAR_5, 0,
       VAR_0, VAR_2);

 FUNC_4(100);

 if (!VAR_4->no_shutup_pins)
  FUNC_5(VAR_3, VAR_5, 0,
        VAR_1, 0x0);

 FUNC_2(VAR_3, 0x6f, 0x000f, 0);
 FUNC_3(VAR_3, 0x58, 0x00, 0x8000, 0x8000);


 VAR_7 = FUNC_1(VAR_3, 0x58, 0x01);
 for (VAR_6 = 0; VAR_6 < 20 && VAR_7 & 0x0080; VAR_6++) {
  FUNC_4(50);
  VAR_7 = FUNC_1(VAR_3, 0x58, 0x01);
 }

 FUNC_2(VAR_3, 0x6f, 0x000f, 0x000b);
 FUNC_4(50);
}
