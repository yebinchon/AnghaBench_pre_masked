
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_input_mux {int num_items; } ;
struct hda_fixup {int dummy; } ;
struct hda_codec {struct alc_spec* spec; } ;
struct TYPE_2__ {int* imux_pins; int* cur_mux; struct hda_input_mux input_mux; } ;
struct alc_spec {TYPE_1__ gen; int shutup; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hda_codec*,int,int ) ;

__attribute__((used)) static void FUNC_1(struct hda_codec *VAR_2,
    const struct hda_fixup *VAR_3, int VAR_4)
{
 struct alc_spec *VAR_5 = VAR_2->spec;
 struct hda_input_mux *VAR_6 = &VAR_5->gen.input_mux;
 int VAR_7;

 switch (VAR_4) {
 case 129:



  FUNC_0(VAR_2, 0x19, VAR_0);
  VAR_5->shutup = VAR_1;
  break;
 case 128:

  for (VAR_7 = 0; VAR_7 < VAR_6->num_items; VAR_7++) {
   if (VAR_5->gen.imux_pins[VAR_7] == 0x12) {
    VAR_5->gen.cur_mux[0] = VAR_7;
    break;
   }
  }
  break;
 }
}
