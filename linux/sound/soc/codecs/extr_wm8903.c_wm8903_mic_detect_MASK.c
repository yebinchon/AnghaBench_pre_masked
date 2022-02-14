
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8903_priv {int mic_det; int mic_short; struct snd_soc_jack* mic_jack; } ;
struct snd_soc_jack {int dummy; } ;
struct snd_soc_component {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,int,int) ;
 struct wm8903_priv* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*,int ,int,int) ;

int FUNC_3(struct snd_soc_component *VAR_7, struct snd_soc_jack *VAR_8,
        int VAR_9, int VAR_10)
{
 struct wm8903_priv *VAR_11 = FUNC_1(VAR_7);
 int VAR_12 = VAR_1 | VAR_3;

 FUNC_0(VAR_7->dev, "Enabling microphone detection: %x %x\n",
  VAR_9, VAR_10);


 VAR_11->mic_jack = VAR_8;
 VAR_11->mic_det = VAR_9;
 VAR_11->mic_short = VAR_10;


 if (VAR_9)
  VAR_12 &= ~VAR_1;
 if (VAR_10)
  VAR_12 &= ~VAR_3;

 FUNC_2(VAR_7, VAR_0,
       VAR_1 | VAR_3,
       VAR_12);

 if (VAR_9 || VAR_10) {


  FUNC_2(VAR_7, VAR_5,
        VAR_6, VAR_6);
  FUNC_2(VAR_7, VAR_4,
        VAR_2, VAR_2);
 } else {
  FUNC_2(VAR_7, VAR_4,
        VAR_2, 0);
 }

 return 0;
}
