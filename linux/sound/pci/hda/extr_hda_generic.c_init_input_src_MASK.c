
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nid_path {int active; } ;
struct hda_input_mux {int num_items; } ;
struct hda_gen_spec {int num_adc_nids; int* cur_mux; int (* cap_sync_hook ) (struct hda_codec*,int *,int *) ;scalar_t__ hp_mic; scalar_t__ dyn_adc_switch; struct hda_input_mux input_mux; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;


 struct nid_path* FUNC_0 (struct hda_codec*,int,int) ;
 int FUNC_1 (struct hda_codec*,struct nid_path*,int,int) ;
 int FUNC_2 (struct hda_codec*,int *,int *) ;
 int FUNC_3 (struct hda_codec*,int,int) ;

__attribute__((used)) static void FUNC_4(struct hda_codec *VAR_0)
{
 struct hda_gen_spec *VAR_1 = VAR_0->spec;
 struct hda_input_mux *VAR_2 = &VAR_1->input_mux;
 struct nid_path *VAR_3;
 int VAR_4, VAR_5, VAR_6;

 if (VAR_1->dyn_adc_switch)
  VAR_6 = 1;
 else
  VAR_6 = VAR_1->num_adc_nids;

 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
  for (VAR_4 = 0; VAR_4 < VAR_2->num_items; VAR_4++) {
   VAR_3 = FUNC_0(VAR_0, VAR_5, VAR_4);
   if (VAR_3) {
    bool VAR_7 = VAR_3->active;
    if (VAR_4 == VAR_1->cur_mux[VAR_5])
     VAR_7 = 1;
    FUNC_1(VAR_0, VAR_3, VAR_7, 0);
   }
  }
  if (VAR_1->hp_mic)
   FUNC_3(VAR_0, VAR_5, 1);
 }

 if (VAR_1->cap_sync_hook)
  VAR_1->cap_sync_hook(VAR_0, ((void*)0), ((void*)0));
}
