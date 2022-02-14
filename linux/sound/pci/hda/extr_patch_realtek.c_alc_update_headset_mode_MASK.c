
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_codec {struct alc_spec* spec; } ;
struct TYPE_2__ {scalar_t__* imux_pins; size_t* cur_mux; int hp_jack_present; } ;
struct alc_spec {scalar_t__ headset_mic_pin; scalar_t__ headphone_mic_pin; int current_headset_mode; TYPE_1__ gen; int current_headset_type; } ;
typedef scalar_t__ hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct hda_codec*) ;
 scalar_t__ FUNC_1 (struct alc_spec*) ;
 int FUNC_2 (struct hda_codec*) ;
 int FUNC_3 (struct hda_codec*) ;
 int FUNC_4 (struct hda_codec*,scalar_t__,scalar_t__) ;
 int FUNC_5 (struct hda_codec*) ;
 int FUNC_6 (struct hda_codec*) ;
 int FUNC_7 (struct hda_codec*) ;
 int FUNC_8 (struct hda_codec*,scalar_t__) ;
 int FUNC_9 (struct hda_codec*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_10(struct hda_codec *VAR_7)
{
 struct alc_spec *VAR_8 = VAR_7->spec;

 hda_nid_t VAR_9 = VAR_8->gen.imux_pins[VAR_8->gen.cur_mux[0]];
 hda_nid_t VAR_10 = FUNC_1(VAR_8);

 int VAR_11;

 if (!FUNC_8(VAR_7, VAR_10))
  VAR_11 = 128;
 else if (VAR_9 == VAR_8->headset_mic_pin)
  VAR_11 = 130;
 else if (VAR_9 == VAR_8->headphone_mic_pin)
  VAR_11 = 129;
 else
  VAR_11 = 131;

 if (VAR_11 == VAR_8->current_headset_mode) {
  FUNC_7(VAR_7);
  return;
 }

 switch (VAR_11) {
 case 128:
  FUNC_6(VAR_7);
  VAR_8->current_headset_mode = VAR_2;
  VAR_8->current_headset_type = VAR_5;
  VAR_8->gen.hp_jack_present = 0;
  break;
 case 130:
  if (VAR_8->current_headset_type == VAR_5)
   FUNC_0(VAR_7);
  if (VAR_8->current_headset_type == VAR_3)
   FUNC_2(VAR_7);
  else if (VAR_8->current_headset_type == VAR_4)
   FUNC_5(VAR_7);
  VAR_8->gen.hp_jack_present = 1;
  break;
 case 129:
  FUNC_4(VAR_7, VAR_10, VAR_8->headphone_mic_pin);
  VAR_8->gen.hp_jack_present = 0;
  break;
 case 131:
  FUNC_3(VAR_7);
  VAR_8->gen.hp_jack_present = 1;
  break;
 }
 if (VAR_11 != 129) {
  FUNC_9(VAR_7, VAR_10,
       VAR_1 | VAR_0);
  if (VAR_8->headphone_mic_pin && VAR_8->headphone_mic_pin != VAR_10)
   FUNC_9(VAR_7, VAR_8->headphone_mic_pin,
        VAR_6);
 }
 VAR_8->current_headset_mode = VAR_11;

 FUNC_7(VAR_7);
}
