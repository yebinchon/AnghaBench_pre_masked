
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_rawmidi_substream {int dummy; } ;
struct amdtp_stream {struct amdtp_am824* protocol; } ;
struct amdtp_am824 {unsigned int midi_ports; int * midi; } ;


 int FUNC_0 (int ,struct snd_rawmidi_substream*) ;

void FUNC_1(struct amdtp_stream *VAR_0, unsigned int VAR_1,
         struct snd_rawmidi_substream *VAR_2)
{
 struct amdtp_am824 *VAR_3 = VAR_0->protocol;

 if (VAR_1 < VAR_3->midi_ports)
  FUNC_0(VAR_3->midi[VAR_1], VAR_2);
}
