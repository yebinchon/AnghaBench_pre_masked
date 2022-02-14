
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_host_interface {int dummy; } ;
struct snd_usb_audio {int dummy; } ;
struct audioformat {int attributes; int protocol; } ;


 int VAR_0 ;


 int FUNC_0 (struct snd_usb_audio*,int,struct usb_host_interface*,struct audioformat*) ;
 int FUNC_1 (struct snd_usb_audio*,int,struct usb_host_interface*,struct audioformat*) ;

int FUNC_2(struct snd_usb_audio *VAR_1, int VAR_2,
         struct usb_host_interface *VAR_3,
         struct audioformat *VAR_4)
{

 if (!(VAR_4->attributes & VAR_0))
  return 0;

 switch (VAR_4->protocol) {
 case 129:
 default:
  return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);

 case 128:
  return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
 }
}
