
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_kcontrol_new {int name; } ;
struct snd_kcontrol {int dummy; } ;
struct snd_card {int mixername; } ;
struct snd_ca0106 {TYPE_1__* details; struct snd_card* card; } ;
struct TYPE_2__ {int i2c_adc; int gpio_type; scalar_t__ spi_dac; } ;


 int FUNC_0 (struct snd_ca0106*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct snd_card*,struct snd_kcontrol*,int ) ;
 int FUNC_2 (struct snd_card*,char*) ;
 int FUNC_3 (struct snd_card*,char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct snd_kcontrol_new VAR_3 ;
 struct snd_kcontrol_new VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct snd_kcontrol_new FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (struct snd_card*,struct snd_kcontrol*) ;
 struct snd_kcontrol* FUNC_6 (char*,int *) ;
 struct snd_kcontrol* FUNC_7 (struct snd_kcontrol_new*,struct snd_ca0106*) ;
 int FUNC_8 (int ,char*) ;

int FUNC_9(struct snd_ca0106 *VAR_8)
{
 int VAR_9;
        struct snd_card *VAR_10 = VAR_8->card;
 char **VAR_11;
 struct snd_kcontrol *VAR_12;
 static char *VAR_13[] = {
  "Master Mono Playback Switch",
  "Master Mono Playback Volume",
  "3D Control - Switch",
  "3D Control Sigmatel - Depth",
  "PCM Playback Switch",
  "PCM Playback Volume",
  "CD Playback Switch",
  "CD Playback Volume",
  "Phone Playback Switch",
  "Phone Playback Volume",
  "Video Playback Switch",
  "Video Playback Volume",
  "Beep Playback Switch",
  "Beep Playback Volume",
  "Mono Output Select",
  "Capture Source",
  "Capture Switch",
  "Capture Volume",
  "External Amplifier",
  "Sigmatel 4-Speaker Stereo Playback Switch",
  "Surround Phase Inversion Playback Switch",
  ((void*)0)
 };
 static char *VAR_14[] = {
  "Master Playback Switch", "Capture Switch",
  "Master Playback Volume", "Capture Volume",
  "Line Playback Switch", "AC97 Line Capture Switch",
  "Line Playback Volume", "AC97 Line Capture Volume",
  "Aux Playback Switch", "AC97 Aux Capture Switch",
  "Aux Playback Volume", "AC97 Aux Capture Volume",
  "Mic Playback Switch", "AC97 Mic Capture Switch",
  "Mic Playback Volume", "AC97 Mic Capture Volume",
  "Mic Select", "AC97 Mic Select",
  "Mic Boost (+20dB)", "AC97 Mic Boost (+20dB)",
  ((void*)0)
 };

 for (VAR_11 = VAR_13; *VAR_11; VAR_11++)
  FUNC_2(VAR_10, *VAR_11);
 for (VAR_11 = VAR_14; *VAR_11; VAR_11 += 2)
  FUNC_3(VAR_10, VAR_11[0], VAR_11[1]);


 FUNC_0(VAR_8, VAR_6);
 if (VAR_8->details->i2c_adc == 1) {
  FUNC_0(VAR_8, VAR_7);
  if (VAR_8->details->gpio_type == 1)
   VAR_9 = FUNC_5(VAR_10, FUNC_7(&VAR_4, VAR_8));
  else
   VAR_9 = FUNC_5(VAR_10, FUNC_7(&VAR_3, VAR_8));
  if (VAR_9 < 0)
   return VAR_9;
 }
 if (VAR_8->details->spi_dac) {
  int VAR_15;
  for (VAR_15 = 0;; VAR_15++) {
   struct snd_kcontrol_new VAR_16;
   VAR_16 = FUNC_4(VAR_8->details, VAR_15);
   if (!VAR_16.name)
    break;
   VAR_9 = FUNC_5(VAR_10, FUNC_7(&VAR_16, VAR_8));
   if (VAR_9 < 0)
    return VAR_9;
  }
 }


 VAR_12 = FUNC_6("Master Playback Volume",
           VAR_5);
 if (!VAR_12)
  return -VAR_0;
 VAR_9 = FUNC_5(VAR_10, VAR_12);
 if (VAR_9 < 0)
  return VAR_9;
 FUNC_1(VAR_10, VAR_12, VAR_2);

 if (VAR_8->details->spi_dac) {
  VAR_12 = FUNC_6("Master Playback Switch",
            ((void*)0));
  if (!VAR_12)
   return -VAR_0;
  VAR_9 = FUNC_5(VAR_10, VAR_12);
  if (VAR_9 < 0)
   return VAR_9;
  FUNC_1(VAR_10, VAR_12, VAR_1);
 }

 FUNC_8(VAR_10->mixername, "CA0106");
        return 0;
}
