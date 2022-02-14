
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_uart16550 {scalar_t__ filemode; int open_lock; struct snd_rawmidi_substream** midi_output; } ;
struct snd_rawmidi_substream {size_t number; TYPE_1__* rmidi; } ;
struct TYPE_2__ {struct snd_uart16550* private_data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct snd_uart16550*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct snd_rawmidi_substream *VAR_2)
{
 unsigned long VAR_3;
 struct snd_uart16550 *VAR_4 = VAR_2->rmidi->private_data;

 FUNC_1(&VAR_4->open_lock, VAR_3);
 if (VAR_4->filemode == VAR_0)
  FUNC_0(VAR_4);
 VAR_4->filemode |= VAR_1;
 VAR_4->midi_output[VAR_2->number] = VAR_2;
 FUNC_2(&VAR_4->open_lock, VAR_3);
 return 0;
}
