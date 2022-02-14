
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct usbmidi_out_port {int substream; scalar_t__ active; } ;
struct urb {int* transfer_buffer; int transfer_buffer_length; } ;
struct snd_usb_midi_out_endpoint {int current_port; int max_transfer; struct usbmidi_out_port* ports; } ;


 int FUNC_0 (int ,int*,int) ;
 int FUNC_1 (int ,int*,int) ;

__attribute__((used)) static void FUNC_2(struct snd_usb_midi_out_endpoint *VAR_0,
          struct urb *VAR_1)
{
 int VAR_2 = VAR_0->current_port;
 uint8_t *VAR_3 = VAR_1->transfer_buffer;
 int VAR_4 = VAR_0->max_transfer;
 int VAR_5, VAR_6;

 for (VAR_6 = 0; VAR_6 < 0x10; ++VAR_6) {

  int VAR_7 = (VAR_2 + VAR_6) & 15;
  struct usbmidi_out_port *VAR_8 = &VAR_0->ports[VAR_7];

  if (!VAR_8->active)
   continue;
  if (FUNC_1(VAR_8->substream, VAR_3, 1) != 1) {
   VAR_8->active = 0;
   continue;
  }

  if (VAR_7 != VAR_0->current_port) {
   if (VAR_4 < 2)
    break;
   VAR_0->current_port = VAR_7;
   VAR_3[0] = 0xf5;
   VAR_3[1] = (VAR_7 + 1) & 15;
   VAR_3 += 2;
   VAR_4 -= 2;
  }

  if (VAR_4 < 1)
   break;
  VAR_5 = FUNC_0(VAR_8->substream, VAR_3, VAR_4);
  if (VAR_5 > 0) {
   VAR_3 += VAR_5;
   VAR_4 -= VAR_5;
   if (VAR_4 < 1)
    break;
  }
 }
 if (VAR_4 < VAR_0->max_transfer && VAR_4 > 0) {
  *VAR_3 = 0xff;
  --VAR_4;
 }
 VAR_1->transfer_buffer_length = VAR_0->max_transfer - VAR_4;
}
