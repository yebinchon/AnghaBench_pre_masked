
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct auto_pin_cfg {scalar_t__ line_out_type; int speaker_pins; int speaker_outs; int hp_pins; int hp_outs; int line_out_pins; int line_outs; } ;
struct hda_gen_spec {int beep_nid; struct auto_pin_cfg autocfg; } ;
struct hda_codec {int power_save_node; struct hda_gen_spec* spec; } ;
typedef int hda_nid_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct hda_codec*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct hda_codec *VAR_2)
{
 struct hda_gen_spec *VAR_3 = VAR_2->spec;
 struct auto_pin_cfg *VAR_4 = &VAR_3->autocfg;
 hda_nid_t VAR_5 = VAR_3->beep_nid;
 int VAR_6;

 if (!VAR_2->power_save_node || !VAR_5)
  return 0;
 VAR_6 = FUNC_0(VAR_2, VAR_5, VAR_4->line_outs, VAR_4->line_out_pins);
 if (VAR_6 < 0)
  return VAR_6;
 if (VAR_4->line_out_type != VAR_0) {
  VAR_6 = FUNC_0(VAR_2, VAR_5, VAR_4->hp_outs, VAR_4->hp_pins);
  if (VAR_6 < 0)
   return VAR_6;
 }
 if (VAR_4->line_out_type != VAR_1) {
  VAR_6 = FUNC_0(VAR_2, VAR_5, VAR_4->speaker_outs,
         VAR_4->speaker_pins);
  if (VAR_6 < 0)
   return VAR_6;
 }
 return 0;
}
