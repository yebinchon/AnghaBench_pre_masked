
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_rawmidi_substream {struct snd_rawmidi_runtime* runtime; } ;
struct snd_rawmidi_runtime {int avail; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct snd_rawmidi_substream*,char const*,int) ;

__attribute__((used)) static int FUNC_4(struct snd_rawmidi_substream *VAR_2, const char *VAR_3, int VAR_4)
{
 struct snd_rawmidi_runtime *VAR_5;
 int VAR_6;

 if (FUNC_2(!VAR_2 || !VAR_3))
  return -VAR_0;
 VAR_5 = VAR_2->runtime;
 if ((VAR_6 = VAR_5->avail) < VAR_4) {
  if (FUNC_1())
   FUNC_0("ALSA: seq_midi: MIDI output buffer overrun\n");
  return -VAR_1;
 }
 if (FUNC_3(VAR_2, VAR_3, VAR_4) < VAR_4)
  return -VAR_0;
 return 0;
}
