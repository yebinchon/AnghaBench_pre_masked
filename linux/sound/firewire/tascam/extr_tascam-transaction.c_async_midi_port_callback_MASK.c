
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_rawmidi_substream {int dummy; } ;
struct snd_fw_async_midi_port {int error; int idling; int work; scalar_t__ next_ktime; int consume_bytes; int substream; } ;
struct fw_card {int dummy; } ;


 int VAR_0 ;
 struct snd_rawmidi_substream* FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct snd_rawmidi_substream*,int ) ;
 int FUNC_4 (struct snd_rawmidi_substream*) ;

__attribute__((used)) static void FUNC_5(struct fw_card *VAR_1, int VAR_2,
         void *VAR_3, size_t VAR_4,
         void *VAR_5)
{
 struct snd_fw_async_midi_port *VAR_6 = VAR_5;
 struct snd_rawmidi_substream *VAR_7 = FUNC_0(VAR_6->substream);


 if (VAR_7 == ((void*)0))
  return;

 if (VAR_2 == VAR_0)
  FUNC_3(VAR_7, VAR_6->consume_bytes);
 else if (!FUNC_1(VAR_2))

  VAR_6->next_ktime = 0;
 else

  VAR_6->error = 1;

 VAR_6->idling = 1;

 if (!FUNC_4(VAR_7))
  FUNC_2(&VAR_6->work);
}
