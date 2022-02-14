
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct auto_pin_cfg {scalar_t__ line_out_type; int speaker_outs; int line_outs; int hp_outs; scalar_t__* line_out_pins; scalar_t__* hp_pins; scalar_t__* speaker_pins; } ;
struct hda_gen_spec {int detect_hp; int detect_lo; int automute_lo_possible; int automute_speaker_possible; int automute_lo; int automute_speaker; scalar_t__ suppress_auto_mute; struct auto_pin_cfg autocfg; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;
typedef scalar_t__ hda_nid_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct hda_codec*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct hda_codec*,char*,scalar_t__) ;
 int FUNC_2 (struct hda_codec*,scalar_t__) ;
 int FUNC_3 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_4 (struct hda_codec*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_5(struct hda_codec *VAR_5)
{
 struct hda_gen_spec *VAR_6 = VAR_5->spec;
 struct auto_pin_cfg *VAR_7 = &VAR_6->autocfg;
 int VAR_8 = 0;
 int VAR_9, VAR_10;

 if (VAR_6->suppress_auto_mute)
  return 0;

 if (VAR_7->hp_pins[0])
  VAR_8++;
 if (VAR_7->line_out_pins[0])
  VAR_8++;
 if (VAR_7->speaker_pins[0])
  VAR_8++;
 if (VAR_8 < 2)
  return 0;

 if (!VAR_7->speaker_pins[0] &&
     VAR_7->line_out_type == VAR_2) {
  FUNC_3(VAR_7->speaker_pins, VAR_7->line_out_pins,
         sizeof(VAR_7->speaker_pins));
  VAR_7->speaker_outs = VAR_7->line_outs;
 }

 if (!VAR_7->hp_pins[0] &&
     VAR_7->line_out_type == VAR_0) {
  FUNC_3(VAR_7->hp_pins, VAR_7->line_out_pins,
         sizeof(VAR_7->hp_pins));
  VAR_7->hp_outs = VAR_7->line_outs;
 }

 for (VAR_9 = 0; VAR_9 < VAR_7->hp_outs; VAR_9++) {
  hda_nid_t VAR_11 = VAR_7->hp_pins[VAR_9];
  if (!FUNC_2(VAR_5, VAR_11))
   continue;
  FUNC_1(VAR_5, "Enable HP auto-muting on NID 0x%x\n", VAR_11);
  FUNC_4(VAR_5, VAR_11,
          VAR_3);
  VAR_6->detect_hp = 1;
 }

 if (VAR_7->line_out_type == VAR_1 && VAR_7->line_outs) {
  if (VAR_7->speaker_outs)
   for (VAR_9 = 0; VAR_9 < VAR_7->line_outs; VAR_9++) {
    hda_nid_t VAR_12 = VAR_7->line_out_pins[VAR_9];
    if (!FUNC_2(VAR_5, VAR_12))
     continue;
    FUNC_1(VAR_5, "Enable Line-Out auto-muting on NID 0x%x\n", VAR_12);
    FUNC_4(VAR_5, VAR_12,
            VAR_4);
    VAR_6->detect_lo = 1;
   }
  VAR_6->automute_lo_possible = VAR_6->detect_hp;
 }

 VAR_6->automute_speaker_possible = VAR_7->speaker_outs &&
  (VAR_6->detect_hp || VAR_6->detect_lo);

 VAR_6->automute_lo = VAR_6->automute_lo_possible;
 VAR_6->automute_speaker = VAR_6->automute_speaker_possible;

 if (VAR_6->automute_speaker_possible || VAR_6->automute_lo_possible) {

  VAR_10 = FUNC_0(VAR_5);
  if (VAR_10 < 0)
   return VAR_10;
 }
 return 0;
}
