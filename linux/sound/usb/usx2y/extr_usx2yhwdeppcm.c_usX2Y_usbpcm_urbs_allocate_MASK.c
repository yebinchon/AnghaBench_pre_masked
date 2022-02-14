
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_device {int dummy; } ;
struct urb {unsigned int pipe; int interval; int complete; struct snd_usX2Y_substream* context; int number_of_packets; struct usb_device* dev; int transfer_buffer; } ;
struct snd_usX2Y_substream {int endpoint; TYPE_2__* usX2Y; struct urb** urb; int maxpacksize; } ;
struct TYPE_4__ {TYPE_1__* hwdep_pcm_shm; struct usb_device* dev; struct snd_usX2Y_substream** subs; } ;
struct TYPE_3__ {int capture0xA; int capture0x8; int playback; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (struct snd_usX2Y_substream*) ;
 struct urb* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct urb*) ;
 int FUNC_4 (struct usb_device*,unsigned int,int) ;
 unsigned int FUNC_5 (struct usb_device*,int) ;
 unsigned int FUNC_6 (struct usb_device*,int) ;

__attribute__((used)) static int FUNC_7(struct snd_usX2Y_substream *VAR_6)
{
 int VAR_7;
 unsigned int VAR_8;
 int VAR_9 = VAR_6 == VAR_6->usX2Y->subs[VAR_4];
 struct usb_device *VAR_10 = VAR_6->usX2Y->dev;

 VAR_8 = VAR_9 ? FUNC_6(VAR_10, VAR_6->endpoint) :
   FUNC_5(VAR_10, VAR_6->endpoint);
 VAR_6->maxpacksize = FUNC_4(VAR_10, VAR_8, VAR_9);
 if (!VAR_6->maxpacksize)
  return -VAR_0;


 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  struct urb **VAR_11 = VAR_6->urb + VAR_7;
  if (*VAR_11) {
   FUNC_3(*VAR_11);
   continue;
  }
  *VAR_11 = FUNC_2(FUNC_0(), VAR_2);
  if (((void*)0) == *VAR_11) {
   FUNC_1(VAR_6);
   return -VAR_1;
  }
  (*VAR_11)->transfer_buffer = VAR_9 ?
   VAR_6->usX2Y->hwdep_pcm_shm->playback : (
    VAR_6->endpoint == 0x8 ?
    VAR_6->usX2Y->hwdep_pcm_shm->capture0x8 :
    VAR_6->usX2Y->hwdep_pcm_shm->capture0xA);

  (*VAR_11)->dev = VAR_10;
  (*VAR_11)->pipe = VAR_8;
  (*VAR_11)->number_of_packets = FUNC_0();
  (*VAR_11)->context = VAR_6;
  (*VAR_11)->interval = 1;
  (*VAR_11)->complete = VAR_5;
 }
 return 0;
}
