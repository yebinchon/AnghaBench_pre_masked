
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_midi_channel {int drum_channel; } ;
struct TYPE_2__ {int max_channels; struct snd_midi_channel* channels; } ;
struct snd_emux_port {int* ctrls; int drum_flags; TYPE_1__ chset; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct snd_emux_port*) ;
 int FUNC_1 (struct snd_emux_port*) ;
 int FUNC_2 (TYPE_1__*) ;

void
FUNC_3(struct snd_emux_port *VAR_3)
{
 int VAR_4;


 FUNC_1(VAR_3);

 FUNC_2(&VAR_3->chset);






 VAR_3->ctrls[VAR_0] = 0;
 VAR_3->ctrls[VAR_1] = 0;
 VAR_3->ctrls[VAR_2] = 1;

 for (VAR_4 = 0; VAR_4 < VAR_3->chset.max_channels; VAR_4++) {
  struct snd_midi_channel *VAR_5 = VAR_3->chset.channels + VAR_4;
  VAR_5->drum_channel = ((VAR_3->drum_flags >> VAR_4) & 1) ? 1 : 0;
 }
}
