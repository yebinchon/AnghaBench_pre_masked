
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hda_codec {struct conexant_spec* spec; } ;
struct auto_pin_cfg {int num_inputs; int * hp_pins; TYPE_1__* inputs; } ;
struct TYPE_4__ {scalar_t__* imux_pins; size_t* cur_mux; int hp_jack_present; struct auto_pin_cfg autocfg; } ;
struct conexant_spec {TYPE_2__ gen; } ;
typedef scalar_t__ hda_nid_t ;
struct TYPE_3__ {scalar_t__ pin; int is_headphone_mic; } ;


 int FUNC_0 (struct hda_codec*,int,int ,int,int) ;
 int FUNC_1 (struct hda_codec*) ;
 int FUNC_2 (struct hda_codec*,int ) ;

__attribute__((used)) static void FUNC_3(struct hda_codec *VAR_0)
{

 int VAR_1;
 bool VAR_2 = 0;
 struct conexant_spec *VAR_3 = VAR_0->spec;
 struct auto_pin_cfg *VAR_4 = &VAR_3->gen.autocfg;

 hda_nid_t VAR_5 = VAR_3->gen.imux_pins[VAR_3->gen.cur_mux[0]];

 for (VAR_1 = 0; VAR_1 < VAR_4->num_inputs; VAR_1++)
  if (VAR_4->inputs[VAR_1].pin == VAR_5) {
   VAR_2 = !!VAR_4->inputs[VAR_1].is_headphone_mic;
   break;
  }

 if (VAR_2) {
  FUNC_0(VAR_0, 0x1c, 0, 0x410, 0x7c);
  VAR_3->gen.hp_jack_present = 0;
 } else {
  FUNC_0(VAR_0, 0x1c, 0, 0x410, 0x54);
  VAR_3->gen.hp_jack_present = FUNC_2(VAR_0, VAR_3->gen.autocfg.hp_pins[0]);
 }

 FUNC_1(VAR_0);
}
