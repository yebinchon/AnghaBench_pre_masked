
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct alc_spec* spec; } ;
struct alc_spec {int dummy; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hda_codec*) ;
 int FUNC_1 (struct alc_spec*) ;
 int FUNC_2 (struct hda_codec*,int,int,int ) ;
 int FUNC_3 (struct hda_codec*,int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct hda_codec*,int ,int ,int ,int ) ;
 int FUNC_6 (struct hda_codec*,int ) ;

__attribute__((used)) static void FUNC_7(struct hda_codec *VAR_4)
{
 struct alc_spec *VAR_5 = VAR_4->spec;
 hda_nid_t VAR_6 = FUNC_1(VAR_5);
 bool VAR_7;

 FUNC_0(VAR_4);

 if (!VAR_6)
  return;

 FUNC_4(30);
 VAR_7 = FUNC_6(VAR_4, VAR_6);



 FUNC_3(VAR_4, 0x43, 0x9004);

 FUNC_5(VAR_4, VAR_6, 0,
       VAR_0, VAR_2);

 if (VAR_7)
  FUNC_4(85);

 FUNC_5(VAR_4, VAR_6, 0,
       VAR_1, VAR_3);

 if (VAR_7)
  FUNC_4(85);


 FUNC_2(VAR_4, 0x46, 3 << 12, 0);

 FUNC_3(VAR_4, 0x43, 0x9614);
}
