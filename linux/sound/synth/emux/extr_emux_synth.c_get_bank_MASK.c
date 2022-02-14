
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_midi_channel {int* control; int drum_channel; } ;
struct TYPE_2__ {int midi_mode; } ;
struct snd_emux_port {TYPE_1__ chset; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;



__attribute__((used)) static int
FUNC_0(struct snd_emux_port *VAR_2, struct snd_midi_channel *VAR_3)
{
 int VAR_4;

 switch (VAR_2->chset.midi_mode) {
 case 128:
  VAR_4 = VAR_3->control[VAR_1];
  if (VAR_4 == 127)
   return 128;
  return VAR_3->control[VAR_0];

 case 129:
  if (VAR_3->drum_channel)
   return 128;

  return VAR_3->control[VAR_1];

 default:
  if (VAR_3->drum_channel)
   return 128;
  return VAR_3->control[VAR_1];
 }
}
