
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct ca0132_spec* spec; } ;
struct ca0132_spec {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct ca0132_spec*) ;
 int FUNC_1 (struct hda_codec*,int,int ) ;
 int FUNC_2 (struct hda_codec*,int,int,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct hda_codec *VAR_9)
{
 struct ca0132_spec *VAR_10 = VAR_9->spec;
 unsigned int VAR_11;


 FUNC_1(VAR_9, VAR_3, VAR_8);
 FUNC_1(VAR_9, VAR_5, VAR_8);
 if (FUNC_0(VAR_10) == VAR_7) {
  FUNC_1(VAR_9, 0x0F, VAR_8);
  VAR_11 = VAR_0;
 } else
  VAR_11 = VAR_1;
 FUNC_2(VAR_9, 0x80, 0x00, VAR_11);


 FUNC_1(VAR_9, VAR_4, VAR_8);
 FUNC_1(VAR_9, VAR_6, VAR_8);
 if (FUNC_0(VAR_10) == VAR_7)
  FUNC_1(VAR_9, 0x0F, VAR_8);
 VAR_11 = VAR_2;
 FUNC_2(VAR_9, 0x80, 0x01, VAR_11);
}
