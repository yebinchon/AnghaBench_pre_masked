
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_midi_channel {unsigned short midi_program; int* control; } ;
struct TYPE_2__ {int max_channels; struct snd_midi_channel* channels; } ;
struct snd_emux_port {scalar_t__ port_mode; TYPE_1__ chset; } ;
struct snd_emux {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct snd_emux_port*,struct snd_midi_channel*,int ,int,int ) ;
 int FUNC_1 (struct snd_emux_port*,struct snd_midi_channel*,int ) ;

__attribute__((used)) static void
FUNC_2(struct snd_emux *VAR_7, struct snd_emux_port *VAR_8, int VAR_9,
  unsigned char *VAR_10, int VAR_11, int VAR_12)
{
 int VAR_13;
 unsigned short VAR_14;
 int VAR_15;
 struct snd_midi_channel *VAR_16;

 if (VAR_8->port_mode != VAR_4)
  return;
 if (VAR_9 == VAR_6)
  return;
 VAR_13 = VAR_10[3];
 if (VAR_13 < 0 || VAR_13 >= VAR_8->chset.max_channels)
  return;

 VAR_16 = &VAR_8->chset.channels[VAR_13];

 VAR_14 = *(unsigned short *) &VAR_10[4];
 VAR_15 = *(int*) &VAR_10[4];

 switch (VAR_9) {
 case 132:
  VAR_16->midi_program = VAR_14;
  return;

 case 133:

  VAR_16->control[VAR_3] = (int)VAR_14 << 3;
  FUNC_1(VAR_8, VAR_16, VAR_5);
  return;

 case 131:
 case 130:

  return;

 case 135:
 case 134:
 case 138:
 case 136:
 case 137:

  return;

 case 128:
  return;

 case 129:
  return;
 }
}
