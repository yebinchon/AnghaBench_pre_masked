
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct urb {int number_of_packets; TYPE_1__* iso_frame_desc; scalar_t__ transfer_buffer; } ;
struct snd_usb_substream {int pkt_offset_adj; unsigned int hwptr_done; scalar_t__ transfer_done; int last_frame_number; TYPE_3__* pcm_substream; int lock; scalar_t__ last_delay; TYPE_2__* dev; int txfr_quirk; } ;
struct snd_pcm_runtime {int frame_bits; int sample_bits; unsigned int buffer_size; scalar_t__ period_size; scalar_t__ dma_area; scalar_t__ delay; } ;
struct TYPE_6__ {struct snd_pcm_runtime* runtime; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {int offset; unsigned int actual_length; scalar_t__ status; } ;


 int FUNC_0 (int *,char*,int,scalar_t__) ;
 int FUNC_1 (int *,char*,int,unsigned int) ;
 int FUNC_2 (scalar_t__,unsigned char*,unsigned int) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_8(struct snd_usb_substream *VAR_0,
          struct urb *VAR_1)
{
 struct snd_pcm_runtime *VAR_2 = VAR_0->pcm_substream->runtime;
 unsigned int VAR_3, VAR_4, VAR_5, VAR_6;
 int VAR_7, VAR_8 = 0;
 unsigned long VAR_9;
 unsigned char *VAR_10;
 int VAR_11;


 VAR_11 = FUNC_7(VAR_0->dev);

 VAR_3 = VAR_2->frame_bits >> 3;

 for (VAR_7 = 0; VAR_7 < VAR_1->number_of_packets; VAR_7++) {
  VAR_10 = (unsigned char *)VAR_1->transfer_buffer + VAR_1->iso_frame_desc[VAR_7].offset + VAR_0->pkt_offset_adj;
  if (VAR_1->iso_frame_desc[VAR_7].status && FUNC_3()) {
   FUNC_0(&VAR_0->dev->dev, "frame %d active: %d\n",
    VAR_7, VAR_1->iso_frame_desc[VAR_7].status);

  }
  VAR_5 = VAR_1->iso_frame_desc[VAR_7].actual_length;
  VAR_4 = VAR_5 / VAR_3;
  if (!VAR_0->txfr_quirk)
   VAR_5 = VAR_4 * VAR_3;
  if (VAR_5 % (VAR_2->sample_bits >> 3) != 0) {
   int VAR_12 = VAR_5;
   VAR_5 = VAR_4 * VAR_3;
   FUNC_1(&VAR_0->dev->dev,
     "Corrected urb data len. %d->%d\n",
       VAR_12, VAR_5);
  }

  FUNC_5(&VAR_0->lock, VAR_9);
  VAR_6 = VAR_0->hwptr_done;
  VAR_0->hwptr_done += VAR_5;
  if (VAR_0->hwptr_done >= VAR_2->buffer_size * VAR_3)
   VAR_0->hwptr_done -= VAR_2->buffer_size * VAR_3;
  VAR_4 = (VAR_5 + (VAR_6 % VAR_3)) / VAR_3;
  VAR_0->transfer_done += VAR_4;
  if (VAR_0->transfer_done >= VAR_2->period_size) {
   VAR_0->transfer_done -= VAR_2->period_size;
   VAR_8 = 1;
  }



  VAR_2->delay = VAR_0->last_delay = 0;


  VAR_0->last_frame_number = VAR_11;
  VAR_0->last_frame_number &= 0xFF;

  FUNC_6(&VAR_0->lock, VAR_9);

  if (VAR_6 + VAR_5 > VAR_2->buffer_size * VAR_3) {
   unsigned int VAR_13 =
     VAR_2->buffer_size * VAR_3 - VAR_6;
   FUNC_2(VAR_2->dma_area + VAR_6, VAR_10, VAR_13);
   FUNC_2(VAR_2->dma_area, VAR_10 + VAR_13, VAR_5 - VAR_13);
  } else {
   FUNC_2(VAR_2->dma_area + VAR_6, VAR_10, VAR_5);
  }
 }

 if (VAR_8)
  FUNC_4(VAR_0->pcm_substream);
}
