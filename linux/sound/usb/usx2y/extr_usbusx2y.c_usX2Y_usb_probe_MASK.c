
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct usb_device_id {int dummy; } ;
struct TYPE_2__ {int idProduct; int idVendor; } ;
struct usb_device {TYPE_1__ descriptor; } ;
struct snd_card {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_card*) ;
 int FUNC_2 (struct snd_card*) ;
 int FUNC_3 (struct usb_device*,struct usb_interface*,struct snd_card**) ;
 int FUNC_4 (struct snd_card*,struct usb_device*) ;

__attribute__((used)) static int FUNC_5(struct usb_device *VAR_4,
      struct usb_interface *VAR_5,
      const struct usb_device_id *VAR_6,
      struct snd_card **VAR_7)
{
 int VAR_8;
 struct snd_card * VAR_9;

 *VAR_7 = ((void*)0);
 if (FUNC_0(VAR_4->descriptor.idVendor) != 0x1604 ||
     (FUNC_0(VAR_4->descriptor.idProduct) != VAR_1 &&
      FUNC_0(VAR_4->descriptor.idProduct) != VAR_2 &&
      FUNC_0(VAR_4->descriptor.idProduct) != VAR_3))
  return -VAR_0;

 VAR_8 = FUNC_3(VAR_4, VAR_5, &VAR_9);
 if (VAR_8 < 0)
  return VAR_8;
 if ((VAR_8 = FUNC_4(VAR_9, VAR_4)) < 0 ||
     (VAR_8 = FUNC_2(VAR_9)) < 0) {
  FUNC_1(VAR_9);
  return VAR_8;
 }
 *VAR_7 = VAR_9;
 return 0;
}
