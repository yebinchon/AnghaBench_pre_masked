
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcxhr {int* analog_capture_volume; int mic_volume; int* analog_playback_volume; int mgr; scalar_t__* analog_playback_active; scalar_t__ mic_active; scalar_t__ analog_capture_active; TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,char*,int) ;
 int FUNC_1 (int ,int,int,int) ;
 int FUNC_2 (int ,int,int) ;

int FUNC_3(struct snd_pcxhr *VAR_3,
        int VAR_4, int VAR_5)
{
 FUNC_0(VAR_3->card->dev,
  "hr222_update_analog_audio_level(%s chan=%d)\n",
      VAR_4 ? "capture" : "playback", VAR_5);
 if (VAR_4) {
  int VAR_6, VAR_7, VAR_8;

  if (VAR_3->analog_capture_active) {
   VAR_6 = VAR_3->analog_capture_volume[0];
   VAR_7 = VAR_3->analog_capture_volume[1];
  } else {
   VAR_6 = VAR_0;
   VAR_7 = VAR_0;
  }
  if (VAR_3->mic_active)
   VAR_8 = VAR_3->mic_volume;
  else
   VAR_8 = VAR_2;
  return FUNC_1(VAR_3->mgr,
       VAR_6, VAR_7, VAR_8);
 } else {
  int VAR_9;
  if (VAR_3->analog_playback_active[VAR_5])
   VAR_9 = VAR_3->analog_playback_volume[VAR_5];
  else
   VAR_9 = VAR_1;
  return FUNC_2(VAR_3->mgr, VAR_5, VAR_9);
 }
}
