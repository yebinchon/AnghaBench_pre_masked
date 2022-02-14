
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_rawmidi_substream {size_t number; TYPE_1__* rmidi; } ;
struct snd_ff {int * rx_midi_substreams; int * rx_midi_work; } ;
struct TYPE_2__ {struct snd_ff* private_data; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct snd_rawmidi_substream *VAR_0)
{
 struct snd_ff *VAR_1 = VAR_0->rmidi->private_data;

 FUNC_1(&VAR_1->rx_midi_work[VAR_0->number]);
 FUNC_0(VAR_1->rx_midi_substreams[VAR_0->number], ((void*)0));

 return 0;
}
