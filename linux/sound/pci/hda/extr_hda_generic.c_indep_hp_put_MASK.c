
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_5__ {unsigned int* item; } ;
struct TYPE_6__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct TYPE_8__ {scalar_t__ line_out_type; } ;
struct TYPE_7__ {scalar_t__* hp_out_nid; } ;
struct hda_gen_spec {unsigned int indep_hp_enabled; int pcm_mutex; scalar_t__ alt_dac_nid; int * aamix_out_paths; int * hp_paths; int aamix_mode; TYPE_4__ autocfg; int * out_paths; scalar_t__ have_aamix_ctl; TYPE_3__ multiout; scalar_t__* private_dac_nids; scalar_t__ active_streams; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;
typedef scalar_t__ hda_nid_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hda_codec*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct hda_codec* FUNC_3 (struct snd_kcontrol*) ;
 int FUNC_4 (struct hda_codec*,int ,int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_2,
   struct snd_ctl_elem_value *VAR_3)
{
 struct hda_codec *VAR_4 = FUNC_3(VAR_2);
 struct hda_gen_spec *VAR_5 = VAR_4->spec;
 unsigned int VAR_6 = VAR_3->value.enumerated.item[0];
 int VAR_7 = 0;

 FUNC_1(&VAR_5->pcm_mutex);
 if (VAR_5->active_streams) {
  VAR_7 = -VAR_1;
  goto unlock;
 }

 if (VAR_5->indep_hp_enabled != VAR_6) {
  hda_nid_t *VAR_8;
  if (VAR_5->autocfg.line_out_type == VAR_0)
   VAR_8 = &VAR_5->private_dac_nids[0];
  else
   VAR_8 = &VAR_5->multiout.hp_out_nid[0];


  if (VAR_5->have_aamix_ctl) {
   if (VAR_5->autocfg.line_out_type == VAR_0)
    FUNC_4(VAR_4, VAR_5->aamix_mode,
         VAR_5->out_paths[0],
         VAR_5->aamix_out_paths[0],
         VAR_5->autocfg.line_out_type);
   else
    FUNC_4(VAR_4, VAR_5->aamix_mode,
         VAR_5->hp_paths[0],
         VAR_5->aamix_out_paths[1],
         VAR_0);
  }

  VAR_5->indep_hp_enabled = VAR_6;
  if (VAR_5->indep_hp_enabled)
   *VAR_8 = 0;
  else
   *VAR_8 = VAR_5->alt_dac_nid;

  FUNC_0(VAR_4, ((void*)0));
  VAR_7 = 1;
 }
 unlock:
 FUNC_2(&VAR_5->pcm_mutex);
 return VAR_7;
}
