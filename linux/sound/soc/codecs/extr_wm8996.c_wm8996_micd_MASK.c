
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8996_priv {int jack_mic; int detecting; int jack_flips; int jack; int (* polarity_cb ) (struct snd_soc_component*,int) ;} ;
struct snd_soc_component {int dev; } ;


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
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*) ;
 struct wm8996_priv* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,int ) ;
 int FUNC_4 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (struct snd_soc_component*,int) ;
 int FUNC_7 (struct snd_soc_component*) ;
 int FUNC_8 (struct snd_soc_component*) ;

__attribute__((used)) static void FUNC_9(struct snd_soc_component *VAR_15)
{
 struct wm8996_priv *VAR_16 = FUNC_2(VAR_15);
 int VAR_17, VAR_18;

 VAR_17 = FUNC_3(VAR_15, VAR_14);

 FUNC_0(VAR_15->dev, "Microphone event: %x\n", VAR_17);

 if (!(VAR_17 & VAR_12)) {
  FUNC_1(VAR_15->dev, "Microphone detection state invalid\n");
  return;
 }


 if (!(VAR_17 & VAR_11)) {
  FUNC_0(VAR_15->dev, "Jack removal detected\n");
  VAR_16->jack_mic = 0;
  VAR_16->detecting = 1;
  VAR_16->jack_flips = 0;
  FUNC_5(VAR_16->jack, 0,
        VAR_2 | VAR_1 |
        VAR_0);

  FUNC_4(VAR_15, VAR_13,
        VAR_8 |
        VAR_6,
        VAR_8 |
        9 << VAR_7);
  return;
 }





 if (VAR_17 & 0x400) {
  if (VAR_16->detecting) {
   FUNC_0(VAR_15->dev, "Microphone detected\n");
   VAR_16->jack_mic = 1;
   FUNC_7(VAR_15);



   FUNC_4(VAR_15, VAR_13,
         VAR_8 |
         VAR_6,
         5 << VAR_9 |
         7 << VAR_7);
  } else {
   FUNC_0(VAR_15->dev, "Mic button up\n");
   FUNC_5(VAR_16->jack, 0, VAR_0);
  }

  return;
 }







 if (VAR_16->detecting && (VAR_17 & 0x3f0)) {
  VAR_16->jack_flips++;

  if (VAR_16->jack_flips > 1) {
   FUNC_8(VAR_15);
   return;
  }

  VAR_18 = FUNC_3(VAR_15, VAR_3);
  VAR_18 ^= VAR_4 | VAR_10 |
   VAR_5;
  FUNC_4(VAR_15, VAR_3,
        VAR_4 | VAR_10 |
        VAR_5, VAR_18);

  if (VAR_16->polarity_cb)
   VAR_16->polarity_cb(VAR_15,
         (VAR_18 & VAR_10) != 0);

  FUNC_0(VAR_15->dev, "Set microphone polarity to %d\n",
   (VAR_18 & VAR_10) != 0);

  return;
 }




 if (VAR_17 & 0x3fc) {
  if (VAR_16->jack_mic) {
   FUNC_0(VAR_15->dev, "Mic button detected\n");
   FUNC_5(VAR_16->jack, VAR_0,
         VAR_0);
  } else if (VAR_16->detecting) {
   FUNC_8(VAR_15);
  }
 }
}
