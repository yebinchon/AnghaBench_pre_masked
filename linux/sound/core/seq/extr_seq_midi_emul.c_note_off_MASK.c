
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_midi_op {int (* note_off ) (void*,int,int,struct snd_midi_channel*) ;} ;
struct snd_midi_channel {int* note; scalar_t__ gm_hold; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,int,int,struct snd_midi_channel*) ;

__attribute__((used)) static void
FUNC_1(struct snd_midi_op *VAR_2, void *VAR_3, struct snd_midi_channel *VAR_4,
  int VAR_5, int VAR_6)
{
 if (VAR_4->gm_hold) {

  VAR_4->note[VAR_5] |= VAR_0;
 } else if (VAR_4->note[VAR_5] & VAR_1) {


  VAR_4->note[VAR_5] |= VAR_0;
 } else {
  VAR_4->note[VAR_5] = 0;
  if (VAR_2->note_off)
   VAR_2->note_off(VAR_3, VAR_5, VAR_6, VAR_4);
 }
}
