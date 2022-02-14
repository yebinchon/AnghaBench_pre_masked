
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_midi_op {int note_off; } ;
struct snd_midi_channel {scalar_t__* note; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct snd_midi_op*,void*,struct snd_midi_channel*,int,int ) ;

__attribute__((used)) static void
FUNC_1(struct snd_midi_op *VAR_1, void *VAR_2, struct snd_midi_channel *VAR_3)
{
 int VAR_4;

 if (! VAR_1->note_off)
  return;
 for (VAR_4 = 0; VAR_4 < 128; VAR_4++) {
  if (VAR_3->note[VAR_4] == VAR_0)
   FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, 0);
 }
}
