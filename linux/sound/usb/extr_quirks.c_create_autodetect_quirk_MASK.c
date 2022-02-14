
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct usb_driver {int dummy; } ;
struct snd_usb_audio {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_usb_audio*,struct usb_interface*,struct usb_driver*) ;
 int FUNC_1 (struct snd_usb_audio*,struct usb_interface*,struct usb_driver*) ;

__attribute__((used)) static int FUNC_2(struct snd_usb_audio *VAR_1,
       struct usb_interface *VAR_2,
       struct usb_driver *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3);
 if (VAR_4 == -VAR_0)
  VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
 return VAR_4;
}
