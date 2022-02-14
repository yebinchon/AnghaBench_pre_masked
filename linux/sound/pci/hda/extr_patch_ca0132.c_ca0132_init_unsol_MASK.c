
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct ca0132_spec* spec; } ;
struct ca0132_spec {int unsol_tag_front_hp; int unsol_tag_amic1; int unsol_tag_hp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ca0132_spec*) ;
 int VAR_3 ;
 int FUNC_1 (struct hda_codec*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_4)
{
 struct ca0132_spec *VAR_5 = VAR_4->spec;
 FUNC_1(VAR_4, VAR_5->unsol_tag_hp, VAR_3);
 FUNC_1(VAR_4, VAR_5->unsol_tag_amic1,
         VAR_1);
 FUNC_1(VAR_4, VAR_0,
         VAR_2);

 if (FUNC_0(VAR_5))
  FUNC_1(VAR_4,
   VAR_5->unsol_tag_front_hp, VAR_3);
}
