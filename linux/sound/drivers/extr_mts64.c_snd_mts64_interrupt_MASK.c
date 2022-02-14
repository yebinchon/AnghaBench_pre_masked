
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct snd_rawmidi_substream {size_t number; } ;
struct snd_card {struct mts64* private_data; } ;
struct mts64 {int current_midi_input_port; int* mode; int lock; struct snd_rawmidi_substream** midi_input_substream; TYPE_1__* pardev; } ;
struct TYPE_2__ {int port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct snd_rawmidi_substream*,int*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(void *VAR_2)
{
 struct mts64 *VAR_3 = ((struct snd_card*)VAR_2)->private_data;
 u16 VAR_4;
 u8 VAR_5, VAR_6;
 struct snd_rawmidi_substream *VAR_7;

 FUNC_3(&VAR_3->lock);
 VAR_4 = FUNC_1(VAR_3->pardev->port);
 VAR_6 = VAR_4 & 0x00ff;
 VAR_5 = VAR_4 >> 8;

 if (VAR_5 & VAR_1) {
  VAR_3->current_midi_input_port = FUNC_0(VAR_6);
 } else {
  if (VAR_3->current_midi_input_port == -1)
   goto __out;
  VAR_7 = VAR_3->midi_input_substream[VAR_3->current_midi_input_port];
  if (VAR_3->mode[VAR_7->number] & VAR_0)
   FUNC_2(VAR_7, &VAR_6, 1);
 }
__out:
 FUNC_4(&VAR_3->lock);
}
