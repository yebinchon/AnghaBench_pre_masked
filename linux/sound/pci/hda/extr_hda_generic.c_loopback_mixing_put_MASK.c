
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {unsigned int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct auto_pin_cfg {scalar_t__ line_out_type; int speaker_outs; int hp_outs; int line_outs; } ;
struct hda_gen_spec {unsigned int aamix_mode; int * speaker_paths; int * hp_paths; int * out_paths; int * aamix_out_paths; struct auto_pin_cfg autocfg; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct hda_gen_spec*) ;
 struct hda_codec* FUNC_1 (struct snd_kcontrol*) ;
 int FUNC_2 (struct hda_codec*,unsigned int,int ,int ,scalar_t__) ;
 int FUNC_3 (struct hda_codec*,int ,int *) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_2,
          struct snd_ctl_elem_value *VAR_3)
{
 struct hda_codec *VAR_4 = FUNC_1(VAR_2);
 struct hda_gen_spec *VAR_5 = VAR_4->spec;
 const struct auto_pin_cfg *VAR_6 = &VAR_5->autocfg;
 unsigned int VAR_7 = VAR_3->value.enumerated.item[0];

 if (VAR_7 == VAR_5->aamix_mode)
  return 0;
 VAR_5->aamix_mode = VAR_7;
 if (FUNC_0(VAR_5)) {
  FUNC_2(VAR_4, VAR_7, VAR_5->out_paths[0],
       VAR_5->aamix_out_paths[0],
       VAR_6->line_out_type);
  FUNC_2(VAR_4, VAR_7, VAR_5->hp_paths[0],
       VAR_5->aamix_out_paths[1],
       VAR_0);
  FUNC_2(VAR_4, VAR_7, VAR_5->speaker_paths[0],
       VAR_5->aamix_out_paths[2],
       VAR_1);
 } else {
  FUNC_3(VAR_4, VAR_6->line_outs, VAR_5->out_paths);
  if (VAR_6->line_out_type != VAR_0)
   FUNC_3(VAR_4, VAR_6->hp_outs, VAR_5->hp_paths);
  if (VAR_6->line_out_type != VAR_1)
   FUNC_3(VAR_4, VAR_6->speaker_outs,
         VAR_5->speaker_paths);
 }
 return 1;
}
