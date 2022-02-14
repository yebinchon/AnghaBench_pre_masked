
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct alc_spec* spec; } ;
struct alc_spec {scalar_t__ ultra_low_power; int no_shutup_pins; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hda_codec*,int) ;
 int FUNC_1 (struct alc_spec*) ;
 int FUNC_2 (struct hda_codec*) ;
 int FUNC_3 (struct hda_codec*,int,int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct hda_codec*,int,int ,int ,int) ;
 int FUNC_6 (struct hda_codec*,int) ;

__attribute__((used)) static void FUNC_7(struct hda_codec *VAR_3)
{
 struct alc_spec *VAR_4 = VAR_3->spec;
 hda_nid_t VAR_5 = FUNC_1(VAR_4);
 bool VAR_6;

 if (!VAR_5)
  VAR_5 = 0x21;

 VAR_6 = FUNC_6(VAR_3, VAR_5);

 if (VAR_6)
  FUNC_4(2);

 FUNC_5(VAR_3, VAR_5, 0,
       VAR_0, VAR_2);

 if (VAR_6 || VAR_4->ultra_low_power)
  FUNC_4(85);



 FUNC_3(VAR_3, 0x46, 0, 3 << 12);

 if (!VAR_4->no_shutup_pins)
  FUNC_5(VAR_3, VAR_5, 0,
        VAR_1, 0x0);

 if (VAR_6 || VAR_4->ultra_low_power)
  FUNC_4(100);

 FUNC_0(VAR_3, 0);
 FUNC_2(VAR_3);
 if (VAR_4->ultra_low_power) {
  FUNC_4(50);
  FUNC_3(VAR_3, 0x03, 1<<1, 0);
  FUNC_3(VAR_3, 0x08, 7<<4, 7<<4);
  FUNC_3(VAR_3, 0x08, 3<<2, 0);
  FUNC_3(VAR_3, 0x3b, 1<<15, 1<<15);
  FUNC_3(VAR_3, 0x0e, 7<<6, 0);
  FUNC_4(30);
 }
}
