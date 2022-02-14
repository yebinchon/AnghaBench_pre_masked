
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct urb {int number_of_packets; unsigned int transfer_buffer_length; scalar_t__ transfer_buffer; TYPE_2__* iso_frame_desc; } ;
struct snd_usb_endpoint {int stride; int silence_value; TYPE_1__* chip; } ;
struct snd_urb_ctx {int packets; int* packet_size; struct urb* urb; } ;
typedef int packet_length ;
typedef int __le32 ;
struct TYPE_4__ {unsigned int offset; unsigned int length; } ;
struct TYPE_3__ {scalar_t__ tx_length_quirk; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (scalar_t__,int *,int) ;
 int FUNC_2 (scalar_t__,int ,unsigned int) ;
 int FUNC_3 (struct snd_usb_endpoint*) ;

__attribute__((used)) static void FUNC_4(struct snd_usb_endpoint *VAR_0,
          struct snd_urb_ctx *VAR_1)
{
 struct urb *VAR_2 = VAR_1->urb;
 unsigned int VAR_3 = 0;
 unsigned int VAR_4 = 0;
 __le32 VAR_5;
 int VAR_6;


 if (VAR_0->chip->tx_length_quirk)
  VAR_4 = sizeof(VAR_5);

 for (VAR_6 = 0; VAR_6 < VAR_1->packets; ++VAR_6) {
  unsigned int VAR_7;
  unsigned int VAR_8;
  int VAR_9;

  if (VAR_1->packet_size[VAR_6])
   VAR_9 = VAR_1->packet_size[VAR_6];
  else
   VAR_9 = FUNC_3(VAR_0);

  VAR_8 = VAR_9 * VAR_0->stride;
  VAR_7 = VAR_3 * VAR_0->stride + VAR_4 * VAR_6;
  VAR_2->iso_frame_desc[VAR_6].offset = VAR_7;
  VAR_2->iso_frame_desc[VAR_6].length = VAR_8 + VAR_4;
  if (VAR_4) {
   VAR_5 = FUNC_0(VAR_8);
   FUNC_1(VAR_2->transfer_buffer + VAR_7,
          &VAR_5, sizeof(VAR_5));
  }
  FUNC_2(VAR_2->transfer_buffer + VAR_7 + VAR_4,
         VAR_0->silence_value, VAR_8);
  VAR_3 += VAR_9;
 }

 VAR_2->number_of_packets = VAR_1->packets;
 VAR_2->transfer_buffer_length = VAR_3 * VAR_0->stride + VAR_1->packets * VAR_4;
}
