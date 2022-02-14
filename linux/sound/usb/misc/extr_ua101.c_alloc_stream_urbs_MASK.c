
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_7__ {unsigned int transfer_dma; unsigned int transfer_buffer_length; int number_of_packets; int interval; void (* complete ) (struct urb*) ;TYPE_1__* iso_frame_desc; struct ua101* context; int * transfer_buffer; int transfer_flags; int pipe; TYPE_2__* dev; } ;
struct ua101_urb {TYPE_3__ urb; } ;
struct ua101_stream {unsigned int max_packet_bytes; unsigned int queue_length; struct ua101_urb** urbs; int usb_pipe; TYPE_4__* buffers; } ;
struct ua101 {TYPE_2__* dev; } ;
typedef unsigned int dma_addr_t ;
struct TYPE_8__ {unsigned int size; unsigned int dma; int * addr; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {unsigned int length; scalar_t__ offset; } ;


 unsigned int FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,char*) ;
 struct ua101_urb* FUNC_2 (int,int ) ;
 int FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_4(struct ua101 *VAR_4, struct ua101_stream *VAR_5,
        void (*VAR_6)(struct urb *))
{
 unsigned VAR_7 = VAR_5->max_packet_bytes;
 struct ua101_urb *VAR_8;
 unsigned int VAR_9, VAR_10 = 0;

 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_5->buffers); ++VAR_9) {
  unsigned int VAR_11 = VAR_5->buffers[VAR_9].size;
  u8 *VAR_12 = VAR_5->buffers[VAR_9].addr;
  dma_addr_t VAR_13 = VAR_5->buffers[VAR_9].dma;

  while (VAR_11 >= VAR_7) {
   if (VAR_10 >= VAR_5->queue_length)
    goto bufsize_error;
   VAR_8 = FUNC_2(sizeof(*VAR_8), VAR_2);
   if (!VAR_8)
    return -VAR_0;
   FUNC_3(&VAR_8->urb);
   VAR_8->urb.dev = VAR_4->dev;
   VAR_8->urb.pipe = VAR_5->usb_pipe;
   VAR_8->urb.transfer_flags = VAR_3;
   VAR_8->urb.transfer_buffer = VAR_12;
   VAR_8->urb.transfer_dma = VAR_13;
   VAR_8->urb.transfer_buffer_length = VAR_7;
   VAR_8->urb.number_of_packets = 1;
   VAR_8->urb.interval = 1;
   VAR_8->urb.context = VAR_4;
   VAR_8->urb.complete = VAR_6;
   VAR_8->urb.iso_frame_desc[0].offset = 0;
   VAR_8->urb.iso_frame_desc[0].length = VAR_7;
   VAR_5->urbs[VAR_10++] = VAR_8;
   VAR_11 -= VAR_7;
   VAR_12 += VAR_7;
   VAR_13 += VAR_7;
  }
 }
 if (VAR_10 == VAR_5->queue_length)
  return 0;
bufsize_error:
 FUNC_1(&VAR_4->dev->dev, "internal buffer size error\n");
 return -VAR_1;
}
