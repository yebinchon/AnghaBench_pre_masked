
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface_descriptor {int bNumEndpoints; } ;
struct usb_interface {struct usb_host_interface* altsetting; } ;
struct usb_host_interface {int dummy; } ;
struct usb_endpoint_descriptor {int dummy; } ;
struct usb_driver {int dummy; } ;
struct snd_usb_audio {int usb_id; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_usb_audio*,struct usb_interface*,struct usb_driver*,struct usb_host_interface*) ;
 int FUNC_2 (struct snd_usb_audio*,struct usb_interface*,struct usb_driver*,struct usb_host_interface*) ;
 int FUNC_3 (struct snd_usb_audio*,struct usb_interface*,struct usb_driver*,struct usb_host_interface*) ;
 struct usb_endpoint_descriptor* FUNC_4 (struct usb_host_interface*,int ) ;
 struct usb_interface_descriptor* FUNC_5 (struct usb_host_interface*) ;
 int FUNC_6 (struct usb_endpoint_descriptor*) ;
 int FUNC_7 (struct usb_endpoint_descriptor*) ;

__attribute__((used)) static int FUNC_8(struct snd_usb_audio *VAR_1,
      struct usb_interface *VAR_2,
      struct usb_driver *VAR_3)
{
 struct usb_host_interface *VAR_4;
 struct usb_interface_descriptor *VAR_5;
 struct usb_endpoint_descriptor *VAR_6;
 int VAR_7;

 VAR_4 = &VAR_2->altsetting[0];
 VAR_5 = FUNC_5(VAR_4);


 if (VAR_5->bNumEndpoints < 1)
  return -VAR_0;
 VAR_6 = FUNC_4(VAR_4, 0);
 if (!FUNC_6(VAR_6) &&
     !FUNC_7(VAR_6))
  return -VAR_0;

 switch (FUNC_0(VAR_1->usb_id)) {
 case 0x0499:
  VAR_7 = FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4);
  if (VAR_7 != -VAR_0)
   return VAR_7;
  break;
 case 0x0582:
  VAR_7 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
  if (VAR_7 != -VAR_0)
   return VAR_7;
  break;
 }

 return FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4);
}
