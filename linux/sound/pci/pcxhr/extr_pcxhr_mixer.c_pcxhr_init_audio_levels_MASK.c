
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcxhr {int** digital_playback_active; int* aes_bits; int* analog_playback_active; int analog_capture_active; TYPE_1__* mgr; int * analog_capture_volume; void** digital_capture_volume; scalar_t__ nb_streams_capt; int * analog_playback_volume; void*** digital_playback_volume; scalar_t__ nb_streams_play; } ;
struct TYPE_2__ {scalar_t__ is_hr_stereo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct snd_pcxhr*,int,int) ;
 int FUNC_1 (struct snd_pcxhr*,int,int) ;

__attribute__((used)) static void FUNC_2(struct snd_pcxhr *VAR_8)
{
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < 2; VAR_9++) {
  if (VAR_8->nb_streams_play) {
   int VAR_10;

   for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
    VAR_8->digital_playback_active[VAR_10][VAR_9] = 1;
    VAR_8->digital_playback_volume[VAR_10][VAR_9] =
     VAR_4;
   }



   VAR_8->aes_bits[0] = (VAR_2 |
          VAR_3);
   if (VAR_8->mgr->is_hr_stereo)
    FUNC_0(VAR_8, 0, VAR_9);
  }
  if (VAR_8->nb_streams_capt) {

   VAR_8->digital_capture_volume[VAR_9] =
    VAR_4;
   VAR_8->analog_capture_active = 1;
   if (VAR_8->mgr->is_hr_stereo)
    FUNC_0(VAR_8, 1, VAR_9);
  }
 }

 return;
}
