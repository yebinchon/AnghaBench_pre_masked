
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct conexant_spec* spec; } ;
struct conexant_spec {int dc_enable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hda_codec*,int,int,int ,int ) ;
 int FUNC_1 (struct hda_codec*,int,int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_5)
{
 struct conexant_spec *VAR_6 = VAR_5->spec;
 int VAR_7, VAR_8;

 for (VAR_7 = 0; VAR_7 < 2; VAR_7++) {
  VAR_8 = VAR_1 |
   (VAR_7 ? VAR_2 : VAR_0);
  if (!VAR_6->dc_enable)
   VAR_8 |= FUNC_0(VAR_5, 0x17, VAR_7, VAR_4, 0);
  FUNC_1(VAR_5, 0x17, 0,
        VAR_3, VAR_8);
 }
}
