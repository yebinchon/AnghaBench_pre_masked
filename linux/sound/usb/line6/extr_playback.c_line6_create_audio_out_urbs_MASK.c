
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_line6 {int iso_buffers; TYPE_2__* properties; int usbdev; } ;
struct urb {int start_frame; int complete; scalar_t__ error_count; int interval; int number_of_packets; int transfer_flags; int pipe; int dev; } ;
struct TYPE_3__ {struct urb** urbs; } ;
struct snd_line6_pcm {TYPE_1__ out; struct usb_line6* line6; } ;
struct TYPE_4__ {int ep_audio_w; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct urb** FUNC_0 (int,int,int ) ;
 struct urb* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int) ;

int FUNC_3(struct snd_line6_pcm *VAR_7)
{
 struct usb_line6 *VAR_8 = VAR_7->line6;
 int VAR_9;

 VAR_7->out.urbs = FUNC_0(VAR_8->iso_buffers, sizeof(struct urb *),
         VAR_1);
 if (VAR_7->out.urbs == ((void*)0))
  return -VAR_0;


 for (VAR_9 = 0; VAR_9 < VAR_8->iso_buffers; ++VAR_9) {
  struct urb *VAR_10;


  VAR_10 = VAR_7->out.urbs[VAR_9] =
      FUNC_1(VAR_3, VAR_1);

  if (VAR_10 == ((void*)0))
   return -VAR_0;

  VAR_10->dev = VAR_8->usbdev;
  VAR_10->pipe =
      FUNC_2(VAR_8->usbdev,
        VAR_8->properties->ep_audio_w &
        VAR_5);
  VAR_10->transfer_flags = VAR_4;
  VAR_10->start_frame = -1;
  VAR_10->number_of_packets = VAR_3;
  VAR_10->interval = VAR_2;
  VAR_10->error_count = 0;
  VAR_10->complete = VAR_6;
 }

 return 0;
}
