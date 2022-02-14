
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct wm8350_data {int supplies; struct wm8350* wm8350; } ;
struct wm8350_audio_platform_data {int codec_current_on; int dis_out1; int dis_out2; int dis_out3; int dis_out4; int vmid_s_curve; int codec_current_charge; int codec_current_standby; int drain_msecs; int vmid_discharge_msecs; int vmid_charge_msecs; int cap_discharge_msecs; } ;
struct TYPE_2__ {struct wm8350_audio_platform_data* platform_data; } ;
struct wm8350 {TYPE_1__ codec; } ;
struct snd_soc_component {int dummy; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;


 int FUNC_0 (int ) ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
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
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct snd_soc_component*) ;
 struct wm8350_data* FUNC_6 (struct snd_soc_component*) ;
 int FUNC_7 (struct wm8350*,int ,int) ;
 int FUNC_8 (struct wm8350*,int ) ;
 int FUNC_9 (struct wm8350*,int ,int) ;
 int FUNC_10 (struct wm8350*,int ,int) ;

__attribute__((used)) static int FUNC_11(struct snd_soc_component *VAR_24,
     enum snd_soc_bias_level VAR_25)
{
 struct wm8350_data *VAR_26 = FUNC_6(VAR_24);
 struct wm8350 *VAR_27 = VAR_26->wm8350;
 struct wm8350_audio_platform_data *VAR_28 =
  VAR_27->codec.platform_data;
 u16 VAR_29;
 int VAR_30;

 switch (VAR_25) {
 case 130:
  VAR_29 = FUNC_8(VAR_27, VAR_12) &
      ~(VAR_23 | VAR_2);
  FUNC_9(VAR_27, VAR_12,
     VAR_29 | VAR_21 |
     VAR_28->codec_current_on << 14);
  break;

 case 129:
  VAR_29 = FUNC_8(VAR_27, VAR_12);
  VAR_29 &= ~VAR_23;
  FUNC_9(VAR_27, VAR_12,
     VAR_29 | VAR_21);
  break;

 case 128:
  if (FUNC_5(VAR_24) == 131) {
   VAR_30 = FUNC_3(FUNC_0(VAR_26->supplies),
          VAR_26->supplies);
   if (VAR_30 != 0)
    return VAR_30;


   FUNC_10(VAR_27, VAR_14,
     VAR_17);


   FUNC_10(VAR_27, VAR_3,
     VAR_4);


   FUNC_9(VAR_27, VAR_0,
      VAR_28->dis_out1 |
      (VAR_28->dis_out2 << 2) |
      (VAR_28->dis_out3 << 4) |
      (VAR_28->dis_out4 << 6));


   FUNC_4(FUNC_1
             (VAR_28->
       cap_discharge_msecs));


   FUNC_9(VAR_27, VAR_0,
      (VAR_28->vmid_s_curve << 8));


   FUNC_9(VAR_27, VAR_12,
      (VAR_28->
       codec_current_charge << 14) |
      VAR_22 | VAR_19 |
      VAR_18);


   FUNC_4(FUNC_1
             (VAR_28->
       vmid_charge_msecs));


   VAR_29 = FUNC_8(VAR_27, VAR_12) &
       ~(VAR_23 | VAR_2);
   VAR_29 |= VAR_20 |
    (VAR_28->codec_current_standby << 14);
   FUNC_9(VAR_27, VAR_12,
      VAR_29);



   VAR_29 |= VAR_1;
   FUNC_9(VAR_27, VAR_12, VAR_29);


   FUNC_9(VAR_27, VAR_0, 0);

  } else {

   VAR_29 = FUNC_8(VAR_27, VAR_12) &
       ~(VAR_23 | VAR_2);
   FUNC_9(VAR_27, VAR_12,
      VAR_29 | VAR_20 |
      (VAR_28->
       codec_current_standby << 14));

  }
  break;

 case 131:


  FUNC_10(VAR_27, VAR_3, VAR_4);

  FUNC_10(VAR_27, VAR_13,
    VAR_7 | VAR_8 |
    VAR_9 | VAR_10);


  FUNC_9(VAR_27, VAR_0,
     (VAR_28->vmid_s_curve << 8));


  VAR_29 = FUNC_8(VAR_27, VAR_12) &
      ~VAR_19;
  FUNC_9(VAR_27, VAR_12, VAR_29);


  FUNC_4(FUNC_1
            (VAR_28->
      vmid_discharge_msecs));

  FUNC_9(VAR_27, VAR_0,
     (VAR_28->vmid_s_curve << 8) |
     VAR_28->dis_out1 |
     (VAR_28->dis_out2 << 2) |
     (VAR_28->dis_out3 << 4) |
     (VAR_28->dis_out4 << 6));


  VAR_29 = FUNC_8(VAR_27, VAR_12) &
      ~(VAR_18 | VAR_23);
  FUNC_9(VAR_27, VAR_12,
     VAR_29 | VAR_11);


  FUNC_4(FUNC_1
            (VAR_28->drain_msecs));

  VAR_29 &= ~VAR_1;
  FUNC_9(VAR_27, VAR_12, VAR_29);


  FUNC_9(VAR_27, VAR_0, 0);

  FUNC_7(VAR_27, VAR_5,
      VAR_7);
  FUNC_7(VAR_27, VAR_15,
      VAR_8);
  FUNC_7(VAR_27, VAR_6,
      VAR_9);
  FUNC_7(VAR_27, VAR_16,
      VAR_10);


  FUNC_7(VAR_27, VAR_14,
      VAR_17);

  FUNC_2(FUNC_0(VAR_26->supplies),
           VAR_26->supplies);
  break;
 }
 return 0;
}
