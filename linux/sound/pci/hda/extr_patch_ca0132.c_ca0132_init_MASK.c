
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct ca0132_spec* spec; } ;
struct auto_pin_cfg {int dig_in_pin; int * dig_out_pins; } ;
struct ca0132_spec {scalar_t__ dsp_state; int dsp_reload; int num_outputs; int num_inputs; int spec_init_verbs; int chip_init_verbs; int dig_in; int * adcs; int * input_pins; int dig_out; int * dacs; int * out_pins; int base_init_verbs; int curr_chip_addx; struct auto_pin_cfg autocfg; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;





 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct hda_codec*) ;
 int FUNC_1 (struct hda_codec*) ;
 int FUNC_2 (struct hda_codec*) ;
 int FUNC_3 (struct hda_codec*) ;
 int FUNC_4 (struct hda_codec*) ;
 int FUNC_5 (struct hda_codec*) ;
 int FUNC_6 (struct hda_codec*) ;
 int FUNC_7 (struct hda_codec*) ;
 int FUNC_8 (struct hda_codec*) ;
 int FUNC_9 (struct hda_codec*) ;
 int FUNC_10 (struct hda_codec*) ;
 int FUNC_11 (struct hda_codec*) ;
 int FUNC_12 (struct hda_codec*) ;
 int FUNC_13 (struct hda_codec*) ;
 int FUNC_14 (struct ca0132_spec*) ;
 int FUNC_15 (struct hda_codec*) ;
 int FUNC_16 (struct hda_codec*) ;
 int FUNC_17 (struct hda_codec*) ;
 int FUNC_18 (struct hda_codec*) ;
 scalar_t__ FUNC_19 (struct ca0132_spec*) ;
 scalar_t__ FUNC_20 (struct ca0132_spec*) ;
 int FUNC_21 (struct hda_codec*) ;
 int FUNC_22 (struct hda_codec*,int ,int ) ;
 int FUNC_23 (struct hda_codec*,int ,int ) ;
 int FUNC_24 (struct hda_codec*) ;
 int FUNC_25 (struct hda_codec*) ;
 int FUNC_26 (struct hda_codec*) ;
 int FUNC_27 (struct hda_codec*,int ,int ,int ,int) ;
 int FUNC_28 (struct hda_codec*) ;
 int FUNC_29 (struct hda_codec*) ;
 int FUNC_30 (struct hda_codec*) ;
 int FUNC_31 (struct hda_codec*,int ) ;

__attribute__((used)) static int FUNC_32(struct hda_codec *VAR_7)
{
 struct ca0132_spec *VAR_8 = VAR_7->spec;
 struct auto_pin_cfg *VAR_9 = &VAR_8->autocfg;
 int VAR_10;
 bool VAR_11;
 if (VAR_8->dsp_state == VAR_0) {
  VAR_11 = FUNC_21(VAR_7);
  if (!VAR_11) {
   VAR_8->dsp_reload = 1;
   VAR_8->dsp_state = VAR_2;
  } else {
   if (FUNC_14(VAR_8) == 129)
    FUNC_25(VAR_7);
   return 0;
  }
 }

 if (VAR_8->dsp_state != VAR_1)
  VAR_8->dsp_state = VAR_2;
 VAR_8->curr_chip_addx = VAR_3;

 if (FUNC_20(VAR_8))
  FUNC_12(VAR_7);

 FUNC_30(VAR_7);

 if (FUNC_14(VAR_8) == 132)
  FUNC_0(VAR_7);

 FUNC_11(VAR_7);
 FUNC_10(VAR_7);
 FUNC_9(VAR_7);

 FUNC_31(VAR_7, VAR_8->base_init_verbs);

 if (FUNC_19(VAR_8))
  FUNC_2(VAR_7);

 FUNC_5(VAR_7);

 FUNC_15(VAR_7);

 switch (FUNC_14(VAR_8)) {
 case 130:
 case 131:
  FUNC_24(VAR_7);
  break;
 case 129:
 case 128:
  FUNC_26(VAR_7);
  break;
 case 132:
  FUNC_1(VAR_7);
  break;
 default:
  FUNC_18(VAR_7);
  FUNC_7(VAR_7);
  FUNC_8(VAR_7);
  break;
 }

 for (VAR_10 = 0; VAR_10 < VAR_8->num_outputs; VAR_10++)
  FUNC_23(VAR_7, VAR_8->out_pins[VAR_10], VAR_8->dacs[0]);

 FUNC_23(VAR_7, VAR_9->dig_out_pins[0], VAR_8->dig_out);

 for (VAR_10 = 0; VAR_10 < VAR_8->num_inputs; VAR_10++)
  FUNC_22(VAR_7, VAR_8->input_pins[VAR_10], VAR_8->adcs[VAR_10]);

 FUNC_22(VAR_7, VAR_9->dig_in_pin, VAR_8->dig_in);

 if (!FUNC_19(VAR_8)) {
  FUNC_31(VAR_7, VAR_8->chip_init_verbs);
  FUNC_27(VAR_7, VAR_6, 0,
       VAR_4, 0x0D);
  FUNC_27(VAR_7, VAR_6, 0,
       VAR_5, 0x20);
 }

 if (FUNC_14(VAR_8) == 129)
  FUNC_6(VAR_7);

 FUNC_31(VAR_7, VAR_8->spec_init_verbs);
 if (FUNC_19(VAR_8)) {
  FUNC_4(VAR_7);
  FUNC_3(VAR_7);
 } else {
  FUNC_17(VAR_7);
  FUNC_16(VAR_7);
 }

 FUNC_28(VAR_7);





 if (VAR_8->dsp_reload) {
  VAR_8->dsp_reload = 0;
  FUNC_13(VAR_7);
 }

 FUNC_29(VAR_7);

 return 0;
}
