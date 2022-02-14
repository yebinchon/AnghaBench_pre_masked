
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_line6 {int card; int ifcdev; int usbdev; struct snd_line6_pcm* line6pcm; TYPE_1__* properties; } ;
struct snd_pcm {int private_free; struct snd_line6_pcm* private_data; } ;
struct TYPE_6__ {int lock; } ;
struct TYPE_5__ {int lock; } ;
struct snd_line6_pcm {int* volume_playback; int volume_monitor; struct usb_line6* line6; void* max_packet_size_out; void* max_packet_size_in; int impulse_period; TYPE_3__ in; TYPE_2__ out; struct line6_pcm_properties* properties; struct snd_pcm* pcm; int state_mutex; } ;
struct line6_pcm_properties {int dummy; } ;
struct TYPE_4__ {unsigned int ep_audio_r; unsigned int ep_audio_w; int capabilities; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*) ;
 struct snd_line6_pcm* FUNC_2 (int,int ) ;
 int VAR_5 ;
 int * VAR_6 ;
 int FUNC_3 (struct snd_line6_pcm*) ;
 int FUNC_4 (struct snd_line6_pcm*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int *,struct snd_line6_pcm*) ;
 int FUNC_8 (struct usb_line6*,struct snd_pcm**) ;
 int FUNC_9 (int *) ;
 void* FUNC_10 (int ,int ,int) ;
 int FUNC_11 (int ,unsigned int) ;
 int FUNC_12 (int ,unsigned int) ;

int FUNC_13(struct usb_line6 *VAR_7,
     struct line6_pcm_properties *VAR_8)
{
 int VAR_9, VAR_10;
 unsigned VAR_11 = VAR_7->properties->ep_audio_r;
 unsigned VAR_12 = VAR_7->properties->ep_audio_w;
 struct snd_pcm *VAR_13;
 struct snd_line6_pcm *VAR_14;

 if (!(VAR_7->properties->capabilities & VAR_3))
  return 0;

 VAR_10 = FUNC_8(VAR_7, &VAR_13);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_14 = FUNC_2(sizeof(*VAR_14), VAR_2);
 if (!VAR_14)
  return -VAR_1;

 FUNC_5(&VAR_14->state_mutex);
 VAR_14->pcm = VAR_13;
 VAR_14->properties = VAR_8;
 VAR_14->volume_playback[0] = VAR_14->volume_playback[1] = 255;
 VAR_14->volume_monitor = 255;
 VAR_14->line6 = VAR_7;

 FUNC_9(&VAR_14->out.lock);
 FUNC_9(&VAR_14->in.lock);
 VAR_14->impulse_period = VAR_4;

 VAR_7->line6pcm = VAR_14;

 VAR_13->private_data = VAR_14;
 VAR_13->private_free = VAR_5;

 VAR_14->max_packet_size_in =
  FUNC_10(VAR_7->usbdev,
   FUNC_11(VAR_7->usbdev, VAR_11), 0);
 VAR_14->max_packet_size_out =
  FUNC_10(VAR_7->usbdev,
   FUNC_12(VAR_7->usbdev, VAR_12), 1);
 if (!VAR_14->max_packet_size_in || !VAR_14->max_packet_size_out) {
  FUNC_1(VAR_14->line6->ifcdev,
   "cannot get proper max packet size\n");
  return -VAR_0;
 }

 VAR_10 = FUNC_4(VAR_14);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_10 = FUNC_3(VAR_14);
 if (VAR_10 < 0)
  return VAR_10;


 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_6); VAR_9++) {
  VAR_10 = FUNC_6(VAR_7->card,
      FUNC_7(&VAR_6[VAR_9], VAR_14));
  if (VAR_10 < 0)
   return VAR_10;
 }

 return 0;
}
