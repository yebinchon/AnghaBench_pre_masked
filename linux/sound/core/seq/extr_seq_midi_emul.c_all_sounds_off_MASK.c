
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_midi_op {int (* note_terminate ) (void*,int,struct snd_midi_channel*) ;} ;
struct snd_midi_channel {scalar_t__* note; } ;


 int FUNC_0 (void*,int,struct snd_midi_channel*) ;

__attribute__((used)) static void
FUNC_1(struct snd_midi_op *VAR_0, void *VAR_1, struct snd_midi_channel *VAR_2)
{
 int VAR_3;

 if (! VAR_0->note_terminate)
  return;
 for (VAR_3 = 0; VAR_3 < 128; VAR_3++) {
  if (VAR_2->note[VAR_3]) {
   VAR_0->note_terminate(VAR_1, VAR_3, VAR_2);
   VAR_2->note[VAR_3] = 0;
  }
 }
}
