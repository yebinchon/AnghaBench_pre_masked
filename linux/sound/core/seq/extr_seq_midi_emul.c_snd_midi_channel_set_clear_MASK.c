
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_midi_channel_set {int gs_master_volume; int max_channels; struct snd_midi_channel* channels; int midi_mode; } ;
struct snd_midi_channel {int gm_rpn_pitch_bend_range; int drum_channel; scalar_t__ gm_rpn_coarse_tuning; scalar_t__ gm_rpn_fine_tuning; scalar_t__ midi_pitchbend; scalar_t__ midi_program; scalar_t__ midi_pressure; scalar_t__ midi_aftertouch; int note; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct snd_midi_channel*) ;

void
FUNC_2(struct snd_midi_channel_set *VAR_1)
{
 int VAR_2;

 VAR_1->midi_mode = VAR_0;
 VAR_1->gs_master_volume = 127;

 for (VAR_2 = 0; VAR_2 < VAR_1->max_channels; VAR_2++) {
  struct snd_midi_channel *VAR_3 = VAR_1->channels + VAR_2;
  FUNC_0(VAR_3->note, 0, sizeof(VAR_3->note));

  VAR_3->midi_aftertouch = 0;
  VAR_3->midi_pressure = 0;
  VAR_3->midi_program = 0;
  VAR_3->midi_pitchbend = 0;
  FUNC_1(VAR_3);
  VAR_3->gm_rpn_pitch_bend_range = 256;
  VAR_3->gm_rpn_fine_tuning = 0;
  VAR_3->gm_rpn_coarse_tuning = 0;

  if (VAR_2 == 9)
   VAR_3->drum_channel = 1;
  else
   VAR_3->drum_channel = 0;
 }
}
