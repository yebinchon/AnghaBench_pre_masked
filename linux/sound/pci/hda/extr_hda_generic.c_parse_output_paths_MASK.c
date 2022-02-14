
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nid_path {int dummy; } ;
struct auto_pin_cfg {scalar_t__ line_out_type; scalar_t__ speaker_outs; scalar_t__ hp_outs; scalar_t__ line_outs; scalar_t__* speaker_pins; scalar_t__* hp_pins; scalar_t__* line_out_pins; } ;
struct hda_gen_spec {scalar_t__ indep_hp; scalar_t__ prefer_hp_amp; int * vmaster_tlv; scalar_t__ dac_min_mute; int vmaster_nid; int * out_paths; struct auto_pin_cfg autocfg; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct hda_codec*,struct auto_pin_cfg*) ;
 int FUNC_2 (struct hda_codec*,int,int) ;
 int FUNC_3 (struct hda_codec*) ;
 int FUNC_4 (struct auto_pin_cfg*) ;
 struct auto_pin_cfg* FUNC_5 (int,int ) ;
 int FUNC_6 (struct hda_codec*,struct nid_path*) ;
 int FUNC_7 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_8 (scalar_t__*,int ,int) ;
 int FUNC_9 (struct hda_codec*,scalar_t__,scalar_t__*,unsigned int) ;
 struct nid_path* FUNC_10 (struct hda_codec*,int ) ;
 int FUNC_11 (struct hda_codec*,int ,int ,int *) ;

__attribute__((used)) static int FUNC_12(struct hda_codec *VAR_10)
{
 struct hda_gen_spec *VAR_11 = VAR_10->spec;
 struct auto_pin_cfg *VAR_12 = &VAR_11->autocfg;
 struct auto_pin_cfg *VAR_13;
 unsigned int VAR_14;
 int VAR_15 = VAR_5;
 int VAR_16;
 bool VAR_17 = 1, VAR_18 = 1;
 bool VAR_19 = 1, VAR_20 = 1;
 bool VAR_21 = 0;

 VAR_13 = FUNC_5(sizeof(*VAR_13), VAR_3);
 if (!VAR_13)
  return -VAR_2;
 *VAR_13 = *VAR_12;

 for (;;) {
  VAR_16 = FUNC_2(VAR_10, VAR_17,
          VAR_18);
  if (VAR_16 < 0) {
   FUNC_4(VAR_13);
   return VAR_16;
  }
  FUNC_0("==> lo_type=%d, wired=%d, mio=%d, badness=0x%x\n",
         VAR_12->line_out_type, VAR_17, VAR_18,
         VAR_16);
  FUNC_1(VAR_10, VAR_12);
  if (VAR_16 < VAR_15) {
   VAR_15 = VAR_16;
   *VAR_13 = *VAR_12;
   VAR_19 = VAR_17;
   VAR_20 = VAR_18;
  }
  if (!VAR_16)
   break;
  VAR_18 = !VAR_18;
  if (!VAR_18)
   continue;
  VAR_17 = !VAR_17;
  if (!VAR_17)
   continue;
  if (VAR_21)
   break;
  VAR_21 = 1;
  if (VAR_12->speaker_outs > 0 &&
      VAR_12->line_out_type == VAR_0) {
   VAR_12->hp_outs = VAR_12->line_outs;
   FUNC_7(VAR_12->hp_pins, VAR_12->line_out_pins,
          sizeof(VAR_12->hp_pins));
   VAR_12->line_outs = VAR_12->speaker_outs;
   FUNC_7(VAR_12->line_out_pins, VAR_12->speaker_pins,
          sizeof(VAR_12->speaker_pins));
   VAR_12->speaker_outs = 0;
   FUNC_8(VAR_12->speaker_pins, 0, sizeof(VAR_12->speaker_pins));
   VAR_12->line_out_type = VAR_1;
   VAR_17 = 1;
   continue;
  }
  if (VAR_12->hp_outs > 0 &&
      VAR_12->line_out_type == VAR_1) {
   VAR_12->speaker_outs = VAR_12->line_outs;
   FUNC_7(VAR_12->speaker_pins, VAR_12->line_out_pins,
          sizeof(VAR_12->speaker_pins));
   VAR_12->line_outs = VAR_12->hp_outs;
   FUNC_7(VAR_12->line_out_pins, VAR_12->hp_pins,
          sizeof(VAR_12->hp_pins));
   VAR_12->hp_outs = 0;
   FUNC_8(VAR_12->hp_pins, 0, sizeof(VAR_12->hp_pins));
   VAR_12->line_out_type = VAR_0;
   VAR_17 = 1;
   continue;
  }
  break;
 }

 if (VAR_16) {
  FUNC_0("==> restoring best_cfg\n");
  *VAR_12 = *VAR_13;
  FUNC_2(VAR_10, VAR_19, VAR_20);
 }
 FUNC_0("==> Best config: lo_type=%d, wired=%d, mio=%d\n",
        VAR_12->line_out_type, VAR_19, VAR_20);
 FUNC_1(VAR_10, VAR_12);

 if (VAR_12->line_out_pins[0]) {
  struct nid_path *VAR_22;
  VAR_22 = FUNC_10(VAR_10, VAR_11->out_paths[0]);
  if (VAR_22)
   VAR_11->vmaster_nid = FUNC_6(VAR_10, VAR_22);
  if (VAR_11->vmaster_nid) {
   FUNC_11(VAR_10, VAR_11->vmaster_nid,
      VAR_4, VAR_11->vmaster_tlv);
   if (VAR_11->dac_min_mute)
    VAR_11->vmaster_tlv[VAR_8] |= VAR_9;
  }
 }


 if (VAR_11->prefer_hp_amp || VAR_12->line_out_type == VAR_0)
  VAR_14 = VAR_6;
 else
  VAR_14 = VAR_7;
 FUNC_9(VAR_10, VAR_12->line_outs, VAR_12->line_out_pins, VAR_14);
 if (VAR_12->line_out_type != VAR_0)
  FUNC_9(VAR_10, VAR_12->hp_outs, VAR_12->hp_pins, VAR_6);
 if (VAR_12->line_out_type != VAR_1) {
  VAR_14 = VAR_11->prefer_hp_amp ? VAR_6 : VAR_7;
  FUNC_9(VAR_10, VAR_12->speaker_outs,
    VAR_12->speaker_pins, VAR_14);
 }


 if (VAR_11->indep_hp && !FUNC_3(VAR_10))
  VAR_11->indep_hp = 0;

 FUNC_4(VAR_13);
 return 0;
}
