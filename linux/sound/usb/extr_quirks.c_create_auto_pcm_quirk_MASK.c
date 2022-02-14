
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface_descriptor {int bNumEndpoints; } ;
struct usb_interface {int num_altsetting; struct usb_host_interface* altsetting; } ;
struct usb_host_interface {int extralen; int extra; } ;
struct usb_endpoint_descriptor {int dummy; } ;
struct usb_driver {int dummy; } ;
struct uac_format_type_i_discrete_descriptor {int bLength; } ;
struct uac1_as_header_descriptor {int bLength; } ;
struct snd_usb_audio {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_usb_audio*,struct usb_interface*,struct usb_driver*,int *) ;
 struct usb_endpoint_descriptor* FUNC_1 (struct usb_host_interface*,int ) ;
 struct usb_interface_descriptor* FUNC_2 (struct usb_host_interface*) ;
 void* FUNC_3 (int ,int ,int *,int ) ;
 int FUNC_4 (struct usb_endpoint_descriptor*) ;

__attribute__((used)) static int FUNC_5(struct snd_usb_audio *VAR_3,
     struct usb_interface *VAR_4,
     struct usb_driver *VAR_5)
{
 struct usb_host_interface *VAR_6;
 struct usb_interface_descriptor *VAR_7;
 struct usb_endpoint_descriptor *VAR_8;
 struct uac1_as_header_descriptor *VAR_9;
 struct uac_format_type_i_discrete_descriptor *VAR_10;
 if (VAR_4->num_altsetting < 2)
  return -VAR_0;
 VAR_6 = &VAR_4->altsetting[1];
 VAR_7 = FUNC_2(VAR_6);


 if (VAR_7->bNumEndpoints < 1)
  return -VAR_0;
 VAR_8 = FUNC_1(VAR_6, 0);
 if (!FUNC_4(VAR_8))
  return -VAR_0;


 VAR_9 = FUNC_3(VAR_6->extra, VAR_6->extralen, ((void*)0),
           VAR_1);
 VAR_10 = FUNC_3(VAR_6->extra, VAR_6->extralen, ((void*)0),
           VAR_2);
 if (!VAR_9 || VAR_9->bLength < 7 ||
     !VAR_10 || VAR_10->bLength < 8)
  return -VAR_0;

 return FUNC_0(VAR_3, VAR_4, VAR_5, ((void*)0));
}
