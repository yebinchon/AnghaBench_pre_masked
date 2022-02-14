
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hda_codec {struct cs_spec* spec; } ;
struct TYPE_3__ {int num_items; } ;
struct TYPE_4__ {int* dyn_adc_idx; int * adc_nids; TYPE_1__ input_mux; scalar_t__ dyn_adc_switch; int autocfg; } ;
struct cs_spec {TYPE_2__ gen; } ;


 int FUNC_0 (struct hda_codec*,int ) ;
 int FUNC_1 (struct hda_codec*,int *) ;
 int FUNC_2 (struct hda_codec*,int *,int *,int ) ;

__attribute__((used)) static int FUNC_3(struct hda_codec *VAR_0)
{
 struct cs_spec *VAR_1 = VAR_0->spec;
 int VAR_2;
 int VAR_3;

 VAR_2 = FUNC_2(VAR_0, &VAR_1->gen.autocfg, ((void*)0), 0);
 if (VAR_2 < 0)
  return VAR_2;

 VAR_2 = FUNC_1(VAR_0, &VAR_1->gen.autocfg);
 if (VAR_2 < 0)
  return VAR_2;


 if (VAR_1->gen.dyn_adc_switch) {
  unsigned int VAR_4 = 0;
  for (VAR_3 = 0; VAR_3 < VAR_1->gen.input_mux.num_items; VAR_3++) {
   int VAR_5 = VAR_1->gen.dyn_adc_idx[VAR_3];
   if (VAR_4 & (1 << VAR_5))
    continue;
   FUNC_0(VAR_0,
        VAR_1->gen.adc_nids[VAR_5]);
   VAR_4 |= 1 << VAR_5;
  }
 }

 return 0;
}
