
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct ca0132_spec* spec; } ;
struct auto_pin_cfg {int dig_in_pin; int * dig_out_pins; } ;
struct ca0132_spec {unsigned int num_inputs; int * adcs; int * input_pins; int dig_in; int dig_out; struct auto_pin_cfg autocfg; } ;


 int FUNC_0 (struct hda_codec*,int ,int ) ;
 int FUNC_1 (struct hda_codec*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct hda_codec *VAR_0)
{
 struct ca0132_spec *VAR_1 = VAR_0->spec;
 struct auto_pin_cfg *VAR_2 = &VAR_1->autocfg;
 unsigned int VAR_3;

 FUNC_1(VAR_0, VAR_2->dig_out_pins[0], VAR_1->dig_out);
 FUNC_0(VAR_0, VAR_2->dig_in_pin, VAR_1->dig_in);

 for (VAR_3 = 0; VAR_3 < VAR_1->num_inputs; VAR_3++)
  FUNC_0(VAR_0, VAR_1->input_pins[VAR_3], VAR_1->adcs[VAR_3]);

 return 0;
}
