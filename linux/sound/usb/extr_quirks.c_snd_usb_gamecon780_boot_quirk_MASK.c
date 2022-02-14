
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct usb_device*,int ,int ,int,int,int,int*,int) ;
 int FUNC_1 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_2(struct usb_device *VAR_5)
{



 u8 VAR_6[2] = { 0x74, 0xe3 };
 return FUNC_0(VAR_5, FUNC_1(VAR_5, 0), VAR_1,
   VAR_3 | VAR_4 | VAR_2,
   VAR_0 << 8, 9 << 8, VAR_6, 2);
}
