
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct auto_pin_cfg {int line_outs; scalar_t__ line_out_type; int hp_outs; int speaker_outs; int num_inputs; TYPE_1__* inputs; int * speaker_pins; int * hp_pins; int * line_out_pins; } ;
struct hda_gen_spec {struct auto_pin_cfg autocfg; } ;
struct hda_codec {int power_save_node; struct hda_gen_spec* spec; } ;
struct TYPE_2__ {int pin; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct hda_codec*,int,int *,int) ;

__attribute__((used)) static void FUNC_1(struct hda_codec *VAR_2, bool VAR_3)
{
 struct hda_gen_spec *VAR_4 = VAR_2->spec;
 struct auto_pin_cfg *VAR_5 = &VAR_4->autocfg;
 int VAR_6;

 if (!VAR_2->power_save_node)
  return;
 FUNC_0(VAR_2, VAR_5->line_outs, VAR_5->line_out_pins, VAR_3);
 if (VAR_5->line_out_type != VAR_0)
  FUNC_0(VAR_2, VAR_5->hp_outs, VAR_5->hp_pins, VAR_3);
 if (VAR_5->line_out_type != VAR_1)
  FUNC_0(VAR_2, VAR_5->speaker_outs, VAR_5->speaker_pins, VAR_3);
 for (VAR_6 = 0; VAR_6 < VAR_5->num_inputs; VAR_6++)
  FUNC_0(VAR_2, 1, &VAR_5->inputs[VAR_6].pin, VAR_3);
}
