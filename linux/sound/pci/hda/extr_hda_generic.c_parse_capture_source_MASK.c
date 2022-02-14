
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nid_path {int dummy; } ;
struct hda_input_mux {int num_items; } ;
struct hda_gen_spec {scalar_t__* adc_nids; scalar_t__ hp_mic_pin; int hp_mic_mux_idx; int* dyn_adc_idx; scalar_t__ dyn_adc_switch; scalar_t__* imux_pins; int ** input_paths; struct hda_input_mux input_mux; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;
typedef scalar_t__ hda_nid_t ;


 int FUNC_0 (struct hda_codec*,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct hda_codec*,char*,struct nid_path*) ;
 int FUNC_2 (struct hda_codec*,struct hda_input_mux*,char const*,int,int *) ;
 struct nid_path* FUNC_3 (struct hda_codec*,scalar_t__,scalar_t__,int) ;
 int FUNC_4 (struct hda_codec*,struct nid_path*) ;

__attribute__((used)) static int FUNC_5(struct hda_codec *VAR_0, hda_nid_t VAR_1,
    int VAR_2, int VAR_3,
    const char *VAR_4, int VAR_5)
{
 struct hda_gen_spec *VAR_6 = VAR_0->spec;
 struct hda_input_mux *VAR_7 = &VAR_6->input_mux;
 int VAR_8 = VAR_7->num_items;
 bool VAR_9 = 0;
 int VAR_10;

 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
  struct nid_path *VAR_11;
  hda_nid_t VAR_12 = VAR_6->adc_nids[VAR_10];

  if (!FUNC_0(VAR_0, VAR_1, VAR_12))
   continue;
  VAR_11 = FUNC_3(VAR_0, VAR_1, VAR_12, VAR_5);
  if (!VAR_11)
   continue;
  FUNC_1(VAR_0, "input", VAR_11);
  VAR_6->input_paths[VAR_8][VAR_10] =
   FUNC_4(VAR_0, VAR_11);

  if (!VAR_9) {
   if (VAR_6->hp_mic_pin == VAR_1)
    VAR_6->hp_mic_mux_idx = VAR_7->num_items;
   VAR_6->imux_pins[VAR_7->num_items] = VAR_1;
   FUNC_2(VAR_0, VAR_7, VAR_4, VAR_2, ((void*)0));
   VAR_9 = 1;
   if (VAR_6->dyn_adc_switch)
    VAR_6->dyn_adc_idx[VAR_8] = VAR_10;
  }
 }

 return 0;
}
