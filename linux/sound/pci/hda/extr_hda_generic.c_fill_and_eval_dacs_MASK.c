
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int num_dacs; void** extra_out_nid; void** hp_out_nid; void** dac_nids; } ;
struct auto_pin_cfg {int line_outs; int hp_outs; int speaker_outs; scalar_t__ line_out_type; int * hp_pins; int * line_out_pins; int * speaker_pins; } ;
struct hda_gen_spec {int multi_ios; int ext_channel_count; int min_channel_count; void** speaker_paths; TYPE_2__ multiout; void** hp_paths; scalar_t__ indep_hp; TYPE_1__* multi_io; void** private_dac_nids; int no_multi_io; void** aamix_out_paths; void** out_paths; scalar_t__ mixer_nid; int extra_out_badness; int main_out_badness; void* digin_path; void** loopback_paths; void** input_paths; void** digout_paths; int paths; struct auto_pin_cfg autocfg; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;
typedef int hda_nid_t ;
struct TYPE_3__ {void* dac; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 void* FUNC_0 (struct hda_codec*,void*) ;
 int FUNC_1 (struct hda_codec*,int ) ;
 int FUNC_2 (struct hda_codec*,int ,int) ;
 int FUNC_3 (struct hda_codec*) ;
 int FUNC_4 (struct hda_codec*,int,int *,void**,void**) ;
 int FUNC_5 (void**,void**,int) ;
 int FUNC_6 (void**,int ,int) ;
 int FUNC_7 (struct hda_codec*,int,void**,void**) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct hda_codec*,int,int *,void**,void**,int ) ;

__attribute__((used)) static int FUNC_10(struct hda_codec *VAR_4,
         bool VAR_5,
         bool VAR_6)
{
 struct hda_gen_spec *VAR_7 = VAR_4->spec;
 struct auto_pin_cfg *VAR_8 = &VAR_7->autocfg;
 int VAR_9, VAR_10, VAR_11;


 VAR_7->multiout.num_dacs = VAR_8->line_outs;
 VAR_7->multiout.dac_nids = VAR_7->private_dac_nids;
 FUNC_6(VAR_7->private_dac_nids, 0, sizeof(VAR_7->private_dac_nids));
 FUNC_6(VAR_7->multiout.hp_out_nid, 0, sizeof(VAR_7->multiout.hp_out_nid));
 FUNC_6(VAR_7->multiout.extra_out_nid, 0, sizeof(VAR_7->multiout.extra_out_nid));
 VAR_7->multi_ios = 0;
 FUNC_8(&VAR_7->paths);


 FUNC_6(VAR_7->out_paths, 0, sizeof(VAR_7->out_paths));
 FUNC_6(VAR_7->hp_paths, 0, sizeof(VAR_7->hp_paths));
 FUNC_6(VAR_7->speaker_paths, 0, sizeof(VAR_7->speaker_paths));
 FUNC_6(VAR_7->aamix_out_paths, 0, sizeof(VAR_7->aamix_out_paths));
 FUNC_6(VAR_7->digout_paths, 0, sizeof(VAR_7->digout_paths));
 FUNC_6(VAR_7->input_paths, 0, sizeof(VAR_7->input_paths));
 FUNC_6(VAR_7->loopback_paths, 0, sizeof(VAR_7->loopback_paths));
 FUNC_6(&VAR_7->digin_path, 0, sizeof(VAR_7->digin_path));

 VAR_11 = 0;


 if (VAR_5) {
  bool VAR_12;
  do {
   VAR_12 = FUNC_4(VAR_4, VAR_8->line_outs,
          VAR_8->line_out_pins,
          VAR_7->private_dac_nids,
          VAR_7->out_paths);
   VAR_12 |= FUNC_4(VAR_4, VAR_8->hp_outs,
           VAR_8->hp_pins,
           VAR_7->multiout.hp_out_nid,
           VAR_7->hp_paths);
   VAR_12 |= FUNC_4(VAR_4, VAR_8->speaker_outs,
           VAR_8->speaker_pins,
           VAR_7->multiout.extra_out_nid,
           VAR_7->speaker_paths);
   if (!VAR_7->no_multi_io &&
       VAR_6 && VAR_8->line_outs == 1 &&
       VAR_8->line_out_type != VAR_1) {
    VAR_10 = FUNC_2(VAR_4, VAR_8->line_out_pins[0], 1);
    if (!VAR_10)
     VAR_12 = 1;
   }
  } while (VAR_12);
 }

 VAR_11 += FUNC_9(VAR_4, VAR_8->line_outs, VAR_8->line_out_pins,
       VAR_7->private_dac_nids, VAR_7->out_paths,
       VAR_7->main_out_badness);

 if (!VAR_7->no_multi_io && VAR_6 &&
     VAR_8->line_outs == 1 && VAR_8->line_out_type != VAR_1) {

  VAR_10 = FUNC_2(VAR_4, VAR_8->line_out_pins[0], 0);
  if (VAR_10 < 0)
   return VAR_10;

 }

 if (VAR_8->line_out_type != VAR_0) {
  VAR_10 = FUNC_9(VAR_4, VAR_8->hp_outs, VAR_8->hp_pins,
          VAR_7->multiout.hp_out_nid,
          VAR_7->hp_paths,
          VAR_7->extra_out_badness);
  if (VAR_10 < 0)
   return VAR_10;
  VAR_11 += VAR_10;
 }
 if (VAR_8->line_out_type != VAR_1) {
  VAR_10 = FUNC_9(VAR_4, VAR_8->speaker_outs,
          VAR_8->speaker_pins,
          VAR_7->multiout.extra_out_nid,
          VAR_7->speaker_paths,
          VAR_7->extra_out_badness);
  if (VAR_10 < 0)
   return VAR_10;
  VAR_11 += VAR_10;
 }
 if (!VAR_7->no_multi_io &&
     VAR_8->line_outs == 1 && VAR_8->line_out_type != VAR_1) {
  VAR_10 = FUNC_2(VAR_4, VAR_8->line_out_pins[0], 0);
  if (VAR_10 < 0)
   return VAR_10;
  VAR_11 += VAR_10;
 }

 if (VAR_7->mixer_nid) {
  VAR_7->aamix_out_paths[0] =
   FUNC_0(VAR_4, VAR_7->out_paths[0]);
  if (VAR_8->line_out_type != VAR_0)
   VAR_7->aamix_out_paths[1] =
    FUNC_0(VAR_4, VAR_7->hp_paths[0]);
  if (VAR_8->line_out_type != VAR_1)
   VAR_7->aamix_out_paths[2] =
    FUNC_0(VAR_4, VAR_7->speaker_paths[0]);
 }

 if (!VAR_7->no_multi_io &&
     VAR_8->hp_outs && VAR_8->line_out_type == VAR_1)
  if (FUNC_1(VAR_4, VAR_8->hp_pins[0]) >= 2)
   VAR_7->multi_ios = 1;


 VAR_7->multiout.num_dacs = 0;
 for (VAR_9 = 0; VAR_9 < VAR_8->line_outs; VAR_9++) {
  if (VAR_7->private_dac_nids[VAR_9])
   VAR_7->multiout.num_dacs++;
  else {
   FUNC_5(VAR_7->private_dac_nids + VAR_9,
    VAR_7->private_dac_nids + VAR_9 + 1,
    sizeof(hda_nid_t) * (VAR_8->line_outs - VAR_9 - 1));
   VAR_7->private_dac_nids[VAR_8->line_outs - 1] = 0;
  }
 }

 VAR_7->ext_channel_count = VAR_7->min_channel_count =
  VAR_7->multiout.num_dacs * 2;

 if (VAR_7->multi_ios == 2) {
  for (VAR_9 = 0; VAR_9 < 2; VAR_9++)
   VAR_7->private_dac_nids[VAR_7->multiout.num_dacs++] =
    VAR_7->multi_io[VAR_9].dac;
 } else if (VAR_7->multi_ios) {
  VAR_7->multi_ios = 0;
  VAR_11 += VAR_2;
 }

 if (VAR_7->indep_hp && !FUNC_3(VAR_4))
  VAR_11 += VAR_3;


 if (VAR_8->line_out_type != VAR_0)
  FUNC_7(VAR_4, VAR_8->hp_outs,
       VAR_7->multiout.hp_out_nid,
       VAR_7->hp_paths);
 if (VAR_8->line_out_type != VAR_1)
  FUNC_7(VAR_4, VAR_8->speaker_outs,
       VAR_7->multiout.extra_out_nid,
       VAR_7->speaker_paths);

 return VAR_11;
}
