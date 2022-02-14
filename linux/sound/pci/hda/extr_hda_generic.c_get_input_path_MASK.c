
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nid_path {int dummy; } ;
struct hda_gen_spec {int* dyn_adc_idx; int ** input_paths; scalar_t__ dyn_adc_switch; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 struct nid_path* FUNC_1 (struct hda_codec*,int ) ;

__attribute__((used)) static struct nid_path *FUNC_2(struct hda_codec *VAR_2, int VAR_3, int VAR_4)
{
 struct hda_gen_spec *VAR_5 = VAR_2->spec;
 if (VAR_4 < 0 || VAR_4 >= VAR_1) {
  FUNC_0();
  return ((void*)0);
 }
 if (VAR_5->dyn_adc_switch)
  VAR_3 = VAR_5->dyn_adc_idx[VAR_4];
 if (VAR_3 < 0 || VAR_3 >= VAR_0) {
  FUNC_0();
  return ((void*)0);
 }
 return FUNC_1(VAR_2, VAR_5->input_paths[VAR_4][VAR_3]);
}
