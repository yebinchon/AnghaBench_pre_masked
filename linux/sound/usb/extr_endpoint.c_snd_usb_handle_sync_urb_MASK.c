
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {TYPE_1__* iso_frame_desc; int transfer_buffer; struct snd_urb_ctx* context; } ;
struct snd_usb_packet_info {int packets; int* packet_size; } ;
struct snd_usb_endpoint {scalar_t__ use_count; int next_packet_write_pos; int stride; int tenor_fb_quirk; int freqn; int freqshift; unsigned int freqmax; unsigned int freqm; int lock; struct snd_usb_packet_info* next_packet; } ;
struct snd_urb_ctx {int packets; } ;
struct TYPE_2__ {scalar_t__ status; int actual_length; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct snd_usb_endpoint*) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct snd_usb_endpoint*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 scalar_t__ FUNC_7 (int) ;

void FUNC_8(struct snd_usb_endpoint *VAR_2,
        struct snd_usb_endpoint *VAR_3,
        const struct urb *VAR_4)
{
 int VAR_5;
 unsigned int VAR_6;
 unsigned long VAR_7;

 FUNC_3(VAR_2 == VAR_3);







 if (FUNC_4(VAR_2) &&
     VAR_2->use_count != 0) {


  int VAR_8, VAR_9 = 0;
  struct snd_urb_ctx *VAR_10;
  struct snd_usb_packet_info *VAR_11;

  VAR_10 = VAR_4->context;


  for (VAR_8 = 0; VAR_8 < VAR_10->packets; VAR_8++)
   if (VAR_4->iso_frame_desc[VAR_8].status == 0)
    VAR_9 += VAR_4->iso_frame_desc[VAR_8].actual_length;





  if (VAR_9 == 0)
   return;

  FUNC_5(&VAR_2->lock, VAR_7);
  VAR_11 = VAR_2->next_packet + VAR_2->next_packet_write_pos;
  VAR_11->packets = VAR_10->packets;
  for (VAR_8 = 0; VAR_8 < VAR_10->packets; VAR_8++) {
   if (VAR_4->iso_frame_desc[VAR_8].status == 0)
    VAR_11->packet_size[VAR_8] =
     VAR_4->iso_frame_desc[VAR_8].actual_length / VAR_3->stride;
   else
    VAR_11->packet_size[VAR_8] = 0;
  }

  VAR_2->next_packet_write_pos++;
  VAR_2->next_packet_write_pos %= VAR_1;
  FUNC_6(&VAR_2->lock, VAR_7);
  FUNC_2(VAR_2);

  return;
 }
 if (VAR_4->iso_frame_desc[0].status != 0 ||
     VAR_4->iso_frame_desc[0].actual_length < 3)
  return;

 VAR_6 = FUNC_0(VAR_4->transfer_buffer);
 if (VAR_4->iso_frame_desc[0].actual_length == 3)
  VAR_6 &= 0x00ffffff;
 else
  VAR_6 &= 0x0fffffff;

 if (VAR_6 == 0)
  return;

 if (FUNC_7(VAR_3->tenor_fb_quirk)) {





  if (VAR_6 < VAR_2->freqn - 0x8000)
   VAR_6 += 0xf000;
  else if (VAR_6 > VAR_2->freqn + 0x8000)
   VAR_6 -= 0xf000;
 } else if (FUNC_7(VAR_2->freqshift == VAR_0)) {






  VAR_5 = 0;
  while (VAR_6 < VAR_2->freqn - VAR_2->freqn / 4) {
   VAR_6 <<= 1;
   VAR_5++;
  }
  while (VAR_6 > VAR_2->freqn + VAR_2->freqn / 2) {
   VAR_6 >>= 1;
   VAR_5--;
  }
  VAR_2->freqshift = VAR_5;
 } else if (VAR_2->freqshift >= 0)
  VAR_6 <<= VAR_2->freqshift;
 else
  VAR_6 >>= -VAR_2->freqshift;

 if (FUNC_1(VAR_6 >= VAR_2->freqn - VAR_2->freqn / 8 && VAR_6 <= VAR_2->freqmax)) {




  FUNC_5(&VAR_2->lock, VAR_7);
  VAR_2->freqm = VAR_6;
  FUNC_6(&VAR_2->lock, VAR_7);
 } else {




  VAR_2->freqshift = VAR_0;
 }
}
