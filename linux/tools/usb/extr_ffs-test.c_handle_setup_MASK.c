
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ctrlrequest {int bRequestType; int bRequest; int wLength; int wIndex; int wValue; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static void FUNC_2(const struct usb_ctrlrequest *VAR_0)
{
 FUNC_1("bRequestType = %d\n", VAR_0->bRequestType);
 FUNC_1("bRequest     = %d\n", VAR_0->bRequest);
 FUNC_1("wValue       = %d\n", FUNC_0(VAR_0->wValue));
 FUNC_1("wIndex       = %d\n", FUNC_0(VAR_0->wIndex));
 FUNC_1("wLength      = %d\n", FUNC_0(VAR_0->wLength));
}
