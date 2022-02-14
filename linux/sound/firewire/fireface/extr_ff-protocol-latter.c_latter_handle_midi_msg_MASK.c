
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct snd_rawmidi_substream {int dummy; } ;
struct snd_ff {int * tx_midi_substreams; TYPE_1__* spec; } ;
typedef int __le32 ;
struct TYPE_2__ {unsigned int midi_in_ports; } ;


 struct snd_rawmidi_substream* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct snd_rawmidi_substream*,int*,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct snd_ff *VAR_0, unsigned int VAR_1,
       __le32 *VAR_2, size_t VAR_3)
{
 u32 VAR_4 = FUNC_1(*VAR_2);
 unsigned int VAR_5 = (VAR_4 & 0x000000f0) >> 4;
 u8 VAR_6[3];
 struct snd_rawmidi_substream *VAR_7;
 unsigned int VAR_8;

 if (VAR_5 >= VAR_0->spec->midi_in_ports)
  return;

 switch (VAR_4 & 0x0000000f) {
 case 0x00000008:
 case 0x00000009:
 case 0x0000000a:
 case 0x0000000b:
 case 0x0000000e:
  VAR_8 = 3;
  break;
 case 0x0000000c:
 case 0x0000000d:
  VAR_8 = 2;
  break;
 default:
  VAR_8 = VAR_4 & 0x00000003;
  if (VAR_8 == 0)
   VAR_8 = 3;
  break;
 }

 VAR_6[0] = (VAR_4 & 0x0000ff00) >> 8;
 VAR_6[1] = (VAR_4 & 0x00ff0000) >> 16;
 VAR_6[2] = (VAR_4 & 0xff000000) >> 24;

 VAR_7 = FUNC_0(VAR_0->tx_midi_substreams[VAR_5]);
 if (VAR_7)
  FUNC_2(VAR_7, VAR_6, VAR_8);
}
