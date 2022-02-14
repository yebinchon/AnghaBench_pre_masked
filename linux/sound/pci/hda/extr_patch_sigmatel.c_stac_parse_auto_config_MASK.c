
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int hook; } ;
struct TYPE_7__ {scalar_t__ beep_nid; TYPE_2__ vmaster_mute; int autocfg; int automute_hook; int pcm_capture_hook; int pcm_playback_hook; } ;
struct sigmatel_spec {scalar_t__ anabeep_nid; scalar_t__ have_spdif_mux; TYPE_4__* aloopback_ctl; TYPE_3__ gen; scalar_t__ gpio_led; int linear_tone_beep; scalar_t__ vref_mute_led_nid; scalar_t__ headset_jack; } ;
struct hda_codec {int core; TYPE_1__* beep; struct sigmatel_spec* spec; } ;
typedef scalar_t__ hda_nid_t ;
struct TYPE_8__ {int private_value; } ;
struct TYPE_5__ {int linear_tone; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (struct hda_codec*,scalar_t__,int ) ;
 int FUNC_1 (TYPE_3__*,int *,TYPE_4__*) ;
 int FUNC_2 (struct hda_codec*,scalar_t__) ;
 int FUNC_3 (struct hda_codec*,int *) ;
 int FUNC_4 (struct hda_codec*,char*) ;
 int FUNC_5 (struct hda_codec*,int *,int *,int) ;
 scalar_t__ FUNC_6 (int *,unsigned int) ;
 int FUNC_7 (struct hda_codec*,scalar_t__) ;
 int FUNC_8 (struct hda_codec*) ;
 int VAR_4 ;
 int FUNC_9 (struct hda_codec*) ;
 int FUNC_10 (struct hda_codec*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_11(struct hda_codec *VAR_8)
{
 struct sigmatel_spec *VAR_9 = VAR_8->spec;
 int VAR_10;
 int VAR_11 = 0;

 if (VAR_9->headset_jack)
  VAR_11 |= VAR_3;

 VAR_10 = FUNC_5(VAR_8, &VAR_9->gen.autocfg, ((void*)0), VAR_11);
 if (VAR_10 < 0)
  return VAR_10;


 VAR_9->gen.pcm_playback_hook = VAR_5;
 VAR_9->gen.pcm_capture_hook = VAR_4;

 VAR_9->gen.automute_hook = VAR_6;

 VAR_10 = FUNC_3(VAR_8, &VAR_9->gen.autocfg);
 if (VAR_10 < 0)
  return VAR_10;

 if (VAR_9->vref_mute_led_nid) {
  VAR_10 = FUNC_2(VAR_8, VAR_9->vref_mute_led_nid);
  if (VAR_10 < 0)
   return VAR_10;
 }


 if (VAR_9->anabeep_nid > 0) {
  VAR_10 = FUNC_7(VAR_8,
       VAR_9->anabeep_nid);
  if (VAR_10 < 0)
   return VAR_10;
 }
 if (VAR_9->gpio_led)
  VAR_9->gen.vmaster_mute.hook = VAR_7;

 if (VAR_9->aloopback_ctl &&
     FUNC_4(VAR_8, "loopback") == 1) {
  unsigned int VAR_12 =
   VAR_9->aloopback_ctl->private_value >> 16;
  if (FUNC_6(&VAR_8->core, VAR_12))
   return -VAR_1;
  if (!FUNC_1(&VAR_9->gen, ((void*)0), VAR_9->aloopback_ctl))
   return -VAR_1;
 }

 if (VAR_9->have_spdif_mux) {
  VAR_10 = FUNC_9(VAR_8);
  if (VAR_10 < 0)
   return VAR_10;
 }

 FUNC_10(VAR_8);

 return 0;
}
