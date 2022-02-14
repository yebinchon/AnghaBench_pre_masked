
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_usb_endpoint {int datainterval; int stride; int silence_value; int freqmax; int freqn; unsigned int maxpacksize; unsigned int curpacksize; unsigned int syncinterval; unsigned int nurbs; int pipe; TYPE_1__* chip; struct snd_urb_ctx* urb; void* max_urb_frames; scalar_t__ fill_max; } ;
struct snd_urb_ctx {unsigned int index; unsigned int packets; unsigned int buffer_size; int ready_list; TYPE_2__* urb; struct snd_usb_endpoint* ep; } ;
struct audioformat {int datainterval; scalar_t__ fmt_type; scalar_t__ dsd_dop; } ;
typedef int snd_pcm_format_t ;
typedef int __le32 ;
struct TYPE_4__ {int interval; int complete; struct snd_urb_ctx* context; int transfer_flags; int pipe; int transfer_buffer; int transfer_dma; } ;
struct TYPE_3__ {int dev; int tx_length_quirk; } ;


 void* FUNC_0 (unsigned int,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;






 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 unsigned int FUNC_2 (unsigned int,unsigned int) ;
 void* FUNC_3 (unsigned int,unsigned int) ;
 int FUNC_4 (struct snd_usb_endpoint*,int ) ;
 int VAR_10 ;
 unsigned int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (struct snd_usb_endpoint*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ,unsigned int,int ,int *) ;
 TYPE_2__* FUNC_9 (unsigned int,int ) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(struct snd_usb_endpoint *VAR_11,
         snd_pcm_format_t VAR_12,
         unsigned int VAR_13,
         unsigned int VAR_14,
         unsigned int VAR_15,
         unsigned int VAR_16,
         struct audioformat *VAR_17,
         struct snd_usb_endpoint *VAR_18)
{
 unsigned int VAR_19, VAR_20, VAR_21, VAR_22;
 unsigned int VAR_23, VAR_24, VAR_25;
 unsigned int VAR_26, VAR_27;
 int VAR_28 = FUNC_5(VAR_12) * VAR_13;
 int VAR_29 = (VAR_11->chip->tx_length_quirk &&
          FUNC_11(VAR_11->pipe));

 if (VAR_12 == 132 && VAR_17->dsd_dop) {





  VAR_28 += VAR_13 << 3;
 }

 VAR_11->datainterval = VAR_17->datainterval;
 VAR_11->stride = VAR_28 >> 3;

 switch (VAR_12) {
 case 128:
  VAR_11->silence_value = 0x80;
  break;
 case 129:
 case 132:
 case 130:
 case 133:
 case 131:
  VAR_11->silence_value = 0x69;
  break;
 default:
  VAR_11->silence_value = 0;
 }


 VAR_11->freqmax = VAR_11->freqn + (VAR_11->freqn >> 1);
 VAR_19 = (((VAR_11->freqmax << VAR_11->datainterval) + 0xffff) >> 16) *
    (VAR_28 >> 3);
 if (VAR_29)
  VAR_19 += sizeof(__le32);

 if (VAR_11->maxpacksize && VAR_11->maxpacksize < VAR_19) {

  unsigned int VAR_30 = VAR_19 = VAR_11->maxpacksize;

  if (VAR_29)

   VAR_30 -= sizeof(__le32);
  VAR_11->freqmax = (VAR_30 / (VAR_28 >> 3))
    << (16 - VAR_11->datainterval);
 }

 if (VAR_11->fill_max)
  VAR_11->curpacksize = VAR_11->maxpacksize;
 else
  VAR_11->curpacksize = VAR_19;

 if (FUNC_7(VAR_11->chip->dev) != VAR_8) {
  VAR_21 = 8 >> VAR_11->datainterval;
  VAR_22 = VAR_3;
 } else {
  VAR_21 = 1;
  VAR_22 = VAR_2;
 }
 if (VAR_18 && !FUNC_6(VAR_11))
  VAR_22 = FUNC_3(VAR_22,
     1U << VAR_18->syncinterval);
 VAR_22 = FUNC_2(1u, VAR_22 >> VAR_11->datainterval);
 if (FUNC_10(VAR_11->pipe) ||
   FUNC_6(VAR_11)) {

  VAR_25 = VAR_21;






  if (FUNC_7(VAR_11->chip->dev) == VAR_9) {
   int VAR_31 = VAR_11->datainterval;
   while (VAR_31 < 5) {
    VAR_25 <<= 1;
    ++VAR_31;
   }
  }

  VAR_25 = FUNC_3(VAR_22, VAR_25);
  while (VAR_25 > 1 && VAR_25 * VAR_19 >= VAR_14)
   VAR_25 >>= 1;
  VAR_11->nurbs = VAR_5;







 } else {

  VAR_20 = (VAR_11->freqn >> (16 - VAR_11->datainterval)) *
    (VAR_28 >> 3);

  if (VAR_18)
   VAR_20 -= VAR_20 >> 3;
  VAR_20 = FUNC_2(VAR_20, 1u);


  VAR_23 = FUNC_0(VAR_14, VAR_20);


  VAR_24 = FUNC_0(VAR_23,
    VAR_22);

  VAR_25 = FUNC_0(VAR_23, VAR_24);


  VAR_11->max_urb_frames = FUNC_0(VAR_15,
     VAR_24);


  VAR_26 = FUNC_3((unsigned) VAR_5,
    VAR_4 * VAR_21 / VAR_25);
  VAR_11->nurbs = FUNC_3(VAR_26, VAR_24 * VAR_16);
 }


 for (VAR_27 = 0; VAR_27 < VAR_11->nurbs; VAR_27++) {
  struct snd_urb_ctx *VAR_32 = &VAR_11->urb[VAR_27];
  VAR_32->index = VAR_27;
  VAR_32->ep = VAR_11;
  VAR_32->packets = VAR_25;
  VAR_32->buffer_size = VAR_19 * VAR_32->packets;

  if (VAR_17->fmt_type == VAR_6)
   VAR_32->packets++;
  VAR_32->urb = FUNC_9(VAR_32->packets, VAR_1);
  if (!VAR_32->urb)
   goto out_of_memory;

  VAR_32->urb->transfer_buffer =
   FUNC_8(VAR_11->chip->dev, VAR_32->buffer_size,
        VAR_1, &VAR_32->urb->transfer_dma);
  if (!VAR_32->urb->transfer_buffer)
   goto out_of_memory;
  VAR_32->urb->pipe = VAR_11->pipe;
  VAR_32->urb->transfer_flags = VAR_7;
  VAR_32->urb->interval = 1 << VAR_11->datainterval;
  VAR_32->urb->context = VAR_32;
  VAR_32->urb->complete = VAR_10;
  FUNC_1(&VAR_32->ready_list);
 }

 return 0;

out_of_memory:
 FUNC_4(VAR_11, 0);
 return -VAR_0;
}
