
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_midi_channel_set {int dummy; } ;
struct snd_midi_channel {int* control; } ;
struct TYPE_2__ {scalar_t__ midi_mode; } ;
struct snd_emux_port {TYPE_1__ chset; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int ,struct snd_emux_port*,struct snd_midi_channel*,int,int,int ) ;
 scalar_t__ FUNC_2 (int) ;

void
FUNC_3(void *VAR_9, struct snd_midi_channel *VAR_10,
       struct snd_midi_channel_set *VAR_11)
{
 struct snd_emux_port *VAR_12;

 VAR_12 = VAR_9;
 if (FUNC_2(!VAR_12 || !VAR_10))
  return;

 if (VAR_10->control[VAR_5] == 127 &&
     VAR_10->control[VAR_4] <= 26) {
  int VAR_13;


  VAR_13 = (VAR_10->control[VAR_3] << 7) |
   VAR_10->control[VAR_2];
  VAR_13 -= 8192;
  FUNC_1
   (VAR_7, FUNC_0(VAR_7),
    VAR_12, VAR_10, VAR_10->control[VAR_4],
    VAR_13, VAR_1);
  return;
 }

 if (VAR_12->chset.midi_mode == VAR_6 &&
     VAR_10->control[VAR_5] == 1) {
  int VAR_14;


  VAR_14 = VAR_10->control[VAR_3];
  FUNC_1
   (VAR_8, FUNC_0(VAR_8),
    VAR_12, VAR_10, VAR_10->control[VAR_4],
    VAR_14, VAR_0);
  return;
 }
}
