
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct usb_driver {int dummy; } ;
struct snd_usb_audio_quirk {scalar_t__ ifnum; } ;
struct snd_usb_audio {int dummy; } ;


 int FUNC_0 (struct snd_usb_audio*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_1(struct snd_usb_audio *VAR_0,
           struct usb_interface *VAR_1,
           struct usb_driver *VAR_2,
           const struct snd_usb_audio_quirk *VAR_3)
{
 if (VAR_3->ifnum < 0)
  return 0;

 return FUNC_0(VAR_0, VAR_3->ifnum, 0);
}
