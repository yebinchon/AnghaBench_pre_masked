
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct auto_pin_cfg {int num_inputs; TYPE_1__* inputs; } ;
struct hda_gen_spec {char const** input_labels; int* input_label_idxs; struct auto_pin_cfg autocfg; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;
typedef int hda_nid_t ;
struct TYPE_2__ {int pin; } ;


 char* FUNC_0 (struct hda_codec*,struct auto_pin_cfg const*,int) ;
 int FUNC_1 (struct hda_codec*,int ) ;
 int FUNC_2 (char const*,char const*) ;

__attribute__((used)) static int FUNC_3(struct hda_codec *VAR_0)
{
 struct hda_gen_spec *VAR_1 = VAR_0->spec;
 const struct auto_pin_cfg *VAR_2 = &VAR_1->autocfg;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->num_inputs; VAR_3++) {
  hda_nid_t VAR_4 = VAR_2->inputs[VAR_3].pin;
  const char *VAR_5;
  int VAR_6, VAR_7;

  if (!FUNC_1(VAR_0, VAR_4))
   continue;

  VAR_5 = FUNC_0(VAR_0, VAR_2, VAR_3);
  VAR_7 = 0;
  for (VAR_6 = VAR_3 - 1; VAR_6 >= 0; VAR_6--) {
   if (VAR_1->input_labels[VAR_6] &&
       !FUNC_2(VAR_1->input_labels[VAR_6], VAR_5)) {
    VAR_7 = VAR_1->input_label_idxs[VAR_6] + 1;
    break;
   }
  }

  VAR_1->input_labels[VAR_3] = VAR_5;
  VAR_1->input_label_idxs[VAR_3] = VAR_7;
 }

 return 0;
}
