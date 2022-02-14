
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct urb {scalar_t__ transfer_buffer_length; int dev; int transfer_buffer; } ;
struct snd_usb_midi_out_endpoint {unsigned int next_urb; int active_urbs; int buffer_lock; TYPE_3__* umidi; TYPE_1__* urbs; } ;
struct TYPE_6__ {int dev; TYPE_2__* usb_protocol_ops; scalar_t__ disconnected; } ;
struct TYPE_5__ {int (* output ) (struct snd_usb_midi_out_endpoint*,struct urb*) ;} ;
struct TYPE_4__ {struct urb* urb; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (char*,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (struct urb*,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct snd_usb_midi_out_endpoint*,struct urb*) ;

__attribute__((used)) static void FUNC_5(struct snd_usb_midi_out_endpoint *VAR_2)
{
 unsigned int VAR_3;
 struct urb *VAR_4;
 unsigned long VAR_5;

 FUNC_2(&VAR_2->buffer_lock, VAR_5);
 if (VAR_2->umidi->disconnected) {
  FUNC_3(&VAR_2->buffer_lock, VAR_5);
  return;
 }

 VAR_3 = VAR_2->next_urb;
 for (;;) {
  if (!(VAR_2->active_urbs & (1 << VAR_3))) {
   VAR_4 = VAR_2->urbs[VAR_3].urb;
   VAR_4->transfer_buffer_length = 0;
   VAR_2->umidi->usb_protocol_ops->output(VAR_2, VAR_4);
   if (VAR_4->transfer_buffer_length == 0)
    break;

   FUNC_0("sending", VAR_4->transfer_buffer,
     VAR_4->transfer_buffer_length);
   VAR_4->dev = VAR_2->umidi->dev;
   if (FUNC_1(VAR_4, VAR_0) < 0)
    break;
   VAR_2->active_urbs |= 1 << VAR_3;
  }
  if (++VAR_3 >= VAR_1)
   VAR_3 = 0;
  if (VAR_3 == VAR_2->next_urb)
   break;
 }
 VAR_2->next_urb = VAR_3;
 FUNC_3(&VAR_2->buffer_lock, VAR_5);
}
