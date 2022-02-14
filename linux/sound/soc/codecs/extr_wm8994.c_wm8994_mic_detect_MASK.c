
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8994_priv {struct wm8994_micdet* micdet; struct wm8994* wm8994; } ;
struct wm8994_micdet {int detecting; struct snd_soc_jack* jack; } ;
struct wm8994 {scalar_t__ type; } ;
struct snd_soc_jack {int dummy; } ;
struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,char*,int,struct snd_soc_jack*) ;
 int FUNC_1 (int ,char*,...) ;
 struct snd_soc_dapm_context* FUNC_2 (struct snd_soc_component*) ;
 struct wm8994_priv* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_5 (struct snd_soc_dapm_context*,char*) ;
 int FUNC_6 (struct snd_soc_dapm_context*,char*) ;
 int FUNC_7 (struct snd_soc_dapm_context*) ;

int FUNC_8(struct snd_soc_component *VAR_11, struct snd_soc_jack *VAR_12,
        int VAR_13)
{
 struct snd_soc_dapm_context *VAR_14 = FUNC_2(VAR_11);
 struct wm8994_priv *VAR_15 = FUNC_3(VAR_11);
 struct wm8994_micdet *VAR_16;
 struct wm8994 *VAR_17 = VAR_15->wm8994;
 int VAR_18, VAR_19;

 if (VAR_17->type != VAR_1) {
  FUNC_1(VAR_11->dev, "Not a WM8994\n");
  return -VAR_0;
 }

 switch (VAR_13) {
 case 1:
  VAR_16 = &VAR_15->micdet[0];
  if (VAR_12)
   VAR_19 = FUNC_6(VAR_14, "MICBIAS1");
  else
   VAR_19 = FUNC_5(VAR_14, "MICBIAS1");
  break;
 case 2:
  VAR_16 = &VAR_15->micdet[1];
  if (VAR_12)
   VAR_19 = FUNC_6(VAR_14, "MICBIAS1");
  else
   VAR_19 = FUNC_5(VAR_14, "MICBIAS1");
  break;
 default:
  FUNC_1(VAR_11->dev, "Invalid MICBIAS %d\n", VAR_13);
  return -VAR_0;
 }

 if (VAR_19 != 0)
  FUNC_1(VAR_11->dev, "Failed to configure MICBIAS%d: %d\n",
    VAR_13, VAR_19);

 FUNC_0(VAR_11->dev, "Configuring microphone detection on %d %p\n",
  VAR_13, VAR_12);


 VAR_16->jack = VAR_12;
 VAR_16->detecting = 1;


 if (VAR_15->micdet[0].jack || VAR_15->micdet[1].jack)
  VAR_18 = VAR_10;
 else
  VAR_18 = 0;

 FUNC_4(VAR_11, VAR_9, VAR_10, VAR_18);


 FUNC_4(VAR_11, VAR_2,
       VAR_4 | VAR_6 |
       VAR_7 | VAR_8,
       VAR_3 | VAR_5);

 FUNC_7(VAR_14);

 return 0;
}
