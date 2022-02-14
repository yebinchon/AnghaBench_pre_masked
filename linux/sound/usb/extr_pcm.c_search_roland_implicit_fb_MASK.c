
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface_descriptor {unsigned int bAlternateSetting; scalar_t__ bInterfaceClass; int bInterfaceSubClass; int bInterfaceProtocol; int bNumEndpoints; } ;
struct usb_interface {unsigned int num_altsetting; struct usb_host_interface* altsetting; } ;
struct usb_host_interface {int dummy; } ;
struct usb_endpoint_descriptor {int bmAttributes; unsigned int bEndpointAddress; } ;
struct usb_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct usb_endpoint_descriptor* FUNC_0 (struct usb_host_interface*,int ) ;
 struct usb_interface_descriptor* FUNC_1 (struct usb_host_interface*) ;
 int FUNC_2 (struct usb_endpoint_descriptor*) ;
 struct usb_interface* FUNC_3 (struct usb_device*,int) ;

__attribute__((used)) static int FUNC_4(struct usb_device *VAR_4, int VAR_5,
         unsigned int VAR_6,
         struct usb_host_interface **VAR_7,
         unsigned int *VAR_8)
{
 struct usb_interface *VAR_9;
 struct usb_interface_descriptor *VAR_10;
 struct usb_endpoint_descriptor *VAR_11;

 VAR_9 = FUNC_3(VAR_4, VAR_5);
 if (!VAR_9 || VAR_9->num_altsetting < VAR_6 + 1)
  return -VAR_0;
 *VAR_7 = &VAR_9->altsetting[VAR_6];
 VAR_10 = FUNC_1(*VAR_7);
 if (VAR_10->bAlternateSetting != VAR_6 ||
     VAR_10->bInterfaceClass != VAR_1 ||
     (VAR_10->bInterfaceSubClass != 2 &&
      VAR_10->bInterfaceProtocol != 2 ) ||
     VAR_10->bNumEndpoints < 1)
  return -VAR_0;
 VAR_11 = FUNC_0(*VAR_7, 0);
 if (!FUNC_2(VAR_11) ||
     (VAR_11->bmAttributes & VAR_3) !=
     VAR_2)
  return -VAR_0;
 *VAR_8 = VAR_11->bEndpointAddress;
 return 0;
}
