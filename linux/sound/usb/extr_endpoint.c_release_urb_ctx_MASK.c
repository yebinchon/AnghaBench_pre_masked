
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_urb_ctx {TYPE_3__* urb; scalar_t__ buffer_size; TYPE_2__* ep; } ;
struct TYPE_6__ {int transfer_dma; int transfer_buffer; } ;
struct TYPE_5__ {TYPE_1__* chip; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int ,scalar_t__,int ,int ) ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_2(struct snd_urb_ctx *VAR_0)
{
 if (VAR_0->buffer_size)
  FUNC_0(VAR_0->ep->chip->dev, VAR_0->buffer_size,
      VAR_0->urb->transfer_buffer,
      VAR_0->urb->transfer_dma);
 FUNC_1(VAR_0->urb);
 VAR_0->urb = ((void*)0);
}
