
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usb_interface {int altsetting; } ;
struct usb_driver {int dummy; } ;
struct snd_usb_audio_quirk {scalar_t__ ifnum; } ;
struct snd_usb_audio {TYPE_3__* dev; } ;
struct TYPE_8__ {int bInterfaceNumber; scalar_t__ bInterfaceClass; } ;
struct TYPE_7__ {TYPE_2__* actconfig; } ;
struct TYPE_5__ {int bNumInterfaces; } ;
struct TYPE_6__ {TYPE_1__ desc; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct snd_usb_audio*,struct usb_interface*,struct usb_driver*) ;
 TYPE_4__* FUNC_1 (int ) ;
 int FUNC_2 (struct usb_driver*,struct usb_interface*,void*) ;
 struct usb_interface* FUNC_3 (TYPE_3__*,int) ;
 scalar_t__ FUNC_4 (struct usb_interface*) ;

__attribute__((used)) static int FUNC_5(struct snd_usb_audio *VAR_1,
        struct usb_interface *VAR_2,
        struct usb_driver *VAR_3,
        const struct snd_usb_audio_quirk *VAR_4)
{
 int VAR_5 = FUNC_1(VAR_2->altsetting)->bInterfaceNumber;
 int VAR_6, VAR_7, VAR_8;

 VAR_8 = FUNC_0(VAR_1, VAR_2, VAR_3);
 if (VAR_8 < 0)
  return VAR_8;





 VAR_6 = VAR_1->dev->actconfig->desc.bNumInterfaces;
 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  if (VAR_7 == VAR_5 || VAR_4->ifnum >= 0)
   continue;
  VAR_2 = FUNC_3(VAR_1->dev, VAR_7);
  if (!VAR_2 ||
      FUNC_4(VAR_2) ||
      FUNC_1(VAR_2->altsetting)->bInterfaceClass !=
       VAR_0)
   continue;

  VAR_8 = FUNC_0(VAR_1, VAR_2, VAR_3);
  if (VAR_8 >= 0)
   FUNC_2(VAR_3, VAR_2, (void *)-1L);
 }

 return 0;
}
