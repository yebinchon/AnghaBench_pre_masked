
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usb_iso_packet_descriptor {int offset; int actual_length; int status; } ;
struct urb {char* transfer_buffer; struct usb_iso_packet_descriptor* iso_frame_desc; int start_frame; scalar_t__ context; } ;
struct TYPE_8__ {int lock; int running; int unlink_urbs; int active_urbs; struct urb** urbs; int last_frame; } ;
struct snd_line6_pcm {int max_packet_size_in; char* prev_fbuf; int prev_fsize; TYPE_4__ in; TYPE_3__* properties; TYPE_1__* line6; } ;
struct TYPE_6__ {int channels_max; } ;
struct TYPE_7__ {int bytes_per_channel; TYPE_2__ capture_hw; } ;
struct TYPE_5__ {int iso_buffers; int ifcdev; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int ,char*,int,int) ;
 int FUNC_3 (struct snd_line6_pcm*,int) ;
 int FUNC_4 (struct snd_line6_pcm*,char*,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct snd_line6_pcm*) ;
 scalar_t__ FUNC_8 (int,int *) ;
 scalar_t__ FUNC_9 (int ,int *) ;

__attribute__((used)) static void FUNC_10(struct urb *VAR_4)
{
 int VAR_5, VAR_6, VAR_7 = 0, VAR_8 = 0;
 unsigned long VAR_9;

 struct snd_line6_pcm *VAR_10 = (struct snd_line6_pcm *)VAR_4->context;

 VAR_10->in.last_frame = VAR_4->start_frame;


 for (VAR_6 = 0; VAR_6 < VAR_10->line6->iso_buffers; ++VAR_6)
  if (VAR_4 == VAR_10->in.urbs[VAR_6])
   break;

 FUNC_5(&VAR_10->in.lock, VAR_9);

 for (VAR_5 = 0; VAR_5 < VAR_1; ++VAR_5) {
  char *VAR_11;
  int VAR_12;
  struct usb_iso_packet_descriptor *VAR_13 = &VAR_4->iso_frame_desc[VAR_5];

  if (VAR_13->status == -VAR_0) {
   VAR_8 = 1;
   break;
  }

  VAR_11 = VAR_4->transfer_buffer + VAR_13->offset;
  VAR_12 = VAR_13->actual_length;

  if (VAR_12 > VAR_10->max_packet_size_in) {
   FUNC_2(VAR_10->line6->ifcdev,
    "driver and/or device bug: packet too large (%d > %d)\n",
    VAR_12, VAR_10->max_packet_size_in);
  }

  VAR_7 += VAR_12;

  FUNC_0(VAR_1 != 1,
   "The following code assumes LINE6_ISO_PACKETS == 1");







  VAR_10->prev_fbuf = VAR_11;
  VAR_10->prev_fsize = VAR_12 /
   (VAR_10->properties->bytes_per_channel *
   VAR_10->properties->capture_hw.channels_max);

  if (!FUNC_9(VAR_2, &VAR_10->in.running) &&
      FUNC_9(VAR_3, &VAR_10->in.running) &&
      VAR_12 > 0)
   FUNC_4(VAR_10, VAR_11, VAR_12);
 }

 FUNC_1(VAR_6, &VAR_10->in.active_urbs);

 if (FUNC_8(VAR_6, &VAR_10->in.unlink_urbs))
  VAR_8 = 1;

 if (!VAR_8) {
  FUNC_7(VAR_10);

  if (!FUNC_9(VAR_2, &VAR_10->in.running) &&
      FUNC_9(VAR_3, &VAR_10->in.running))
   FUNC_3(VAR_10, VAR_7);
 }

 FUNC_6(&VAR_10->in.lock, VAR_9);
}
