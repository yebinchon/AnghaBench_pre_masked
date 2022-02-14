
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_line6 {int max_packet_size; struct snd_line6_midi* line6midi; } ;
struct snd_rawmidi_substream {int dummy; } ;
struct midi_buffer {int dummy; } ;
struct snd_line6_midi {struct midi_buffer midibuf_out; } ;
struct TYPE_2__ {struct usb_line6* line6; } ;


 int VAR_0 ;
 int FUNC_0 (struct midi_buffer*) ;
 int FUNC_1 (struct midi_buffer*,unsigned char*,int) ;
 int FUNC_2 (struct midi_buffer*,unsigned char*,int) ;
 TYPE_1__* FUNC_3 (struct snd_rawmidi_substream*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct usb_line6*,unsigned char*,int) ;
 int FUNC_6 (struct snd_rawmidi_substream*,int) ;
 int FUNC_7 (struct snd_rawmidi_substream*,unsigned char*,int) ;

__attribute__((used)) static void FUNC_8(struct snd_rawmidi_substream *VAR_1)
{
 struct usb_line6 *VAR_2 =
     FUNC_3(VAR_1)->line6;
 struct snd_line6_midi *VAR_3 = VAR_2->line6midi;
 struct midi_buffer *VAR_4 = &VAR_3->midibuf_out;
 unsigned char VAR_5[VAR_0];
 int VAR_6, VAR_7;

 for (;;) {
  VAR_6 = FUNC_4(FUNC_0(VAR_4), VAR_2->max_packet_size);
  VAR_7 = FUNC_7(VAR_1, VAR_5, VAR_6);

  if (VAR_7 == 0)
   break;

  FUNC_2(VAR_4, VAR_5, VAR_7);
  FUNC_6(VAR_1, VAR_7);
 }

 for (;;) {
  VAR_7 = FUNC_1(VAR_4, VAR_5,
       VAR_0);

  if (VAR_7 == 0)
   break;

  FUNC_5(VAR_2, VAR_5, VAR_7);
 }
}
