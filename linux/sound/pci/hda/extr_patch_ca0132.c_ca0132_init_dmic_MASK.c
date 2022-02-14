
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hda_codec {struct ca0132_spec* spec; } ;
struct ca0132_spec {int dmic_ctl; int * input_pins; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct ca0132_spec*) ;
 int FUNC_1 (struct hda_codec*,int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_4)
{
 struct ca0132_spec *VAR_5 = VAR_4->spec;
 u8 VAR_6;
 VAR_6 = 0x01;
 FUNC_1(VAR_4, VAR_5->input_pins[0], 0,
       VAR_2, VAR_6);







 VAR_6 = 0x83;
 FUNC_1(VAR_4, VAR_5->input_pins[0], 0,
       VAR_3, VAR_6);
 if (FUNC_0(VAR_5) == VAR_0)
  VAR_6 = 0x33;
 else
  VAR_6 = 0x23;

 VAR_5->dmic_ctl = VAR_6;
 FUNC_1(VAR_4, VAR_5->input_pins[0], 0,
       VAR_1, VAR_6);
}
