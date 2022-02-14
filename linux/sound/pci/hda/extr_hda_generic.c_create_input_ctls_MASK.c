
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct auto_pin_cfg {int num_inputs; TYPE_1__* inputs; } ;
struct hda_gen_spec {scalar_t__ mixer_nid; scalar_t__ hp_mic_pin; char** input_labels; scalar_t__ add_stereo_mix_input; int suppress_auto_mic; scalar_t__ add_jack_modes; int * input_label_idxs; struct auto_pin_cfg autocfg; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;
typedef scalar_t__ hda_nid_t ;
struct TYPE_2__ {scalar_t__ pin; scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct hda_codec*,scalar_t__) ;
 int FUNC_1 (struct hda_codec*) ;
 int FUNC_2 (struct hda_codec*) ;
 int FUNC_3 (struct hda_codec*,scalar_t__) ;
 scalar_t__ FUNC_4 (struct hda_codec*,scalar_t__,scalar_t__) ;
 int FUNC_5 (struct hda_codec*,int,scalar_t__,char*,int ,scalar_t__) ;
 int FUNC_6 (struct hda_codec*,scalar_t__,int,int,char*,scalar_t__) ;
 int FUNC_7 (struct hda_codec*,scalar_t__,unsigned int,int) ;
 int FUNC_8 (struct hda_codec*,scalar_t__) ;
 unsigned int FUNC_9 (struct hda_codec*,scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct hda_codec *VAR_4)
{
 struct hda_gen_spec *VAR_5 = VAR_4->spec;
 const struct auto_pin_cfg *VAR_6 = &VAR_5->autocfg;
 hda_nid_t VAR_7 = VAR_5->mixer_nid;
 int VAR_8;
 int VAR_9, VAR_10;
 unsigned int VAR_11;

 VAR_8 = FUNC_1(VAR_4);
 if (VAR_8 < 0)
  return 0;

 VAR_10 = FUNC_2(VAR_4);
 if (VAR_10 < 0)
  return VAR_10;

 for (VAR_9 = 0; VAR_9 < VAR_6->num_inputs; VAR_9++) {
  hda_nid_t VAR_12;

  VAR_12 = VAR_6->inputs[VAR_9].pin;
  if (!FUNC_3(VAR_4, VAR_12))
   continue;

  VAR_11 = VAR_3;
  if (VAR_6->inputs[VAR_9].type == VAR_0)
   VAR_11 |= FUNC_9(VAR_4, VAR_12);
  if (VAR_12 != VAR_5->hp_mic_pin &&
      !FUNC_8(VAR_4, VAR_12))
   FUNC_7(VAR_4, VAR_12, VAR_11, 0);

  if (VAR_7) {
   if (FUNC_4(VAR_4, VAR_12, VAR_7)) {
    VAR_10 = FUNC_5(VAR_4, VAR_9, VAR_12,
             VAR_5->input_labels[VAR_9],
             VAR_5->input_label_idxs[VAR_9],
             VAR_7);
    if (VAR_10 < 0)
     return VAR_10;
   }
  }

  VAR_10 = FUNC_6(VAR_4, VAR_12, VAR_9, VAR_8,
        VAR_5->input_labels[VAR_9], -VAR_7);
  if (VAR_10 < 0)
   return VAR_10;

  if (VAR_5->add_jack_modes) {
   VAR_10 = FUNC_0(VAR_4, VAR_12);
   if (VAR_10 < 0)
    return VAR_10;
  }
 }


 if (VAR_7 && VAR_5->add_stereo_mix_input == VAR_2) {
  VAR_10 = FUNC_6(VAR_4, VAR_7, VAR_1, VAR_8,
        "Stereo Mix", 0);
  if (VAR_10 < 0)
   return VAR_10;
  else
   VAR_5->suppress_auto_mic = 1;
 }

 return 0;
}
