
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct usb_interface {struct usb_host_interface* altsetting; } ;
struct usb_host_interface {int dummy; } ;
struct snd_usb_substream {int need_setup_ep; scalar_t__ direction; TYPE_1__* stream; scalar_t__ last_frame_number; scalar_t__ last_delay; scalar_t__ transfer_done; scalar_t__ hwptr_done; TYPE_4__* data_endpoint; int cur_rate; TYPE_3__* cur_audiofmt; TYPE_2__* dev; TYPE_4__* sync_endpoint; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {scalar_t__ delay; struct snd_usb_substream* private_data; } ;
struct TYPE_9__ {int curpacksize; void* curframesize; int maxpacksize; void* maxframesize; } ;
struct TYPE_8__ {size_t altset_idx; int iface; } ;
struct TYPE_7__ {int dev; } ;
struct TYPE_6__ {int chip; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (struct snd_pcm_runtime*,int ) ;
 int FUNC_1 (struct snd_usb_substream*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct snd_usb_substream*,TYPE_3__*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (int ,int ,struct usb_host_interface*,TYPE_3__*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct snd_usb_substream*,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct snd_usb_substream*) ;
 struct usb_interface* FUNC_11 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_12(struct snd_pcm_substream *VAR_4)
{
 struct snd_pcm_runtime *VAR_5 = VAR_4->runtime;
 struct snd_usb_substream *VAR_6 = VAR_5->private_data;
 struct usb_host_interface *VAR_7;
 struct usb_interface *VAR_8;
 int VAR_9;

 if (! VAR_6->cur_audiofmt) {
  FUNC_2(&VAR_6->dev->dev, "no format is specified!\n");
  return -VAR_1;
 }

 VAR_9 = FUNC_7(VAR_6->stream->chip);
 if (VAR_9 < 0)
  return VAR_9;
 if (FUNC_4(!VAR_6->data_endpoint)) {
  VAR_9 = -VAR_0;
  goto unlock;
 }

 FUNC_5(VAR_6->sync_endpoint);
 FUNC_5(VAR_6->data_endpoint);

 VAR_9 = FUNC_8(VAR_6, VAR_3);
 if (VAR_9 < 0)
  goto unlock;

 VAR_9 = FUNC_3(VAR_6, VAR_6->cur_audiofmt);
 if (VAR_9 < 0)
  goto unlock;

 if (VAR_6->need_setup_ep) {

  VAR_8 = FUNC_11(VAR_6->dev, VAR_6->cur_audiofmt->iface);
  VAR_7 = &VAR_8->altsetting[VAR_6->cur_audiofmt->altset_idx];
  VAR_9 = FUNC_6(VAR_6->stream->chip,
            VAR_6->cur_audiofmt->iface,
            VAR_7,
            VAR_6->cur_audiofmt,
            VAR_6->cur_rate);
  if (VAR_9 < 0)
   goto unlock;

  VAR_9 = FUNC_1(VAR_6);
  if (VAR_9 < 0)
   goto unlock;
  VAR_6->need_setup_ep = 0;
 }


 VAR_6->data_endpoint->maxframesize =
  FUNC_0(VAR_5, VAR_6->data_endpoint->maxpacksize);
 VAR_6->data_endpoint->curframesize =
  FUNC_0(VAR_5, VAR_6->data_endpoint->curpacksize);


 VAR_6->hwptr_done = 0;
 VAR_6->transfer_done = 0;
 VAR_6->last_delay = 0;
 VAR_6->last_frame_number = 0;
 VAR_5->delay = 0;



 if (VAR_6->direction == VAR_2)
  VAR_9 = FUNC_10(VAR_6);

 unlock:
 FUNC_9(VAR_6->stream->chip);
 return VAR_9;
}
