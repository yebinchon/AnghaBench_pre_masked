
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_codec {int dummy; } ;
struct auto_pin_cfg {int num_inputs; scalar_t__* line_out_pins; int line_outs; scalar_t__* hp_pins; int hp_outs; scalar_t__* speaker_pins; int speaker_outs; scalar_t__* dig_out_pins; int dig_outs; scalar_t__ const dig_in_pin; scalar_t__ const mono_out_pin; TYPE_1__* inputs; } ;
typedef scalar_t__ hda_nid_t ;
struct TYPE_2__ {scalar_t__ const pin; scalar_t__ is_headphone_mic; } ;


 int FUNC_0 (struct hda_codec*,scalar_t__ const,struct auto_pin_cfg const*,char*) ;
 int FUNC_1 (struct auto_pin_cfg const*) ;
 scalar_t__ const* FUNC_2 (struct auto_pin_cfg const*) ;

int FUNC_3(struct hda_codec *VAR_0,
      const struct auto_pin_cfg *VAR_1)
{
 const hda_nid_t *VAR_2;
 int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_1->num_inputs; VAR_3++) {


  if (VAR_1->inputs[VAR_3].is_headphone_mic) {
   if (FUNC_1(VAR_1) == 1)
    VAR_4 = FUNC_0(VAR_0, FUNC_2(VAR_1)[0],
          VAR_1, "Headphone Mic");
   else
    VAR_4 = FUNC_0(VAR_0, VAR_1->inputs[VAR_3].pin,
          VAR_1, "Headphone Mic");
  } else
   VAR_4 = FUNC_0(VAR_0, VAR_1->inputs[VAR_3].pin, VAR_1,
         ((void*)0));
  if (VAR_4 < 0)
   return VAR_4;
 }

 for (VAR_3 = 0, VAR_2 = VAR_1->line_out_pins; VAR_3 < VAR_1->line_outs; VAR_3++, VAR_2++) {
  VAR_4 = FUNC_0(VAR_0, *VAR_2, VAR_1, ((void*)0));
  if (VAR_4 < 0)
   return VAR_4;
 }
 for (VAR_3 = 0, VAR_2 = VAR_1->hp_pins; VAR_3 < VAR_1->hp_outs; VAR_3++, VAR_2++) {
  if (*VAR_2 == *VAR_1->line_out_pins)
   break;
  VAR_4 = FUNC_0(VAR_0, *VAR_2, VAR_1, ((void*)0));
  if (VAR_4 < 0)
   return VAR_4;
 }
 for (VAR_3 = 0, VAR_2 = VAR_1->speaker_pins; VAR_3 < VAR_1->speaker_outs; VAR_3++, VAR_2++) {
  if (*VAR_2 == *VAR_1->line_out_pins)
   break;
  VAR_4 = FUNC_0(VAR_0, *VAR_2, VAR_1, ((void*)0));
  if (VAR_4 < 0)
   return VAR_4;
 }
 for (VAR_3 = 0, VAR_2 = VAR_1->dig_out_pins; VAR_3 < VAR_1->dig_outs; VAR_3++, VAR_2++) {
  VAR_4 = FUNC_0(VAR_0, *VAR_2, VAR_1, ((void*)0));
  if (VAR_4 < 0)
   return VAR_4;
 }
 VAR_4 = FUNC_0(VAR_0, VAR_1->dig_in_pin, VAR_1, ((void*)0));
 if (VAR_4 < 0)
  return VAR_4;
 VAR_4 = FUNC_0(VAR_0, VAR_1->mono_out_pin, VAR_1, ((void*)0));
 if (VAR_4 < 0)
  return VAR_4;
 return 0;
}
