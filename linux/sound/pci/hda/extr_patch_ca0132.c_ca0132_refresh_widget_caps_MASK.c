
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_codec {struct ca0132_spec* spec; } ;
struct TYPE_2__ {int num_dacs; } ;
struct ca0132_spec {int num_outputs; int num_inputs; int * input_pins; int * adcs; int * out_pins; int * dacs; TYPE_1__ multiout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hda_codec*,char*) ;
 int FUNC_1 (struct hda_codec*,int ,int ) ;
 int FUNC_2 (struct hda_codec*) ;

__attribute__((used)) static void FUNC_3(struct hda_codec *VAR_2)
{
 struct ca0132_spec *VAR_3 = VAR_2->spec;
 int VAR_4;

 FUNC_0(VAR_2, "ca0132_refresh_widget_caps.\n");
 FUNC_2(VAR_2);

 for (VAR_4 = 0; VAR_4 < VAR_3->multiout.num_dacs; VAR_4++)
  FUNC_1(VAR_2, VAR_3->dacs[VAR_4], VAR_1);

 for (VAR_4 = 0; VAR_4 < VAR_3->num_outputs; VAR_4++)
  FUNC_1(VAR_2, VAR_3->out_pins[VAR_4], VAR_1);

 for (VAR_4 = 0; VAR_4 < VAR_3->num_inputs; VAR_4++) {
  FUNC_1(VAR_2, VAR_3->adcs[VAR_4], VAR_0);
  FUNC_1(VAR_2, VAR_3->input_pins[VAR_4], VAR_0);
 }
}
