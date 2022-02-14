
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_input_mux {int num_items; } ;
struct hda_gen_spec {int am_num_entries; TYPE_1__* am_entry; int imux_pins; struct hda_input_mux input_mux; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;
struct TYPE_2__ {scalar_t__ idx; int pin; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct hda_codec*,int ,int ) ;

__attribute__((used)) static bool FUNC_2(struct hda_codec *VAR_1)
{
 struct hda_gen_spec *VAR_2 = VAR_1->spec;
 const struct hda_input_mux *VAR_3;
 int VAR_4;

 VAR_3 = &VAR_2->input_mux;
 for (VAR_4 = 0; VAR_4 < VAR_2->am_num_entries; VAR_4++) {
  VAR_2->am_entry[VAR_4].idx =
   FUNC_0(VAR_2->am_entry[VAR_4].pin,
          VAR_2->imux_pins, VAR_3->num_items);
  if (VAR_2->am_entry[VAR_4].idx < 0)
   return 0;
 }


 for (VAR_4 = 1; VAR_4 < VAR_2->am_num_entries; VAR_4++)
  FUNC_1(VAR_1,
          VAR_2->am_entry[VAR_4].pin,
          VAR_0);
 return 1;
}
