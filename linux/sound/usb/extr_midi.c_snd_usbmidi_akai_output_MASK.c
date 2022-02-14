
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct urb {int* transfer_buffer; int transfer_buffer_length; } ;
struct snd_usb_midi_out_endpoint {int max_transfer; TYPE_1__* ports; } ;
struct snd_rawmidi_substream {int dummy; } ;
struct TYPE_2__ {scalar_t__ active; struct snd_rawmidi_substream* substream; } ;


 int VAR_0 ;
 int FUNC_0 (int*,int*,int) ;
 int FUNC_1 (struct snd_rawmidi_substream*,int) ;
 int FUNC_2 (struct snd_rawmidi_substream*,int*,int) ;

__attribute__((used)) static void FUNC_3(struct snd_usb_midi_out_endpoint *VAR_1,
        struct urb *VAR_2)
{
 uint8_t *VAR_3;
 int VAR_4, VAR_5, VAR_6, VAR_7;
 uint8_t VAR_8[VAR_0];
 struct snd_rawmidi_substream *VAR_9 = VAR_1->ports[0].substream;

 if (!VAR_1->ports[0].active)
  return;

 VAR_3 = VAR_2->transfer_buffer + VAR_2->transfer_buffer_length;
 VAR_7 = VAR_1->max_transfer - VAR_0 - 1;


 while (VAR_2->transfer_buffer_length < VAR_7) {
  VAR_6 = FUNC_2(VAR_9,
        VAR_8, VAR_0);
  if (!VAR_6) {
   VAR_1->ports[0].active = 0;
   return;
  }

  for (VAR_4 = 0; VAR_4 < VAR_6 && VAR_8[VAR_4] != 0xF0; VAR_4++)
   ;

  if (VAR_4 > 0) {
   FUNC_1(VAR_9, VAR_4);
   continue;
  }


  for (VAR_5 = 1; VAR_5 < VAR_6 && VAR_8[VAR_5] < 0xF0; VAR_5++)
   ;


  if (VAR_5 < VAR_6 && VAR_8[VAR_5] == 0xF0) {

   FUNC_1(VAR_9, VAR_5);
   continue;
  }

  if (VAR_5 < VAR_6 && VAR_8[VAR_5] == 0xF7) {

   VAR_6 = VAR_5 + 1;
   VAR_3[0] = 0x10 | VAR_6;
   FUNC_0(&VAR_3[1], VAR_8, VAR_6);
   FUNC_1(VAR_9, VAR_6);
   VAR_2->transfer_buffer_length += VAR_6 + 1;
   VAR_3 += VAR_6 + 1;
   continue;
  }

  if (VAR_6 < VAR_0) {
   VAR_1->ports[0].active = 0;
   return;
  }

  FUNC_1(VAR_9, VAR_6);
 }
}
