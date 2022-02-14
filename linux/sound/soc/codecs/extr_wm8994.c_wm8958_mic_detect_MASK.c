
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ wm1811_micdet_cb ;
typedef scalar_t__ wm1811_mic_id_cb ;
typedef int u16 ;
struct wm8994_priv {int mic_detecting; int jack_mic; int btn_mask; scalar_t__ jackdet; struct snd_soc_component* mic_id_cb_data; scalar_t__ mic_id_cb; void* micd_cb_data; scalar_t__ micd_cb; TYPE_1__* micdet; struct wm8994* wm8994; } ;
struct TYPE_4__ {int micd_lvl_sel; } ;
struct wm8994 {int type; TYPE_2__ pdata; } ;
struct snd_soc_jack {int dummy; } ;
struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct TYPE_3__ {struct snd_soc_jack* jack; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int) ;

 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_1 (struct snd_soc_component*) ;
 struct snd_soc_dapm_context* FUNC_2 (struct snd_soc_component*) ;
 struct wm8994_priv* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_5 (struct snd_soc_dapm_context*,char*) ;
 int FUNC_6 (struct snd_soc_dapm_context*,char*) ;
 int FUNC_7 (struct snd_soc_dapm_context*) ;
 int FUNC_8 (struct snd_soc_component*,int ) ;
 scalar_t__ VAR_20 ;
 int FUNC_9 (struct snd_soc_component*) ;

int FUNC_10(struct snd_soc_component *VAR_21, struct snd_soc_jack *VAR_22,
        wm1811_micdet_cb VAR_23, void *VAR_24,
        wm1811_mic_id_cb VAR_25, void *VAR_26)
{
 struct snd_soc_dapm_context *VAR_27 = FUNC_2(VAR_21);
 struct wm8994_priv *VAR_28 = FUNC_3(VAR_21);
 struct wm8994 *VAR_29 = VAR_28->wm8994;
 u16 VAR_30;

 switch (VAR_29->type) {
 case 129:
 case 128:
  break;
 default:
  return -VAR_0;
 }

 if (VAR_22) {
  FUNC_6(VAR_27, "CLK_SYS");
  FUNC_7(VAR_27);

  VAR_28->micdet[0].jack = VAR_22;

  if (VAR_23) {
   VAR_28->micd_cb = VAR_23;
   VAR_28->micd_cb_data = VAR_24;
  } else {
   VAR_28->mic_detecting = 1;
   VAR_28->jack_mic = 0;
  }

  if (VAR_25) {
   VAR_28->mic_id_cb = VAR_25;
   VAR_28->mic_id_cb_data = VAR_26;
  } else {
   VAR_28->mic_id_cb = VAR_20;
   VAR_28->mic_id_cb_data = VAR_21;
  }

  FUNC_9(VAR_21);


  if (VAR_29->pdata.micd_lvl_sel)
   VAR_30 = VAR_29->pdata.micd_lvl_sel;
  else
   VAR_30 = 0x41;

  VAR_28->btn_mask = VAR_1 | VAR_2 |
   VAR_3 | VAR_4 |
   VAR_5 | VAR_6;

  FUNC_4(VAR_21, VAR_17,
        VAR_15, VAR_30);

  FUNC_0(FUNC_1(VAR_21) > VAR_7);





  if (VAR_28->jackdet) {

   FUNC_4(VAR_21, VAR_8,
         VAR_9, 0);

   FUNC_4(VAR_21, VAR_13,
         VAR_12,
         VAR_12);
   FUNC_4(VAR_21, VAR_19,
         VAR_18, 0);
   FUNC_8(VAR_21,
      VAR_10);
  } else {
   FUNC_4(VAR_21, VAR_16,
         VAR_14, VAR_14);
  }

 } else {
  FUNC_4(VAR_21, VAR_16,
        VAR_14, 0);
  FUNC_8(VAR_21, VAR_11);
  FUNC_5(VAR_27, "CLK_SYS");
  FUNC_7(VAR_27);
 }

 return 0;
}
