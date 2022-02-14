
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_rawmidi_substream {TYPE_1__* rmidi; } ;
struct bcd2000 {struct snd_rawmidi_substream* midi_out_substream; int midi_out_active; } ;
struct TYPE_2__ {struct bcd2000* private_data; } ;


 int FUNC_0 (struct bcd2000*) ;

__attribute__((used)) static void FUNC_1(struct snd_rawmidi_substream *VAR_0,
      int VAR_1)
{
 struct bcd2000 *VAR_2 = VAR_0->rmidi->private_data;

 if (VAR_1) {
  VAR_2->midi_out_substream = VAR_0;

  if (!VAR_2->midi_out_active)
   FUNC_0(VAR_2);
 } else {
  VAR_2->midi_out_substream = ((void*)0);
 }
}
