
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct alc_spec* spec; } ;
struct alc_spec {scalar_t__ ultra_low_power; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct alc_spec*) ;
 int FUNC_1 (struct hda_codec*,int,int,int) ;
 int FUNC_2 (struct hda_codec*,int,int,int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct hda_codec*,int,int ,int ,int ) ;
 int FUNC_5 (struct hda_codec*,int) ;

__attribute__((used)) static void FUNC_6(struct hda_codec *VAR_4)
{
 struct alc_spec *VAR_5 = VAR_4->spec;
 hda_nid_t VAR_6 = FUNC_0(VAR_5);
 bool VAR_7, VAR_8;

 if (!VAR_6)
  VAR_6 = 0x21;
 FUNC_3(30);

 VAR_7 = FUNC_5(VAR_4, VAR_6);
 VAR_8 = FUNC_5(VAR_4, 0x16);

 if (VAR_7 || VAR_8)
  FUNC_3(2);

 FUNC_2(VAR_4, 0x57, 0x04, 0x0007, 0x1);
 if (VAR_5->ultra_low_power) {
  FUNC_1(VAR_4, 0x08, 0x0f << 2, 3<<2);
  FUNC_1(VAR_4, 0x0e, 7<<6, 7<<6);
  FUNC_1(VAR_4, 0x33, 1<<11, 0);
  FUNC_3(30);
 }

 if (VAR_7 || VAR_5->ultra_low_power)
  FUNC_4(VAR_4, VAR_6, 0,
       VAR_0, VAR_2);
 if (VAR_8)
  FUNC_4(VAR_4, 0x16, 0,
       VAR_0, VAR_2);

 if (VAR_7 || VAR_8 || VAR_5->ultra_low_power)
  FUNC_3(85);

 if (VAR_7 || VAR_5->ultra_low_power)
  FUNC_4(VAR_4, VAR_6, 0,
       VAR_1, VAR_3);
 if (VAR_8)
  FUNC_4(VAR_4, 0x16, 0,
       VAR_1, VAR_3);

 if (VAR_7 || VAR_8 || VAR_5->ultra_low_power)
  FUNC_3(100);

 FUNC_1(VAR_4, 0x4a, 3 << 10, 0);
 FUNC_2(VAR_4, 0x57, 0x04, 0x0007, 0x4);
}
