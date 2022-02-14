
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_iso_packet_descriptor {int offset; int length; } ;
struct urb {int transfer_buffer_length; struct snd_line6_pcm* context; scalar_t__ transfer_buffer; struct usb_iso_packet_descriptor* iso_frame_desc; } ;
struct TYPE_3__ {int active_urbs; scalar_t__ buffer; struct urb** urbs; } ;
struct snd_line6_pcm {int max_packet_size_in; TYPE_2__* line6; TYPE_1__ in; } ;
struct TYPE_4__ {int iso_buffers; int ifcdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (struct urb*,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_line6_pcm *VAR_3)
{
 int VAR_4;
 int VAR_5, VAR_6;
 int VAR_7;
 struct urb *VAR_8;

 VAR_4 = FUNC_1(&VAR_3->in.active_urbs,
        VAR_3->line6->iso_buffers);

 if (VAR_4 < 0 || VAR_4 >= VAR_3->line6->iso_buffers) {
  FUNC_0(VAR_3->line6->ifcdev, "no free URB found\n");
  return -VAR_0;
 }

 VAR_8 = VAR_3->in.urbs[VAR_4];
 VAR_6 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_2; ++VAR_5) {
  struct usb_iso_packet_descriptor *VAR_9 =
      &VAR_8->iso_frame_desc[VAR_5];
  VAR_9->offset = VAR_6;
  VAR_9->length = VAR_3->max_packet_size_in;
  VAR_6 += VAR_3->max_packet_size_in;
 }

 VAR_8->transfer_buffer =
     VAR_3->in.buffer +
     VAR_4 * VAR_2 * VAR_3->max_packet_size_in;
 VAR_8->transfer_buffer_length = VAR_6;
 VAR_8->context = VAR_3;

 VAR_7 = FUNC_3(VAR_8, VAR_1);

 if (VAR_7 == 0)
  FUNC_2(VAR_4, &VAR_3->in.active_urbs);
 else
  FUNC_0(VAR_3->line6->ifcdev,
   "URB in #%d submission failed (%d)\n", VAR_4, VAR_7);

 return 0;
}
