
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_jack_callback {int dummy; } ;
struct TYPE_2__ {scalar_t__ line_out_type; scalar_t__* line_out_pins; scalar_t__* hp_pins; } ;
struct hda_gen_spec {int detect_lo; int automute_speaker; TYPE_1__ autocfg; int line_jack_present; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;


 int FUNC_0 (scalar_t__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct hda_codec*) ;
 int FUNC_2 (struct hda_codec*,int ,scalar_t__*) ;

void FUNC_3(struct hda_codec *VAR_1,
          struct hda_jack_callback *VAR_2)
{
 struct hda_gen_spec *VAR_3 = VAR_1->spec;

 if (VAR_3->autocfg.line_out_type == VAR_0)
  return;

 if (VAR_3->autocfg.line_out_pins[0] == VAR_3->autocfg.hp_pins[0])
  return;

 VAR_3->line_jack_present =
  FUNC_2(VAR_1, FUNC_0(VAR_3->autocfg.line_out_pins),
        VAR_3->autocfg.line_out_pins);
 if (!VAR_3->automute_speaker || !VAR_3->detect_lo)
  return;
 FUNC_1(VAR_1);
}
