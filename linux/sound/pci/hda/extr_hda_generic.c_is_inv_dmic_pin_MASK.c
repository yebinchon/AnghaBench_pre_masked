
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct auto_pin_cfg {int num_inputs; TYPE_1__* inputs; } ;
struct hda_gen_spec {int inv_dmic_split; struct auto_pin_cfg autocfg; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;
typedef scalar_t__ hda_nid_t ;
struct TYPE_2__ {scalar_t__ pin; scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_0 (struct hda_codec*,scalar_t__) ;
 scalar_t__ FUNC_1 (unsigned int) ;

__attribute__((used)) static bool FUNC_2(struct hda_codec *VAR_2, hda_nid_t VAR_3)
{
 struct hda_gen_spec *VAR_4 = VAR_2->spec;
 struct auto_pin_cfg *VAR_5 = &VAR_4->autocfg;
 unsigned int VAR_6;
 int VAR_7;

 if (!VAR_4->inv_dmic_split)
  return 0;
 for (VAR_7 = 0; VAR_7 < VAR_5->num_inputs; VAR_7++) {
  if (VAR_5->inputs[VAR_7].pin != VAR_3)
   continue;
  if (VAR_5->inputs[VAR_7].type != VAR_0)
   return 0;
  VAR_6 = FUNC_0(VAR_2, VAR_3);
  return FUNC_1(VAR_6) == VAR_1;
 }
 return 0;
}
