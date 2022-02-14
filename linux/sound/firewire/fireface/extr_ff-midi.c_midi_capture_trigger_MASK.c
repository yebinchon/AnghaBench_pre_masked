
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_rawmidi_substream {size_t number; TYPE_1__* rmidi; } ;
struct snd_ff {int lock; int * tx_midi_substreams; } ;
struct TYPE_2__ {struct snd_ff* private_data; } ;


 int FUNC_0 (int ,struct snd_rawmidi_substream*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct snd_rawmidi_substream *VAR_0,
     int VAR_1)
{
 struct snd_ff *VAR_2 = VAR_0->rmidi->private_data;
 unsigned long VAR_3;

 FUNC_1(&VAR_2->lock, VAR_3);

 if (VAR_1)
  FUNC_0(VAR_2->tx_midi_substreams[VAR_0->number],
      VAR_0);
 else
  FUNC_0(VAR_2->tx_midi_substreams[VAR_0->number], ((void*)0));

 FUNC_2(&VAR_2->lock, VAR_3);
}
