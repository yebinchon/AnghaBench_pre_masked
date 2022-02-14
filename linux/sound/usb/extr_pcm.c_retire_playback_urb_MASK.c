
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct urb {int transfer_buffer_length; } ;
struct snd_usb_substream {int last_delay; int last_frame_number; int lock; TYPE_2__* dev; int running; struct snd_usb_endpoint* data_endpoint; TYPE_1__* pcm_substream; } ;
struct snd_usb_endpoint {int stride; } ;
struct snd_pcm_runtime {int rate; int delay; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {struct snd_pcm_runtime* runtime; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,int,int) ;
 int FUNC_2 (struct snd_usb_substream*,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_6(struct snd_usb_substream *VAR_0,
          struct urb *VAR_1)
{
 unsigned long VAR_2;
 struct snd_pcm_runtime *VAR_3 = VAR_0->pcm_substream->runtime;
 struct snd_usb_endpoint *VAR_4 = VAR_0->data_endpoint;
 int VAR_5 = VAR_1->transfer_buffer_length / VAR_4->stride;
 int VAR_6;




 if (!VAR_5)
  return;

 FUNC_3(&VAR_0->lock, VAR_2);
 if (!VAR_0->last_delay)
  goto out;

 VAR_6 = FUNC_2(VAR_0, VAR_3->rate);

 if (VAR_5 > VAR_0->last_delay)
  VAR_0->last_delay = 0;
 else
  VAR_0->last_delay -= VAR_5;
 VAR_3->delay = VAR_0->last_delay;






 if (FUNC_0(VAR_6 - VAR_0->last_delay) * 1000 > VAR_3->rate * 2)
  FUNC_1(&VAR_0->dev->dev,
   "delay: estimated %d, actual %d\n",
   VAR_6, VAR_0->last_delay);

 if (!VAR_0->running) {



  VAR_0->last_frame_number =
   FUNC_5(VAR_0->dev) & 0xff;
 }

 out:
 FUNC_4(&VAR_0->lock, VAR_2);
}
