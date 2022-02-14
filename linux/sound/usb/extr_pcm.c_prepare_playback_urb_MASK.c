
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct urb {unsigned int transfer_buffer_length; int * transfer_buffer; scalar_t__ number_of_packets; TYPE_1__* iso_frame_desc; struct snd_urb_ctx* context; } ;
struct snd_usb_substream {scalar_t__ frame_limit; scalar_t__ transfer_done; scalar_t__ fmt_type; scalar_t__ pcm_format; int hwptr_done; unsigned int last_delay; int last_frame_number; int trigger_tstamp_pending_update; TYPE_3__* pcm_substream; int lock; int dev; int tx_length_quirk; TYPE_2__* cur_audiofmt; struct snd_usb_endpoint* data_endpoint; } ;
struct snd_usb_endpoint {scalar_t__ max_urb_frames; unsigned int stride; } ;
struct snd_urb_ctx {int packets; int* packet_size; } ;
struct snd_pcm_runtime {int frame_bits; scalar_t__ period_size; int buffer_size; unsigned int delay; int trigger_tstamp; int * dma_area; } ;
struct TYPE_6__ {struct snd_pcm_runtime* runtime; } ;
struct TYPE_5__ {scalar_t__ dsd_bitrev; scalar_t__ dsd_dop; } ;
struct TYPE_4__ {unsigned int offset; unsigned int length; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_usb_substream*,struct urb*,int ,int,unsigned int) ;
 unsigned int FUNC_2 (struct snd_usb_substream*,struct urb*,int,unsigned int) ;
 int FUNC_3 (struct snd_usb_substream*,struct urb*,unsigned int) ;
 int FUNC_4 (struct snd_pcm_runtime*,int *) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (struct snd_usb_endpoint*) ;
 unsigned int FUNC_7 (struct snd_usb_endpoint*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static void FUNC_12(struct snd_usb_substream *VAR_3,
     struct urb *VAR_4)
{
 struct snd_pcm_runtime *VAR_5 = VAR_3->pcm_substream->runtime;
 struct snd_usb_endpoint *VAR_6 = VAR_3->data_endpoint;
 struct snd_urb_ctx *VAR_7 = VAR_4->context;
 unsigned int VAR_8, VAR_9, VAR_10;
 int VAR_11, VAR_12, VAR_13 = 0;
 unsigned long VAR_14;

 VAR_12 = VAR_5->frame_bits >> 3;

 VAR_9 = 0;
 VAR_4->number_of_packets = 0;
 FUNC_8(&VAR_3->lock, VAR_14);
 VAR_3->frame_limit += VAR_6->max_urb_frames;
 for (VAR_11 = 0; VAR_11 < VAR_7->packets; VAR_11++) {
  if (VAR_7->packet_size[VAR_11])
   VAR_8 = VAR_7->packet_size[VAR_11];
  else
   VAR_8 = FUNC_7(VAR_6);


  VAR_4->iso_frame_desc[VAR_11].offset = VAR_9 * VAR_6->stride;
  VAR_4->iso_frame_desc[VAR_11].length = VAR_8 * VAR_6->stride;
  VAR_9 += VAR_8;
  VAR_4->number_of_packets++;
  VAR_3->transfer_done += VAR_8;
  if (VAR_3->transfer_done >= VAR_5->period_size) {
   VAR_3->transfer_done -= VAR_5->period_size;
   VAR_3->frame_limit = 0;
   VAR_13 = 1;
   if (VAR_3->fmt_type == VAR_2) {
    if (VAR_3->transfer_done > 0) {


     VAR_9 -= VAR_3->transfer_done;
     VAR_8 -= VAR_3->transfer_done;
     VAR_4->iso_frame_desc[VAR_11].length =
      VAR_8 * VAR_6->stride;
     VAR_3->transfer_done = 0;
    }
    VAR_11++;
    if (VAR_11 < VAR_7->packets) {

     VAR_4->iso_frame_desc[VAR_11].offset =
      VAR_9 * VAR_6->stride;
     VAR_4->iso_frame_desc[VAR_11].length = 0;
     VAR_4->number_of_packets++;
    }
    break;
   }
  }

  if ((VAR_13 ||
    VAR_3->transfer_done >= VAR_3->frame_limit) &&
      !FUNC_6(VAR_6))
   break;
 }
 VAR_10 = VAR_9 * VAR_6->stride;

 if (FUNC_10(VAR_3->pcm_format == VAR_0 &&
       VAR_3->cur_audiofmt->dsd_dop)) {
  FUNC_3(VAR_3, VAR_4, VAR_10);
 } else if (FUNC_10(VAR_3->pcm_format == VAR_1 &&
      VAR_3->cur_audiofmt->dsd_bitrev)) {

  u8 *VAR_15 = VAR_4->transfer_buffer;
  for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
   int VAR_16 = (VAR_3->hwptr_done + VAR_11)
    % (VAR_5->buffer_size * VAR_12);
   VAR_15[VAR_11] = FUNC_0(VAR_5->dma_area[VAR_16]);
  }

  VAR_3->hwptr_done += VAR_10;
  if (VAR_3->hwptr_done >= VAR_5->buffer_size * VAR_12)
   VAR_3->hwptr_done -= VAR_5->buffer_size * VAR_12;
 } else {

  if (!VAR_3->tx_length_quirk)
   FUNC_1(VAR_3, VAR_4, 0, VAR_12, VAR_10);
  else
   VAR_10 = FUNC_2(VAR_3, VAR_4, VAR_12, VAR_10);

 }


 VAR_5->delay = VAR_3->last_delay;
 VAR_5->delay += VAR_9;
 VAR_3->last_delay = VAR_5->delay;


 VAR_3->last_frame_number = FUNC_11(VAR_3->dev);
 VAR_3->last_frame_number &= 0xFF;

 if (VAR_3->trigger_tstamp_pending_update) {



  FUNC_4(VAR_5, &VAR_5->trigger_tstamp);
  VAR_3->trigger_tstamp_pending_update = 0;
 }

 FUNC_9(&VAR_3->lock, VAR_14);
 VAR_4->transfer_buffer_length = VAR_10;
 if (VAR_13)
  FUNC_5(VAR_3->pcm_substream);
}
