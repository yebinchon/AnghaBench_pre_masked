
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_rawmidi_substream {int dummy; } ;
struct amdtp_stream {struct amdtp_dot* protocol; } ;
struct amdtp_dot {int * midi; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,struct snd_rawmidi_substream*) ;

void FUNC_1(struct amdtp_stream *VAR_1, unsigned int VAR_2,
     struct snd_rawmidi_substream *VAR_3)
{
 struct amdtp_dot *VAR_4 = VAR_1->protocol;

 if (VAR_2 < VAR_0)
  FUNC_0(VAR_4->midi[VAR_2], VAR_3);
}
