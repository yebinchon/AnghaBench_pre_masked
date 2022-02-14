
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hda_codec {struct ca0132_spec* spec; } ;
struct ca0132_spec {int dmic_ctl; int * input_pins; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hda_codec*,int) ;
 int FUNC_1 (struct hda_codec*,int ,int) ;
 int FUNC_2 (struct hda_codec*,char*,int) ;
 int FUNC_3 (struct hda_codec*,int,int,unsigned int) ;
 int FUNC_4 (struct hda_codec*,unsigned int) ;
 int FUNC_5 (struct hda_codec*,int ,int ,int ,int) ;
 unsigned int FUNC_6 (struct hda_codec*) ;

__attribute__((used)) static void FUNC_7(struct hda_codec *VAR_4, int VAR_5)
{
 struct ca0132_spec *VAR_6 = VAR_4->spec;
 unsigned int VAR_7;
 u8 VAR_8;
 unsigned int VAR_9;

 FUNC_2(VAR_4, "ca0132_set_dmic: enable=%d\n", VAR_5);

 VAR_9 = FUNC_6(VAR_4);
 FUNC_0(VAR_4, 0);
 if (VAR_5) {

  VAR_7 = VAR_2;
  FUNC_3(VAR_4, 0x80, 0x00, VAR_7);

  VAR_8 = VAR_6->dmic_ctl;
  VAR_8 |= 0x80;
  FUNC_5(VAR_4, VAR_6->input_pins[0], 0,
        VAR_3, VAR_8);

  if (!(VAR_6->dmic_ctl & 0x20))
   FUNC_1(VAR_4, VAR_0, 1);
 } else {

  VAR_7 = VAR_1;
  FUNC_3(VAR_4, 0x80, 0x00, VAR_7);

  VAR_8 = VAR_6->dmic_ctl;

  VAR_8 &= 0x5f;
  FUNC_5(VAR_4, VAR_6->input_pins[0], 0,
        VAR_3, VAR_8);

  if (!(VAR_6->dmic_ctl & 0x20))
   FUNC_1(VAR_4, VAR_0, 0);
 }
 FUNC_0(VAR_4, 1);
 FUNC_4(VAR_4, VAR_9);
}
