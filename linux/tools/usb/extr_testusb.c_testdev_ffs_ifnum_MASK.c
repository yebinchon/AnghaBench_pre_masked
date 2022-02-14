
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface_descriptor {int bLength; scalar_t__ bDescriptorType; int bNumEndpoints; scalar_t__ bInterfaceClass; scalar_t__ bInterfaceSubClass; scalar_t__ bInterfaceProtocol; scalar_t__ bInterfaceNumber; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,unsigned char,int,int *) ;

__attribute__((used)) static int FUNC_1(FILE *VAR_2)
{
 union {
  char buf[255];
  struct usb_interface_descriptor intf;
 } VAR_3;

 for (;;) {
  if (FUNC_0(VAR_3.buf, 1, 1, VAR_2) != 1)
   return -1;
  if (FUNC_0(VAR_3.buf + 1, (unsigned char)VAR_3.buf[0] - 1, 1, VAR_2) != 1)
   return -1;

  if (VAR_3.intf.bLength == sizeof VAR_3.intf
   && VAR_3.intf.bDescriptorType == VAR_1
   && VAR_3.intf.bNumEndpoints == 2
   && VAR_3.intf.bInterfaceClass == VAR_0
   && VAR_3.intf.bInterfaceSubClass == 0
   && VAR_3.intf.bInterfaceProtocol == 0)
   return (unsigned char)VAR_3.intf.bInterfaceNumber;
 }
}
