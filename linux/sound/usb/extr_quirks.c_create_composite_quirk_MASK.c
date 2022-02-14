
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int altsetting; } ;
struct usb_driver {int dummy; } ;
struct snd_usb_audio_quirk {int ifnum; struct snd_usb_audio_quirk* data; } ;
struct snd_usb_audio {int dev; } ;
struct TYPE_2__ {int bInterfaceNumber; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (struct snd_usb_audio*,struct usb_interface*,struct usb_driver*,struct snd_usb_audio_quirk const*) ;
 int FUNC_2 (struct usb_driver*,struct usb_interface*,void*) ;
 struct usb_interface* FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (struct usb_interface*) ;

__attribute__((used)) static int FUNC_5(struct snd_usb_audio *VAR_0,
      struct usb_interface *VAR_1,
      struct usb_driver *VAR_2,
      const struct snd_usb_audio_quirk *VAR_3)
{
 int VAR_4 = FUNC_0(VAR_1->altsetting)->bInterfaceNumber;
 const struct snd_usb_audio_quirk *VAR_5;
 int VAR_6;

 for (VAR_5 = VAR_3->data; VAR_5->ifnum >= 0; ++VAR_5) {
  VAR_1 = FUNC_3(VAR_0->dev, VAR_5->ifnum);
  if (!VAR_1)
   continue;
  if (VAR_5->ifnum != VAR_4 &&
      FUNC_4(VAR_1))
   continue;
  VAR_6 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_5);
  if (VAR_6 < 0)
   return VAR_6;
 }

 for (VAR_5 = VAR_3->data; VAR_5->ifnum >= 0; ++VAR_5) {
  VAR_1 = FUNC_3(VAR_0->dev, VAR_5->ifnum);
  if (!VAR_1)
   continue;
  if (VAR_5->ifnum != VAR_4 &&
      !FUNC_4(VAR_1))
   FUNC_2(VAR_2, VAR_1, (void *)-1L);
 }

 return 0;
}
