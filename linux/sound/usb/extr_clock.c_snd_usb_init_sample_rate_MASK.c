
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_host_interface {int dummy; } ;
struct snd_usb_audio {int badd_profile; } ;
struct audioformat {int protocol; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (struct snd_usb_audio*,int,struct usb_host_interface*,struct audioformat*,int) ;
 int FUNC_1 (struct snd_usb_audio*,int,struct usb_host_interface*,struct audioformat*,int) ;

int FUNC_2(struct snd_usb_audio *VAR_3, int VAR_4,
        struct usb_host_interface *VAR_5,
        struct audioformat *VAR_6, int VAR_7)
{
 switch (VAR_6->protocol) {
 case 130:
 default:
  return FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);

 case 128:
  if (VAR_3->badd_profile >= VAR_2) {
   if (VAR_7 != VAR_1)
    return -VAR_0;
   else
    return 0;
  }

 case 129:
  return FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
 }
}
