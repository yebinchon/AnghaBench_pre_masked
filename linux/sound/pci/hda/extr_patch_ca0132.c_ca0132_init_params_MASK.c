
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct ca0132_spec* spec; } ;
struct ca0132_spec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct ca0132_spec*) ;
 int FUNC_1 (struct hda_codec*,int,int ) ;
 int FUNC_2 (struct hda_codec*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct hda_codec *VAR_6)
{
 struct ca0132_spec *VAR_7 = VAR_6->spec;

 if (FUNC_0(VAR_7)) {
  FUNC_1(VAR_6, VAR_4, VAR_5);
  FUNC_1(VAR_6, 0x0B, VAR_5);
  FUNC_2(VAR_6, VAR_2, 0);
  FUNC_2(VAR_6, 0, 0);
  FUNC_2(VAR_6, VAR_3, 0);
 }

 FUNC_2(VAR_6, VAR_0, 6);
 FUNC_2(VAR_6, VAR_1, 6);
}
