
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_rawmidi_substream {TYPE_1__* rmidi; } ;
struct midi_runtime {int in_lock; struct snd_rawmidi_substream* in; } ;
struct TYPE_2__ {struct midi_runtime* private_data; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_2(
  struct snd_rawmidi_substream *VAR_0, int VAR_1)
{
 struct midi_runtime *VAR_2 = VAR_0->rmidi->private_data;
 unsigned long VAR_3;

 FUNC_0(&VAR_2->in_lock, VAR_3);
 if (VAR_1)
  VAR_2->in = VAR_0;
 else
  VAR_2->in = ((void*)0);
 FUNC_1(&VAR_2->in_lock, VAR_3);
}
