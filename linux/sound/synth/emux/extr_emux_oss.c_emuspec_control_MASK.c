
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_midi_channel {unsigned short midi_pressure; int drum_channel; } ;
struct TYPE_3__ {int max_channels; struct snd_midi_channel* channels; } ;
struct snd_emux_port {short volume_atten; unsigned int drum_flags; short* ctrls; TYPE_1__ chset; } ;
struct TYPE_4__ {int (* oss_ioctl ) (struct snd_emux*,int,unsigned short,short) ;} ;
struct snd_emux {TYPE_2__ ops; int sflist; } ;


 unsigned short VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct snd_emux*,struct snd_emux_port*,int,int ,int ,int,int) ;
 int FUNC_1 (struct snd_emux_port*,unsigned short) ;
 int FUNC_2 (struct snd_emux_port*) ;
 int FUNC_3 (struct snd_emux_port*,struct snd_midi_channel*,unsigned short,short) ;
 int FUNC_4 (struct snd_emux*) ;
 int FUNC_5 (struct snd_emux_port*,struct snd_midi_channel*,int) ;
 int FUNC_6 (struct snd_emux_port*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct snd_emux*,int,unsigned short,short) ;

__attribute__((used)) static void
FUNC_9(struct snd_emux *VAR_6, struct snd_emux_port *VAR_7, int VAR_8,
  unsigned char *VAR_9, int VAR_10, int VAR_11)
{
 int VAR_12;
 unsigned short VAR_13;
 short VAR_14;
 int VAR_15;
 struct snd_midi_channel *VAR_16;

 VAR_12 = VAR_9[3];
 if (VAR_12 < 0 || VAR_12 >= VAR_7->chset.max_channels)
  VAR_16 = ((void*)0);
 else
  VAR_16 = &VAR_7->chset.channels[VAR_12];

 VAR_13 = *(unsigned short *) &VAR_9[4];
 VAR_14 = *(short *) &VAR_9[6];

 switch (VAR_8) {





 case 130:
  if (VAR_16)
   FUNC_3(VAR_7, VAR_16, VAR_13, VAR_14);
  break;

 case 129:
  FUNC_4(VAR_6);
  break;

 case 128:

  break;
 case 131:

  break;

 case 133:
  FUNC_0(VAR_6, VAR_7, VAR_12, VAR_1, 0, VAR_10, VAR_11);
  break;
 case 134:
  FUNC_0(VAR_6, VAR_7, VAR_12, VAR_2, 0, VAR_10, VAR_11);
  break;

 case 136:
  if (VAR_14) {
   VAR_7->volume_atten = (short)VAR_13;
   FUNC_6(VAR_7, VAR_5);
  }
  break;

 case 139:
  if (VAR_16) {
   VAR_16->midi_pressure = VAR_13;
   FUNC_5(VAR_7, VAR_16, VAR_4|VAR_3);
  }
  break;

 case 140:
  FUNC_1(VAR_7, VAR_13);
  FUNC_2(VAR_7);
  break;

 case 137:
  VAR_7->drum_flags = *(unsigned int*)&VAR_9[4];
  for (VAR_15 = 0; VAR_15 < VAR_7->chset.max_channels; VAR_15++) {
   VAR_16 = &VAR_7->chset.channels[VAR_15];
   VAR_16->drum_channel = ((VAR_7->drum_flags >> VAR_15) & 1) ? 1 : 0;
  }
  break;

 case 135:
  if (VAR_13 < VAR_0)
   VAR_7->ctrls[VAR_13] = VAR_14;
  break;
 case 138:
  break;

 default:
  if (VAR_6->ops.oss_ioctl)
   VAR_6->ops.oss_ioctl(VAR_6, VAR_8, VAR_13, VAR_14);
  break;
 }
}
