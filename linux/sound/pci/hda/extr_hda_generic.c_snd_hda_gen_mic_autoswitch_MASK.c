
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_jack_callback {int dummy; } ;
struct hda_gen_spec {int am_num_entries; TYPE_1__* am_entry; int auto_mic; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;
typedef int hda_nid_t ;
struct TYPE_2__ {int idx; int pin; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct hda_codec*,int ,int ) ;
 int FUNC_1 (struct hda_codec*,int ) ;
 scalar_t__ FUNC_2 (struct hda_codec*,int ) ;

void FUNC_3(struct hda_codec *VAR_2,
    struct hda_jack_callback *VAR_3)
{
 struct hda_gen_spec *VAR_4 = VAR_2->spec;
 int VAR_5;

 if (!VAR_4->auto_mic)
  return;

 for (VAR_5 = VAR_4->am_num_entries - 1; VAR_5 > 0; VAR_5--) {
  hda_nid_t VAR_6 = VAR_4->am_entry[VAR_5].pin;

  if (FUNC_1(VAR_2, VAR_6) & VAR_0)
   continue;
  if (FUNC_2(VAR_2, VAR_6) == VAR_1) {
   FUNC_0(VAR_2, 0, VAR_4->am_entry[VAR_5].idx);
   return;
  }
 }
 FUNC_0(VAR_2, 0, VAR_4->am_entry[0].idx);
}
