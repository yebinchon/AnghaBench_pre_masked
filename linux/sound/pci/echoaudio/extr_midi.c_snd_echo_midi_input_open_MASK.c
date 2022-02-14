
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_rawmidi_substream {TYPE_1__* rmidi; } ;
struct echoaudio {struct snd_rawmidi_substream* midi_in; } ;
struct TYPE_2__ {struct echoaudio* private_data; } ;



__attribute__((used)) static int FUNC_0(struct snd_rawmidi_substream *VAR_0)
{
 struct echoaudio *VAR_1 = VAR_0->rmidi->private_data;

 VAR_1->midi_in = VAR_0;
 return 0;
}
