
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct usb_device {int dev; } ;
struct snd_usb_audio {struct media_device* media_dev; } ;
struct media_device {int devnode; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct media_device*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char*,int) ;
 struct usb_device* FUNC_2 (struct usb_interface*) ;
 int FUNC_3 (struct media_device*,int ,int ) ;
 int FUNC_4 (struct media_device*) ;
 struct media_device* FUNC_5 (struct usb_device*,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct snd_usb_audio*) ;
 int FUNC_8 (struct snd_usb_audio*) ;

int FUNC_9(struct snd_usb_audio *VAR_3,
   struct usb_interface *VAR_4)
{
 struct media_device *VAR_5;
 struct usb_device *VAR_6 = FUNC_2(VAR_4);
 int VAR_7 = 0;






 if (VAR_3->media_dev) {
  VAR_5 = VAR_3->media_dev;
  goto snd_mixer_init;
 }

 VAR_5 = FUNC_5(VAR_6, VAR_1, VAR_2);
 if (FUNC_0(VAR_5))
  return -VAR_0;


 VAR_3->media_dev = VAR_5;

snd_mixer_init:

 VAR_7 = FUNC_8(VAR_3);

 if (VAR_7)
  FUNC_1(&VAR_6->dev,
   "Couldn't create media mixer entities. Error: %d\n",
   VAR_7);

 if (!FUNC_6(VAR_5->devnode)) {

  if (VAR_7)
   goto create_fail;


  VAR_7 = FUNC_4(VAR_5);
create_fail:
  if (VAR_7) {
   FUNC_7(VAR_3);
   FUNC_3(VAR_5, VAR_1, VAR_2);

   VAR_3->media_dev = ((void*)0);
   FUNC_1(&VAR_6->dev,
    "Couldn't register media device. Error: %d\n",
    VAR_7);
   return VAR_7;
  }
 }

 return VAR_7;
}
