
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device_id {int match_flags; scalar_t__ idVendor; scalar_t__ idProduct; scalar_t__ driver_info; } ;
struct usb_device {int dummy; } ;
struct snd_usb_audio_quirk {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 struct usb_device_id* VAR_1 ;

__attribute__((used)) static const struct snd_usb_audio_quirk *
FUNC_2(struct usb_device *VAR_2, unsigned int VAR_3)
{
 const struct usb_device_id *VAR_4;

 for (VAR_4 = VAR_1; VAR_4->match_flags; VAR_4++) {

  if ((VAR_4->match_flags & VAR_0) ==
      VAR_0 &&
      VAR_4->idVendor == FUNC_1(VAR_3) &&
      VAR_4->idProduct == FUNC_0(VAR_3))
   return (const struct snd_usb_audio_quirk *)VAR_4->driver_info;
 }

 return ((void*)0);
}
