
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_usb_substream {int trigger_tstamp_pending_update; int running; TYPE_1__* data_endpoint; } ;
struct snd_pcm_substream {TYPE_2__* runtime; } ;
struct TYPE_4__ {struct snd_usb_substream* private_data; } ;
struct TYPE_3__ {void* retire_data_urb; int * prepare_data_urb; } ;


 int VAR_0 ;




 int * VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (struct snd_usb_substream*,int) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_3,
           int VAR_4)
{
 struct snd_usb_substream *VAR_5 = VAR_3->runtime->private_data;

 switch (VAR_4) {
 case 129:
  VAR_5->trigger_tstamp_pending_update = 1;

 case 130:
  VAR_5->data_endpoint->prepare_data_urb = VAR_1;
  VAR_5->data_endpoint->retire_data_urb = VAR_2;
  VAR_5->running = 1;
  return 0;
 case 128:
  FUNC_0(VAR_5, 0);
  VAR_5->running = 0;
  return 0;
 case 131:
  VAR_5->data_endpoint->prepare_data_urb = ((void*)0);

  VAR_5->data_endpoint->retire_data_urb = VAR_2;
  VAR_5->running = 0;
  return 0;
 }

 return -VAR_0;
}
