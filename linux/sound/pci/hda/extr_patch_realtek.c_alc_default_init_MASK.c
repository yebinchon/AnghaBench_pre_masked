
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
 int FUNC_0 (struct alc_spec*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct hda_codec*,int ,int ,int ,int ) ;
 int FUNC_3 (struct hda_codec*,int ) ;

__attribute__((used)) static void FUNC_4(struct hda_codec *VAR_4)
{
 struct alc_spec *VAR_5 = VAR_4->spec;
 hda_nid_t VAR_6 = FUNC_0(VAR_5);
 bool VAR_7;

 if (!VAR_6)
  return;

 FUNC_1(30);

 VAR_7 = FUNC_3(VAR_4, VAR_6);

 if (VAR_7)
  FUNC_1(2);

 FUNC_2(VAR_4, VAR_6, 0,
       VAR_0, VAR_2);

 if (VAR_7)
  FUNC_1(85);

 FUNC_2(VAR_4, VAR_6, 0,
       VAR_1, VAR_3);

 if (VAR_7)
  FUNC_1(100);
}
