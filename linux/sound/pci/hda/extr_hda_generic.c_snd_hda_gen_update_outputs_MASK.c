
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ line_out_type; scalar_t__* hp_pins; scalar_t__* speaker_pins; scalar_t__* line_out_pins; } ;
struct hda_gen_spec {int* out_paths; int* hp_paths; int master_mute; int hp_jack_present; int line_jack_present; int speaker_muted; int* speaker_paths; int line_out_muted; TYPE_1__ autocfg; int automute_lo; int automute_speaker; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;


 int FUNC_0 (scalar_t__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct hda_codec*,int ,scalar_t__*,int*,int) ;

void FUNC_2(struct hda_codec *VAR_2)
{
 struct hda_gen_spec *VAR_3 = VAR_2->spec;
 int *VAR_4;
 int VAR_5;





 if (VAR_3->autocfg.line_out_type == VAR_0)
  VAR_4 = VAR_3->out_paths;
 else
  VAR_4 = VAR_3->hp_paths;
 FUNC_1(VAR_2, FUNC_0(VAR_3->autocfg.hp_pins),
      VAR_3->autocfg.hp_pins, VAR_4, VAR_3->master_mute);

 if (!VAR_3->automute_speaker)
  VAR_5 = 0;
 else
  VAR_5 = VAR_3->hp_jack_present | VAR_3->line_jack_present;
 VAR_5 |= VAR_3->master_mute;
 VAR_3->speaker_muted = VAR_5;
 if (VAR_3->autocfg.line_out_type == VAR_1)
  VAR_4 = VAR_3->out_paths;
 else
  VAR_4 = VAR_3->speaker_paths;
 FUNC_1(VAR_2, FUNC_0(VAR_3->autocfg.speaker_pins),
      VAR_3->autocfg.speaker_pins, VAR_4, VAR_5);



 if (VAR_3->autocfg.line_out_pins[0] == VAR_3->autocfg.hp_pins[0] ||
     VAR_3->autocfg.line_out_pins[0] == VAR_3->autocfg.speaker_pins[0])
  return;
 if (!VAR_3->automute_lo)
  VAR_5 = 0;
 else
  VAR_5 = VAR_3->hp_jack_present;
 VAR_5 |= VAR_3->master_mute;
 VAR_3->line_out_muted = VAR_5;
 VAR_4 = VAR_3->out_paths;
 FUNC_1(VAR_2, FUNC_0(VAR_3->autocfg.line_out_pins),
      VAR_3->autocfg.line_out_pins, VAR_4, VAR_5);
}
