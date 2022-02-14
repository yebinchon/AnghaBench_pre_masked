
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_rawmidi_substream {TYPE_1__* rmidi; } ;
struct bcd2000 {struct snd_rawmidi_substream* midi_receive_substream; } ;
struct TYPE_2__ {struct bcd2000* private_data; } ;



__attribute__((used)) static void FUNC_0(struct snd_rawmidi_substream *VAR_0,
      int VAR_1)
{
 struct bcd2000 *VAR_2 = VAR_0->rmidi->private_data;
 VAR_2->midi_receive_substream = VAR_1 ? VAR_0 : ((void*)0);
}
