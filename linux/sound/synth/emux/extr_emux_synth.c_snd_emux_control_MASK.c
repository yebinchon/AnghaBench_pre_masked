
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_midi_channel {int* control; } ;
struct TYPE_2__ {scalar_t__ midi_mode; } ;
struct snd_emux_port {TYPE_1__ chset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;







 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct snd_emux_port*,struct snd_midi_channel*,int ,int,int ) ;
 int FUNC_2 (struct snd_emux_port*,struct snd_midi_channel*,int) ;
 int FUNC_3 (struct snd_emux_port*,struct snd_midi_channel*,int) ;

void
FUNC_4(void *VAR_9, int VAR_10, struct snd_midi_channel *VAR_11)
{
 struct snd_emux_port *VAR_12;

 VAR_12 = VAR_9;
 if (FUNC_0(!VAR_12 || !VAR_11))
  return;

 switch (VAR_10) {
 case 132:
 case 133:
  FUNC_2(VAR_12, VAR_11, VAR_7);
  break;

 case 130:
  FUNC_2(VAR_12, VAR_11, VAR_5);
  break;

 case 128:
  break;

 case 129:
  FUNC_2(VAR_12, VAR_11, VAR_6);
  break;

 case 131:
 case 134:
  FUNC_2(VAR_12, VAR_11,
     VAR_4 |
     VAR_3);
  break;

 }

 if (VAR_12->chset.midi_mode == VAR_8) {
  FUNC_3(VAR_12, VAR_11, VAR_10);
 }
}
