
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_rawmidi_substream {int dummy; } ;
struct snd_fw_async_midi_port {int work; struct snd_rawmidi_substream* substream; int error; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline void
FUNC_1(struct snd_fw_async_midi_port *VAR_0,
      struct snd_rawmidi_substream *VAR_1)
{
 if (!VAR_0->error) {
  VAR_0->substream = VAR_1;
  FUNC_0(&VAR_0->work);
 }
}
