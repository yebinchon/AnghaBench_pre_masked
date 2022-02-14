
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int index; } ;
struct snd_kcontrol {scalar_t__ private_value; TYPE_1__ id; } ;
struct snd_ctl_elem_value {int dummy; } ;
struct nid_path {scalar_t__* ctls; } ;
struct hda_input_mux {int num_items; } ;
struct hda_gen_spec {int (* cap_sync_hook ) (struct hda_codec*,struct snd_kcontrol*,struct snd_ctl_elem_value*) ;struct hda_input_mux input_mux; } ;
struct hda_codec {int control_mutex; struct hda_gen_spec* spec; } ;
typedef int (* put_call_t ) (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;


 struct nid_path* FUNC_0 (struct hda_codec*,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct hda_codec* FUNC_3 (struct snd_kcontrol*) ;
 int FUNC_4 (struct hda_codec*,struct snd_kcontrol*,struct snd_ctl_elem_value*) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_0,
     struct snd_ctl_elem_value *VAR_1,
     put_call_t VAR_2, int VAR_3)
{
 struct hda_codec *VAR_4 = FUNC_3(VAR_0);
 struct hda_gen_spec *VAR_5 = VAR_4->spec;
 const struct hda_input_mux *VAR_6;
 struct nid_path *VAR_7;
 int VAR_8, VAR_9, VAR_10 = 0;

 VAR_6 = &VAR_5->input_mux;
 VAR_9 = VAR_0->id.index;
 FUNC_1(&VAR_4->control_mutex);
 for (VAR_8 = 0; VAR_8 < VAR_6->num_items; VAR_8++) {
  VAR_7 = FUNC_0(VAR_4, VAR_9, VAR_8);
  if (!VAR_7 || !VAR_7->ctls[VAR_3])
   continue;
  VAR_0->private_value = VAR_7->ctls[VAR_3];
  VAR_10 = VAR_2(VAR_0, VAR_1);
  if (VAR_10 < 0)
   break;
 }
 FUNC_2(&VAR_4->control_mutex);
 if (VAR_10 >= 0 && VAR_5->cap_sync_hook)
  VAR_5->cap_sync_hook(VAR_4, VAR_0, VAR_1);
 return VAR_10;
}
