
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hda_codec {struct alc_spec* spec; } ;
struct auto_pin_cfg {int num_inputs; TYPE_1__* inputs; } ;
struct TYPE_4__ {int hp_automute_hook; int automute_hook; int cap_sync_hook; struct auto_pin_cfg autocfg; } ;
struct alc_spec {TYPE_2__ gen; scalar_t__ headphone_mic_pin; scalar_t__ headset_mic_pin; } ;
struct TYPE_3__ {scalar_t__ pin; scalar_t__ is_headphone_mic; scalar_t__ is_headset_mic; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1(struct hda_codec *VAR_3)
{
 int VAR_4;
 struct alc_spec *VAR_5 = VAR_3->spec;
 struct auto_pin_cfg *VAR_6 = &VAR_5->gen.autocfg;


 for (VAR_4 = 0; VAR_4 < VAR_6->num_inputs; VAR_4++) {
  if (VAR_6->inputs[VAR_4].is_headset_mic && !VAR_5->headset_mic_pin)
   VAR_5->headset_mic_pin = VAR_6->inputs[VAR_4].pin;
  if (VAR_6->inputs[VAR_4].is_headphone_mic && !VAR_5->headphone_mic_pin)
   VAR_5->headphone_mic_pin = VAR_6->inputs[VAR_4].pin;
 }

 FUNC_0(VAR_5->gen.cap_sync_hook);
 VAR_5->gen.cap_sync_hook = VAR_2;
 VAR_5->gen.automute_hook = VAR_1;
 VAR_5->gen.hp_automute_hook = VAR_0;
}
