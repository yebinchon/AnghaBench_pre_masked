
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device_descriptor {int bLength; scalar_t__ bDescriptorType; int idVendor; int idProduct; scalar_t__ bDeviceClass; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct usb_device_descriptor*,int,int,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(FILE *VAR_3)
{
 struct usb_device_descriptor VAR_4;

 if (FUNC_0(&VAR_4, sizeof VAR_4, 1, VAR_3) != 1)
  return -1;

 if (VAR_4.bLength != sizeof VAR_4 || VAR_4.bDescriptorType != VAR_2)
  return -1;


 if (VAR_4.idVendor == 0x0547 && VAR_4.idProduct == 0x1002)
  return 0;
 if (VAR_4.idVendor == 0x0547 && VAR_4.idProduct == 0x2235)
  return 0;


 if (VAR_4.idVendor == 0x04b4 && VAR_4.idProduct == 0x8613)
  return 0;


 if (VAR_4.idVendor == 0x0547 && VAR_4.idProduct == 0x0080)
  return 0;


 if (VAR_4.idVendor == 0x06cd && VAR_4.idProduct == 0x010b)
  return 0;




 if (VAR_4.idVendor == 0x0525 && VAR_4.idProduct == 0xa4a0)
  return 0;


 if (VAR_4.idVendor == 0x0525 && VAR_4.idProduct == 0xa4a4)
  return FUNC_1(VAR_3);



 if (VAR_4.idVendor == 0x0525 && VAR_4.idProduct == 0xa4a3)
  return 0;



 if (VAR_4.idVendor == 0xfff0 && VAR_4.idProduct == 0xfff0)
  return 0;




 if (VAR_4.idVendor == 0x0b62 && VAR_4.idProduct == 0x0059)
  return 0;







 if (VAR_4.idVendor == 0x0525 && VAR_4.idProduct == 0xa4ac
  && (VAR_4.bDeviceClass == VAR_0
   || VAR_4.bDeviceClass == VAR_1))
  return FUNC_1(VAR_3);

 return -1;
}
