
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_rawmidi_substream {int dummy; } ;
struct snd_ff {int* rx_midi_error; int * rx_midi_work; int * rx_bytes; scalar_t__* next_ktime; int * rx_midi_substreams; } ;


 int VAR_0 ;
 struct snd_rawmidi_substream* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct snd_rawmidi_substream*,int ) ;
 int FUNC_4 (struct snd_rawmidi_substream*) ;

__attribute__((used)) static void FUNC_5(struct snd_ff *VAR_1, unsigned int VAR_2,
         int VAR_3)
{
 struct snd_rawmidi_substream *VAR_4 =
    FUNC_0(VAR_1->rx_midi_substreams[VAR_2]);

 if (FUNC_1(VAR_3)) {
  VAR_1->rx_midi_error[VAR_2] = 1;
  return;
 }

 if (VAR_3 != VAR_0) {

  VAR_1->next_ktime[VAR_2] = 0;
  FUNC_2(&VAR_1->rx_midi_work[VAR_2]);
  return;
 }

 FUNC_3(VAR_4, VAR_1->rx_bytes[VAR_2]);
 VAR_1->rx_bytes[VAR_2] = 0;

 if (!FUNC_4(VAR_4))
  FUNC_2(&VAR_1->rx_midi_work[VAR_2]);
}
