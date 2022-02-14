
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_rawmidi_substream {size_t number; TYPE_1__* rmidi; } ;
struct snd_ff {int* rx_midi_error; int * rx_midi_substreams; scalar_t__* on_sysex; } ;
struct TYPE_2__ {struct snd_ff* private_data; } ;


 int FUNC_0 (int ,struct snd_rawmidi_substream*) ;

__attribute__((used)) static int FUNC_1(struct snd_rawmidi_substream *VAR_0)
{
 struct snd_ff *VAR_1 = VAR_0->rmidi->private_data;


 VAR_1->on_sysex[VAR_0->number] = 0;
 VAR_1->rx_midi_error[VAR_0->number] = 0;

 FUNC_0(VAR_1->rx_midi_substreams[VAR_0->number], VAR_0);

 return 0;
}
