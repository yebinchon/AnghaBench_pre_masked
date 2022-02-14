
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_rawmidi_substream {TYPE_1__* rmidi; } ;
struct midi_runtime {scalar_t__ out; } ;
struct TYPE_2__ {struct midi_runtime* private_data; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct snd_rawmidi_substream *VAR_0)
{
 struct midi_runtime *VAR_1 = VAR_0->rmidi->private_data;
 int VAR_2 = 0;

 while (VAR_1->out && VAR_2++ < 100)
  FUNC_0(10);
}
