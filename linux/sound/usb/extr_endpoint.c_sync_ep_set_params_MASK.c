
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_usb_endpoint {int syncinterval; int nurbs; int pipe; scalar_t__ sync_dma; scalar_t__ syncbuf; struct snd_urb_ctx* urb; TYPE_1__* chip; } ;
struct snd_urb_ctx {int index; int packets; TYPE_2__* urb; struct snd_usb_endpoint* ep; } ;
struct TYPE_4__ {int transfer_buffer_length; int number_of_packets; int interval; int complete; struct snd_urb_ctx* context; int transfer_flags; int pipe; scalar_t__ transfer_dma; scalar_t__ transfer_buffer; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_usb_endpoint*,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ,int,int ,scalar_t__*) ;
 TYPE_2__* FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_usb_endpoint *VAR_5)
{
 int VAR_6;

 VAR_5->syncbuf = FUNC_1(VAR_5->chip->dev, VAR_2 * 4,
      VAR_1, &VAR_5->sync_dma);
 if (!VAR_5->syncbuf)
  return -VAR_0;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  struct snd_urb_ctx *VAR_7 = &VAR_5->urb[VAR_6];
  VAR_7->index = VAR_6;
  VAR_7->ep = VAR_5;
  VAR_7->packets = 1;
  VAR_7->urb = FUNC_2(1, VAR_1);
  if (!VAR_7->urb)
   goto out_of_memory;
  VAR_7->urb->transfer_buffer = VAR_5->syncbuf + VAR_6 * 4;
  VAR_7->urb->transfer_dma = VAR_5->sync_dma + VAR_6 * 4;
  VAR_7->urb->transfer_buffer_length = 4;
  VAR_7->urb->pipe = VAR_5->pipe;
  VAR_7->urb->transfer_flags = VAR_3;
  VAR_7->urb->number_of_packets = 1;
  VAR_7->urb->interval = 1 << VAR_5->syncinterval;
  VAR_7->urb->context = VAR_7;
  VAR_7->urb->complete = VAR_4;
 }

 VAR_5->nurbs = VAR_2;

 return 0;

out_of_memory:
 FUNC_0(VAR_5, 0);
 return -VAR_0;
}
