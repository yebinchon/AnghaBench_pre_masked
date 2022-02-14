
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_midi_channel_set {int dummy; } ;
struct snd_emux_port {struct snd_emux* emu; } ;
struct TYPE_2__ {int (* sysex ) (struct snd_emux*,unsigned char*,int,int,struct snd_midi_channel_set*) ;} ;
struct snd_emux {TYPE_1__ ops; } ;


 int VAR_0 ;

 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct snd_emux_port*,int ) ;
 int FUNC_2 (struct snd_emux*,unsigned char*,int,int,struct snd_midi_channel_set*) ;

void
FUNC_3(void *VAR_1, unsigned char *VAR_2, int VAR_3, int VAR_4,
        struct snd_midi_channel_set *VAR_5)
{
 struct snd_emux_port *VAR_6;
 struct snd_emux *VAR_7;

 VAR_6 = VAR_1;
 if (FUNC_0(!VAR_6 || !VAR_5))
  return;
 VAR_7 = VAR_6->emu;

 switch (VAR_4) {
 case 128:
  FUNC_1(VAR_6, VAR_0);
  break;
 default:
  if (VAR_7->ops.sysex)
   VAR_7->ops.sysex(VAR_7, VAR_2, VAR_3, VAR_4, VAR_5);
  break;
 }
}
