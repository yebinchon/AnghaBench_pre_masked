
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nid_path {scalar_t__ active; } ;
struct hda_input_mux {unsigned int num_items; } ;
struct hda_gen_spec {unsigned int* cur_mux; int (* cap_sync_hook ) (struct hda_codec*,int *,int *) ;scalar_t__ dyn_adc_switch; scalar_t__ hp_mic; struct hda_input_mux input_mux; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;


 int FUNC_0 (struct hda_codec*,unsigned int) ;
 struct nid_path* FUNC_1 (struct hda_codec*,unsigned int,unsigned int) ;
 int FUNC_2 (struct hda_codec*,struct nid_path*) ;
 int FUNC_3 (struct hda_codec*,struct nid_path*,int,int) ;
 int FUNC_4 (struct hda_codec*,int *,int *) ;
 int FUNC_5 (struct hda_codec*,unsigned int,int) ;

__attribute__((used)) static int FUNC_6(struct hda_codec *VAR_0, unsigned int VAR_1,
        unsigned int VAR_2)
{
 struct hda_gen_spec *VAR_3 = VAR_0->spec;
 const struct hda_input_mux *VAR_4;
 struct nid_path *VAR_5, *VAR_6;

 VAR_4 = &VAR_3->input_mux;
 if (!VAR_4->num_items)
  return 0;

 if (VAR_2 >= VAR_4->num_items)
  VAR_2 = VAR_4->num_items - 1;
 if (VAR_3->cur_mux[VAR_1] == VAR_2)
  return 0;

 VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_3->cur_mux[VAR_1]);
 if (!VAR_5)
  return 0;
 if (VAR_5->active)
  FUNC_3(VAR_0, VAR_5, 0, 0);

 VAR_3->cur_mux[VAR_1] = VAR_2;

 if (VAR_3->hp_mic)
  FUNC_5(VAR_0, VAR_1, 0);

 if (VAR_3->dyn_adc_switch)
  FUNC_0(VAR_0, VAR_2);

 VAR_6 = FUNC_1(VAR_0, VAR_1, VAR_2);
 if (!VAR_6)
  return 0;
 if (VAR_6->active)
  return 0;
 FUNC_3(VAR_0, VAR_6, 1, 0);
 if (VAR_3->cap_sync_hook)
  VAR_3->cap_sync_hook(VAR_0, ((void*)0), ((void*)0));
 FUNC_2(VAR_0, VAR_5);
 return 1;
}
